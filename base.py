# internal offset dumper
# fast, dumps reflectiontypes, hyperion shit and other shit
# add more strings via my strings.hpp :heart:
import re
import struct
import time
import sys
import os
import bisect
import threading
import urllib.request
import json
import mmap
import pefile
from collections import defaultdict
from dataclasses import dataclass, field
from typing import Optional, Tuple, List, Dict
from concurrent.futures import ThreadPoolExecutor, as_completed
from datetime import datetime

try:
    from capstone import Cs, CS_ARCH_X86, CS_MODE_64
    md = Cs(CS_ARCH_X86, CS_MODE_64)
    md.detail = False
except ImportError:
    print("error: capstone not found.  pip install capstone")
    sys.exit(1)

_TTY = sys.stdout.isatty()
def _c(s): return s if _TTY else ""
RST = _c("\033[0m"); GRN = _c("\033[92m"); RED = _c("\033[91m")
YEL = _c("\033[93m"); CYN = _c("\033[96m"); DIM = _c("\033[2m"); BLD = _c("\033[1m")

_IO = threading.Lock()
def _pr(s):
    with _IO:
        print(s, flush=True)

_XREF_PAT = re.compile(rb"(?:\x48|\x4C)\x8D[\x05\x0D\x15\x1D\x25\x2D\x35\x3D]", re.DOTALL)
_CALL_PAT = re.compile(rb"\xE8", re.DOTALL)
_LEA05_PAT = re.compile(rb"\x48\x8D\x05", re.DOTALL)
_QMOV_PAT = re.compile(rb"[\x48\x4C]\x8B[\x05\x0D\x15\x1D\x25\x2D\x35\x3D]", re.DOTALL)
_SHR_R10 = re.compile(rb"\x49\xC1\xEA(.)", re.DOTALL)
_AND_R10 = re.compile(rb"\x49\x83\xE2(.)", re.DOTALL)
_BITMAP_SIG = re.compile(rb"\x4C\x8B\x1D", re.DOTALL)
_CC_RUN = re.compile(rb"\xCC{4,}", re.DOTALL)
_CFG_INSTR = b"\x49\xBB\xFF\xFF\xFF\xFF\xFF\x7F\x00\x00"

_FUNC_STARTS: list = []

def _init_func_starts(data: bytes) -> None:
    global _FUNC_STARTS
    starts: set = set()
    try:
        pe_off = struct.unpack_from("<I", data, 0x3C)[0]
        exc_rva, exc_size = struct.unpack_from("<II", data, pe_off + 0xA0)
        sections = parse_pe_sections(data)
        exc_off = rva_to_offset(exc_rva, sections)
        if exc_off is not None and exc_size > 0:
            for i in range(0, exc_size, 12):
                start_rva = struct.unpack_from("<I", data, exc_off + i)[0]
                start_off = rva_to_offset(start_rva, sections)
                if start_off is not None:
                    starts.add(start_off)
    except Exception:
        pass
    
    if not starts:
        for m in _CC_RUN.finditer(data):
            j = m.end()
            if j < len(data):
                starts.add(j)
            
    _FUNC_STARTS = sorted(starts)

def _func_start_verified(data: bytes, before: int, sections: list, image_base: int) -> int:
    if not _FUNC_STARTS:
        return 0
    idx = bisect.bisect_right(_FUNC_STARTS, before) - 1
    return _FUNC_STARTS[idx] if idx >= 0 else 0

def sig_to_pattern(sig: str) -> re.Pattern:
    return re.compile(
        b"".join(b"." if b in ("?", "??") else re.escape(bytes.fromhex(b))
                 for b in sig.split()),
        re.DOTALL,
    )

@dataclass
class Target:
    name: str
    ns: str = "function"
    sub_ns: Optional[str] = None
    sig: Optional[str] = None
    sig_offset: int = 0
    rip_sig: Optional[str] = None
    rip_offset: int = 0
    string: Optional[str] = None
    strings: List[str] = field(default_factory=list)
    string_action: Optional[str] = None
    xref_index: int = 0
    constant: Optional[int] = None
    _pat: Optional[re.Pattern] = field(default=None, repr=False, compare=False)

    def compile(self) -> "Target":
        raw = self.rip_sig or self.sig
        if raw:
            self._pat = sig_to_pattern(raw)
        return self

TARGETS: List[Target] = [t.compile() for t in [
    # hyperion
    Target(name="ControlFlowGuard", ns="hyperion", constant=0x7fffffffffff, string_action="hyperion_cfg"),
    Target(name="BitMap", ns="hyperion", constant=0x7fffffffffff, string_action="hyperion_bitmap"),
    # luau
    Target(name="FireProximityPrompt", ns="function", sub_ns="Luau", sig="48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 55 41 54 41 55 41 56 41 57 48 8D 6C 24 ? 48 81 EC D0 00 00 00 48 8B 05 ? ? ? ? 48 33 C4 48 89 45 ? 4C 8B F9 E8"),
    Target(name="luaL_error", ns="function", sub_ns="Luau", string="name conflict for module '%s'", string_action="call_after_xref"),
    Target(name="luaL_errorl", ns="function", sub_ns="Luau", string="string length overflow", string_action="call_after_xref"),
    Target(name="lua_yield", ns="function", sub_ns="Luau", string="attempt to yield across metamethod/C-call boundary", string_action="func_at_xref"),
    Target(name="luaB_assert", ns="function", sub_ns="Luau", string="assertion failed!", string_action="func_at_xref"),
]]

_TARGET_BY_NAME: dict = {t.name: t for t in TARGETS}

def get_image_base(data: bytes) -> int:
    try:
        pe_off = struct.unpack_from("<I", data, 0x3C)[0]
        return struct.unpack_from("<Q", data, pe_off + 0x30)[0]
    except Exception:
        return 0

def parse_pe_sections(data: bytes) -> list:
    try:
        pe_off = struct.unpack_from("<I", data, 0x3C)[0]
        num_sec = struct.unpack_from("<H", data, pe_off + 6)[0]
        hdr_size = struct.unpack_from("<H", data, pe_off + 20)[0]
        sec_start = pe_off + 24 + hdr_size
        sections = []
        for i in range(num_sec):
            s = data[sec_start + i*40 : sec_start + (i+1)*40]
            vsize, vaddr, raw_size, raw_ptr = struct.unpack_from("<IIII", s, 8)
            sections.append((vaddr, vsize, raw_ptr, raw_size))
        return sections
    except Exception:
        return []

def to_rva(offset: int, sections: list) -> int:
    for vaddr, _, rptr, rsize in sections:
        if rptr <= offset < rptr + rsize:
            return vaddr + (offset - rptr)
    return offset

def rva_to_offset(rva: int, sections: list) -> Optional[int]:
    for vaddr, vsize, rptr, rsize in sections:
        if vaddr <= rva < vaddr + vsize:
            return rptr + (rva - vaddr)
    return None

def decompile_at(data: bytes, file_offset: int, rva: int, image_base: int) -> list:
    chunk = data[file_offset : file_offset + 128]
    return [f"0x{i.address:X}: {i.mnemonic} {i.op_str}"
            for i in md.disasm(chunk, rva + image_base)]

def _resolve_call(data: bytes, base: int, sections: list) -> Optional[Tuple[int, int]]:
    m = _CALL_PAT.search(data, base, base + 400)
    if not m:
        return None
    c_idx = m.start()
    try:
        disp = struct.unpack_from("<i", data, c_idx + 1)[0]
    except struct.error:
        return None
    return c_idx, to_rva(c_idx, sections) + 5 + disp

def build_xref_map(data: bytes, sections: list) -> Dict[int, List[int]]:
    xmap: Dict[int, List[int]] = defaultdict(list)
    sec_ranges = [(rptr, rptr + rsize, vaddr) for vaddr, vsize, rptr, rsize in sections]
    for pat in (_XREF_PAT, _QMOV_PAT):
        for m in pat.finditer(data):
            idx = m.start()
            try:
                imm32 = struct.unpack_from("<i", data, idx + 3)[0]
            except struct.error:
                continue
            rva = idx
            for rptr, rsize, vaddr in sec_ranges:
                if rptr <= idx < rptr + rsize:
                    rva = vaddr + (idx - rptr)
                    break
            xmap[rva + 7 + imm32].append(idx)
    return dict(xmap)

ScanResult = Tuple[str, Optional[int], str, dict]

def scan(data: bytes, t: Target, sections: list, image_base: int,
         xref_map: Optional[Dict[int, List[int]]] = None) -> ScanResult:
    extra: dict = {}
    res_offset: Optional[int] = None
    res_rva: Optional[int] = None

    try:
        if t.constant is not None:
            if t.string_action in ("hyperion_cfg", "hyperion_bitmap"):
                instr_idx = data.find(_CFG_INSTR)
                if instr_idx == -1:
                    return t.name, None, "CFG not found", {}
                if t.string_action == "hyperion_cfg":
                    chunk  = data[instr_idx : instr_idx + 150]
                    shifts = _SHR_R10.findall(chunk)
                    if len(shifts) >= 1: extra["ByteShift"] = shifts[0][0]
                    if len(shifts) >= 2: extra["PageShift"] = shifts[1][0]
                    bm = _AND_R10.search(chunk)
                    if bm: extra["BitMask"] = bm.group(1)[0]
                    res_offset = instr_idx
                    res_rva    = to_rva(instr_idx, sections)
                else:
                    m = _BITMAP_SIG.search(data, instr_idx, instr_idx + 100)
                    if m:
                        q_idx = m.start()
                        disp  = struct.unpack_from("<i", data, q_idx + 3)[0]
                        res_offset = q_idx
                        res_rva    = to_rva(q_idx, sections) + 7 + disp
            else:
                res_rva = t.constant

        elif t._pat is not None:
            match = t._pat.search(data)
            if not match:
                return t.name, None, "sig not found", {}
            idx = match.start()
            if t.rip_sig:
                disp       = struct.unpack_from("<i", data, idx + t.rip_offset)[0]
                res_offset = idx
                res_rva    = to_rva(idx, sections) + t.rip_offset + 4 + disp
            else:
                res_offset = idx + t.sig_offset
                res_rva    = to_rva(res_offset, sections)

        elif t.string is not None:
            xrefs = []
            str_rva = None
            str_idx = -1
            
            for cand in [t.string] + list(t.strings):
                if not cand:
                    continue
                for enc in ("utf-8", "utf-16le"):
                    encoded = cand.encode(enc)
                    start = 0
                    while True:
                        idx = data.find(encoded, start)
                        if idx == -1:
                            break
                        rva = to_rva(idx, sections)
                        if rva in xref_map:
                            str_idx = idx
                            str_rva = rva
                            xrefs = xref_map[rva]
                            break
                        start = idx + 1
                    if str_rva is not None:
                        break
                if str_rva is not None:
                    break
                    
            if str_rva is None:
                for cand in [t.string] + list(t.strings):
                    if not cand:
                        continue
                    for enc in ("utf-8", "utf-16le"):
                        encoded = cand.encode(enc)
                        str_idx = data.find(encoded)
                        if str_idx != -1:
                            str_rva = to_rva(str_idx, sections)
                            break
                    if str_rva is not None:
                        break
                if str_rva is None:
                    return t.name, None, "string not found", {}

            ptr_to_str = struct.pack("<Q", str_rva + image_base)

            if not xrefs:
                if xref_map is not None:
                    xrefs = xref_map.get(str_rva, [])
                else:
                    xrefs = [
                        m.start() for m in _XREF_PAT.finditer(data)
                        if to_rva(m.start(), sections) + 7 +
                           struct.unpack_from("<i", data, m.start() + 3)[0] == str_rva
                    ]

            if t.xref_index > 0:
                if len(xrefs) > t.xref_index:
                    xrefs = [xrefs[t.xref_index]]
                else:
                    return t.name, None, f"xref[{t.xref_index}] not found", {}

            if t.string_action == "func_at_xref":
                for xref_idx in xrefs:
                    fs = _func_start_verified(data, xref_idx, sections, image_base)
                    for i in range(xref_idx, max(0, xref_idx - 512), -1):
                        if data[i] == 0xCC and data[i+1] != 0xCC:
                            fs = i + 1
                            break
                        if data[i:i+4] == b'\x48\x89\x5C\x24' or data[i:i+4] == b'\x48\x83\xEC' or data[i:i+3] == b'\x40\x53\x48' or data[i:i+4] == b'\x48\x89\x6C\x24':
                            fs = i
                            break
                    fs_rva = to_rva(fs, sections)
                    if fs is not None and len(data) > fs + 5 and data[fs] == 0xE9:
                        disp = struct.unpack_from("<i", data, fs + 1)[0]
                        tgt_rva = fs_rva + 5 + disp
                        tgt_off = rva_to_offset(tgt_rva, sections)
                        if tgt_off is not None:
                            fs = tgt_off
                            fs_rva = tgt_rva
                    res_offset, res_rva = fs, fs_rva
                    break

            elif t.string_action == "call_after_xref":
                for xref_idx in xrefs:
                    r = _resolve_call(data, xref_idx, sections)
                    if r:
                        res_offset, res_rva = r
                        break

        if res_rva is not None:
            if res_offset is not None:
                extra["asm"] = decompile_at(data, res_offset, res_rva, image_base)
            return t.name, res_rva, "ok", extra

    except Exception as exc:
        return t.name, None, f"err: {exc}", {}

    return t.name, None, "not found", {}

_SUB_NS_ORDER = [ 
    "Hyperion", "Luau", 
]

def dump_all(p: str) -> list:
    try:
        pe = pefile.PE(p)
    except Exception:
        return []
    iat = None
    if hasattr(pe, 'DIRECTORY_ENTRY_IMPORT'):
        for entry in pe.DIRECTORY_ENTRY_IMPORT:
            if entry.dll.lower() == b'kernel32.dll':
                for imp in entry.imports:
                    if imp.name == b'IsProcessorFeaturePresent':
                        iat = imp.address - pe.OPTIONAL_HEADER.ImageBase
                        break
            if iat:
                break
    if not iat:
        return []
    sec = []
    for s in pe.sections:
        if s.Characteristics & 0x20000000:
            sec.append((s.VirtualAddress, s.SizeOfRawData))
    pdata = getattr(pe, 'DIRECTORY_ENTRY_EXCEPTION', [])
    def get_rng(rva):
        for entry in pdata:
            if entry.struct.BeginAddress <= rva < entry.struct.EndAddress:
                return entry.struct.BeginAddress, entry.struct.EndAddress
        return None
    c_h = []
    for start, size in sec:
        off  = pe.get_offset_from_rva(start)
        data = pe.__data__[off:off+size]
        idx  = 0
        while True:
            idx = data.find(b'\xFF\x15', idx)
            if idx == -1:
                break
            pos = start + idx
            if len(data) >= idx + 6:
                disp = struct.unpack('<i', data[idx+2:idx+6])[0]
                tgt  = (pos + 6 + disp) & 0xFFFFFFFF
                if tgt == iat:
                    b = get_rng(pos)
                    if b and b[0] not in c_h:
                        c_h.append(b[0])
            idx += 2
    a_h = []
    for start, size in sec:
        off  = pe.get_offset_from_rva(start)
        data = pe.__data__[off:off+size]
        idx  = 0
        while True:
            idx = data.find(b'\xE8', idx)
            if idx == -1:
                break
            pos = start + idx
            if len(data) >= idx + 5:
                disp = struct.unpack('<i', data[idx+1:idx+5])[0]
                tgt  = (pos + 5 + disp) & 0xFFFFFFFF
                if tgt in c_h:
                    b = get_rng(pos)
                    if b and b[0] not in a_h:
                        a_h.append(b[0])
            idx += 1
    out = []
    for entry in pdata:
        f_start = entry.struct.BeginAddress
        f_end   = entry.struct.EndAddress
        f_size  = f_end - f_start
        if 5 <= f_size <= 32:
            f_offset = pe.get_offset_from_rva(f_start)
            raw = pe.__data__[f_offset : f_offset + f_size]
            for i in range(len(raw) - 4):
                disp = struct.unpack('<i', raw[i : i + 4])[0]
                if i >= 1 and raw[i - 1] == 0xE8:
                    n_rva = f_start + i + 4
                    chk   = (n_rva + disp) & 0xFFFFFFFF
                    if chk in a_h:
                        if f_start not in out:
                            out.append(f_start)
                        break
                elif i >= 1 and raw[i - 1] == 0xE9:
                    n_rva = f_start + i + 4
                    chk   = (n_rva + disp) & 0xFFFFFFFF
                    if chk in a_h:
                        if f_start not in out:
                            out.append(f_start)
                        break
                elif i >= 2 and raw[i - 2] == 0xFF and raw[i - 1] in [0x15, 0x25]:
                    n_rva = f_start + i + 4
                    chk   = (n_rva + disp) & 0xFFFFFFFF
                    if chk in a_h:
                        if f_start not in out:
                            out.append(f_start)
                        break
    return out

def save_hpp(results: list, total_time: float, success_rate: float,
             live_version: str = "unknown", struct_offsets: dict = None,
             hyperion_fns: list = None, reflections: list = None) -> None:
    timestamp = datetime.now().strftime("%Y-%m-%d %H:%M:%S")
    results.sort(key=lambda x: x[0].lower())

    by_ns: Dict[str, list] = defaultdict(list)
    by_sub_ns: Dict[str, list] = defaultdict(list)
    cfg_extra: dict = {}

    for name, addr, reason, extra in results:
        t = _TARGET_BY_NAME[name]
        if name == "ControlFlowGuard" and addr is not None:
            cfg_extra = extra
        if t.sub_ns:
            by_sub_ns[t.sub_ns].append((name, addr, t.ns, extra, reason))
        else:
            by_ns[t.ns].append((name, addr, extra, reason))

    IND, IND2 = "    ", "        "

    with open("offsets.hpp", "w", encoding="utf-8") as fh:

        fh.write(
            f"// dumped by nick\n// date: {timestamp}\n// took {total_time:.1f}s\n// success rate: {success_rate:.1f}%\n\n"
            "#include <cstdint>\n#include <Windows.h>\n\n"
            "static const uintptr_t roblox_base = reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr));\n"
            "static const uintptr_t hyperion_base = reinterpret_cast<uintptr_t>(GetModuleHandleA(\"RobloxPlayerBeta.dll\"));\n\n"
            "#define REBASE(x) ((x) + roblox_base)\n"
            "#define HREBASE(x) ((x) + hyperion_base)\n\n"
        )

        if reflections:
            fh.write("enum ReflectionType : uint32_t\n{\n")
            for case_id, name in enumerate(reflections):
                fh.write(f"{IND}{name} = 0x{case_id:x},\n")
            fh.write("}; // enum ReflectionType\n\n")

        fh.write("namespace Offsets\n{\n")
        if live_version != "unknown":
            fh.write(f'{IND}inline constexpr const char* LiveChannel = "{live_version}";\n\n')

        def rbase(n, a): return f"{IND2}const uintptr_t {n} = REBASE({hex(a)});\n"
        def hyp(n, a):   return f"{IND2}const uintptr_t {n} = HREBASE({hex(a)});\n"
        def inl(n, a):   return f"{IND2}inline constexpr uintptr_t {n} = {hex(a)};\n"

        hyp_ok = [(n, a, e) for n, a, e, _ in by_ns.get("hyperion", []) if a is not None]
        if hyp_ok or cfg_extra:
            fh.write(f"{IND}namespace Hyperion\n{IND}{{\n")
            for n, a, _ in hyp_ok:
                fh.write(hyp(n, a))
            bs = cfg_extra.get("ByteShift")
            ps = cfg_extra.get("PageShift")
            bm = cfg_extra.get("BitMask")
            if any(v is not None for v in (bs, ps, bm)):
                fh.write("\n")
                if bs is not None:
                    fh.write(f"{IND2}inline constexpr uint8_t ByteShift = {bs};\n")
                if ps is not None:
                    fh.write(f"{IND2}inline constexpr uint8_t PageShift = {ps};\n"
                             f"{IND2}inline constexpr uint32_t PageSize = {hex(1<<ps)};\n"
                             f"{IND2}inline constexpr uint32_t PageMask = {hex((1<<ps)-1)};\n")
                if bm is not None:
                    fh.write(f"{IND2}inline constexpr uint8_t BitMask = {bm};\n")
            if hyperion_fns:
                fh.write(f"\n{IND2}// other\n")
                sorted_fns = sorted(hyperion_fns)
                fh.write(f"{IND2}static const uint64_t patcheb[] = {{")
                for i, rva in enumerate(sorted_fns):
                    if i % 5 == 0:
                        fh.write(f"\n{IND2}    ")
                    fh.write(f"{hex(rva)}")
                    if i < len(sorted_fns) - 1:
                        fh.write(", ")
                fh.write(f"\n{IND2}}};\n")
            fh.write(f"{IND}}} // namespace Hyperion\n\n")

        for sub_ns in _SUB_NS_ORDER:
            items = by_sub_ns.get(sub_ns)
            if not items: continue
            fh.write(f"{IND}namespace {sub_ns}\n{IND}{{\n")
            for n, a, item_ns, _, _ in items:
                if a is None or n.endswith("_rb"): continue
                fh.write(inl(n, a) if item_ns == "static" else rbase(n, a))
            fh.write(f"{IND}}} // namespace {sub_ns}\n\n")

        fh.write("} // namespace Offsets\n")

        if struct_offsets:
            fh.write("\nnamespace Structs\n{\n")
            for sn, sv in struct_offsets.items():
                fh.write(f"{IND}inline constexpr uintptr_t {sn} = {hex(sv)};\n")
            fh.write("} // namespace Structs\n")

def _get_live_version() -> Optional[str]:
    try:
        url = "https://clientsettingscdn.roblox.com/v2/client-version/WindowsPlayer"
        req = urllib.request.Request(url, headers={"User-Agent": "Mozilla/5.0"})
        with urllib.request.urlopen(req, timeout=5) as resp:
            return json.loads(resp.read().decode()).get("clientVersionUpload")
    except Exception:
        return None

def _find_roblox_dll() -> Tuple[Optional[str], Optional[str]]:
    local = os.environ.get("LOCALAPPDATA")
    if not local: return None, "unknown"
    versions = os.path.join(local, "Roblox", "Versions")
    if not os.path.exists(versions): return None, "unknown"
    for folder in os.listdir(versions):
        if folder.startswith("version-"):
            p = os.path.join(versions, folder, "RobloxPlayerBeta.dll")
            if os.path.exists(p): return p, folder
    return None, "unknown"

def main() -> None:
    import argparse
    parser = argparse.ArgumentParser(description="nicks offset dumper")
    parser.add_argument("file", nargs="?", default=None, help="binary path")
    parser.add_argument("--workers", type=int, default=min(32, (os.cpu_count() or 4) * 4))
    args = parser.parse_args()

    if args.file is None:
        if os.path.exists("dump.bin"):
            args.file = "dump.bin"
            _pr(f"{CYN}[*]{RST} defaulting to {BLD}dump.bin{RST}")
        else:
            _pr(f"{RED}[!]{RST} no binary given and dump.bin not found")
            _pr(f"    usage: {os.path.basename(sys.argv[0])} <binary> [--workers N]")
            sys.exit(1)

    while True:
        ans = input(f"{CYN}[?]{RST} dumping .dll? [{GRN}y{RST}/{RED}n{RST}/{YEL}b{RST}]: ").strip().lower()
        if ans in ("y", "yes", "n", "no", "b"): break
        _pr(f"{RED}[!]{RST} enter y, n, or both")
    mode = "dll" if ans in ("y", "yes") else ("b" if ans == "b" else "exe")

    def _load(path: str) -> tuple:
        mb = os.path.getsize(path) / 1_048_576
        _pr(f"{CYN}[*]{RST} loading {BLD}{os.path.basename(path)}{RST} ({mb:.1f} MB)")
        with open(path, "rb") as f:
            mm  = mmap.mmap(f.fileno(), 0, access=mmap.ACCESS_READ)
            raw = bytes(mm)
            mm.close()
        return raw, get_image_base(raw), parse_pe_sections(raw)

    exe_data = exe_base = exe_sections = None
    dll_data = dll_base = dll_sections = None
    dll_path = None
    live_version = _get_live_version() or "unknown"

    if mode in ("exe", "b"):
        if not os.path.exists(args.file):
            _pr(f"{RED}[!]{RST} not found: {args.file}")
            sys.exit(1)
        exe_data, exe_base, exe_sections = _load(args.file)

    if mode in ("dll", "b"):
        dll_input = input(f"{CYN}[?]{RST} path to .dll: ").strip()
        if dll_input.lower() == 'd':
            dll_path = "RobloxPlayerBeta.dll"
        else:
            dll_path = dll_input
        if not dll_path:
            _pr(f"{CYN}[*]{RST} searching for roblox installation...")
            ap, av = _find_roblox_dll()
            if ap:
                _pr(f"{GRN}[+]{RST} found: {ap}")
                dll_path, live_version = ap, av
        if not dll_path or not os.path.exists(dll_path):
            dll_path = input(f"{CYN}[?]{RST} full dll path: ").strip()
            if not os.path.exists(dll_path):
                _pr(f"{RED}[!]{RST} dll not found"); sys.exit(1)
        dll_data, dll_base, dll_sections = _load(dll_path)

    t0      = time.perf_counter()
    results: list = []

    def _run(targets, data, base, sections, label=""):
        if label:
            _pr(f"\n{BLD}{CYN}-- {label} --{RST}")
        _pr(f"{CYN}[*]{RST} building map...")
        tx = time.perf_counter()
        _init_func_starts(data)
        xmap = build_xref_map(data, sections)
        _pr(f"{CYN}[*]{RST} ready in {time.perf_counter()-tx:.2f}s\n")
        total = len(targets)
        done  = 0
        with ThreadPoolExecutor(max_workers=args.workers) as pool:
            futures = {pool.submit(scan, data, t, sections, base, xmap): t for t in targets}
            for fut in as_completed(futures):
                name, addr, reason, extra = fut.result()
                done += 1
                pct  = done * 100 // total
                if addr is not None:
                    _pr(f"  {GRN}[+]{RST}  {CYN}{name}{RST}  {BLD}{hex(addr)}{RST}  {DIM}[{done}/{total} {pct}%]{RST}")
                else:
                    _pr(f"  {RED}[-]{RST}  {DIM}{name}  {reason}  [{done}/{total} {pct}%]{RST}")
                results.append((name, addr, reason, extra))

    if mode == "dll":
        _run([t for t in TARGETS if t.ns == "hyperion"], dll_data, dll_base, dll_sections, "hyperion")
    elif mode == "exe":
        _run([t for t in TARGETS if t.ns != "hyperion"], exe_data, exe_base, exe_sections, "exe")
    else:
        _run([t for t in TARGETS if t.ns != "hyperion"], exe_data, exe_base, exe_sections, "exe")
        _run([t for t in TARGETS if t.ns == "hyperion"], dll_data, dll_base, dll_sections, "hyperion")

    total_time = time.perf_counter() - t0
    found_count = sum(1 for _, a, _, _ in results if a is not None)
    total_count = len(results)
    success_rate = (found_count / total_count * 100) if total_count > 0 else 0.0
    _pr(f"\n{BLD}[*]{RST} done in {BLD}{total_time:.2f}s{RST} — {GRN}{found_count}{RST}/{len(results)} found\n")

    found_dict     = {n: a for n, a, _, _ in results if a is not None}
    struct_offsets: dict = {}
    hyperion_fns:   list = []

    if mode in ("dll", "b") and dll_path and os.path.exists(dll_path):
        _pr(f"{CYN}[*]{RST} starting patcheb scan...")
        try:
            hyperion_fns = dump_all(dll_path)
            if hyperion_fns:
                _pr(f"{GRN}[+]{RST} found {len(hyperion_fns)} ")
                for rva in sorted(hyperion_fns):
                    _pr(f"  {GRN}[+]{RST} {CYN}->{RST} {BLD}{hex(rva)}{RST}")
            else:
                _pr(f"{YEL}[!]{RST} no patcheb found")
        except Exception as e:
            _pr(f"{YEL}[!]{RST} error: {e}")

    ordered_names = [
        "Void", "Bool", "Int", "Int64", "Float", "Double", "String", "ProtectedString",
        "Instance", "Instances", "Ray", "Vector2", "Vector3", "Vector2Int16", "Vector3Int16",
        "Rect2d", "CoordinateFrame", "Color3", "Color3uint8", "UDim", "UDim2", "Faces",
        "Axes", "Region3", "Region3Int16", "CellId", "GuidData", "PhysicalProperties",
        "BrickColor", "SystemAddress", "BinaryString", "Surface", "CollectionHandle",
        "Enum", "Property", "Tuple", "ValueArray", "ValueTable", "ValueMap", "Variant",
        "GenericFunction", "WeakFunctionRef", "ColorSequence", "ColorSequenceKeypoint",
        "NumberRange", "NumberSequence", "NumberSequenceKeypoint", "InputObject",
        "Connection", "ContentId", "DescribedBase", "RefType", "QFont", "QDir",
        "EventInstance", "TweenInfo", "DockWidgetPluginGuiInfo", "PluginDrag", "Random",
        "PathWaypoint", "FloatCurveKey", "RotationCurveKey", "ValueCurveKey", "SharedString",
        "DateTime", "RaycastParams", "RaycastResult", "OverlapParams", "LazyTable",
        "DebugTable", "CatalogSearchParams", "OptionalCoordinateFrame", "CSGPropertyData",
        "UniqueId", "Font", "SharedTable", "SharedTableIterator", "AnimationMask",
        "AnimationPose", "ClipEvaluator", "OpenCloudModel", "InstanceRef", "SecurityCapabilities",
        "ArticulatedJoint", "AnimationContext", "Secret", "Buffer", "Integer",
        "Path2DControlPoint", "ReplicationPV", "FacsReplicationData", "AnimationMaskModifier",
        "Content", "NetAssetHandle", "NetAssetRef", "Object", "AdReward", "AssetContentMap",
        "SlimReplicationData", "User", "WebViewParams", "AnimTrackPlayState", "AnimTrackMetadata",
        "AnimTrackWeight"
    ]

    save_hpp(results, total_time, success_rate, live_version, struct_offsets, hyperion_fns, ordered_names)
    _pr(f"\n{GRN}[+]{RST} saved: {BLD}offsets.hpp (Ultra Detected.) \n\npy offset.py{RST}")

if __name__ == "__main__":
    main()
