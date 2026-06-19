// dumped by nick \\
// date: 2026-06-17 19:59:26 \\
// took 0.303s \\

#pragma once
#include <cstdint>

namespace Hyperion
{
    static constexpr uintptr_t ControlFlowGuard = 0x2c820;
    static constexpr uintptr_t BitMap = 0x14afd40;

    enum Offsets    {
        ByteShift = 15,   // 0xf
        PageShift = 12,   // 0xc
        BitMask   = 7,   // 0x7
        PageSize  = 0x1000,  // 4096
        PageMask  = 0xfff   // 4095
    };
} // namespace Hyperion

static const uint64_t patcheb[] = {
    0x3f033c, 0x4512ab, 0x479d84, 0x48657c, 0x4cead0, 
    0xbccc28, 0xde6868, 0x119f480
}; // patcheb
