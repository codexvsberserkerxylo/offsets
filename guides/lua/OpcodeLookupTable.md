# OpcodeLookupTable
search for the string `iterate over` (`luau_execute_false`), 1st xref, decompile (will take around ~5 mins).

okay so now you just need to find a jumptable by just putting the whole pseudocode in any text editor (e.g. sublime text)
search for `case 0x32LL:` (hex)

you will see this:

```c
LABEL_24:
        v7 = (unsigned int *)(v28 + 0xFFFFFFF8);
        *((_DWORD *)v28 + 0xFFFFFFFE) = *(unsigned __int8 *)sub_26904E0(a1: &unk_7419400, a2: 0x30) // <--- unk is what you want
                                      | *((_DWORD *)v28 + 0xFFFFFFFE) & 0xFFFFFF00;
        *((_DWORD *)v1264 + 0xFFFFFFFF) = v30;
        i6 = (__int64 *)(v5 + 0x50);
        v10 = *(unsigned __int8 *)sub_26904E0(a1: &unk_7419400, a2: 0x30); // <--- unk is what you want
        continue;
      case 0x32LL: // <--- you are here
```

so currently `OpcodeLookupTable` is `unk_7419400` (`0x7419400`)

# OpcodeDecodeTable
since you found `OpcodeLookupTable` just add `+100` at the end of the address of it, like e.g. addr: `0x7419400` then you put +100: `0x7419500`

then wow u have `OpcodeDecodeTable`

## disclaimer

i dont know if this is a reliable way to find these things
