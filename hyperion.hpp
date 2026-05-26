// dumped by nick (hypdumper) \\
// date: 2026-05-23 22:40:16 \\
// took 0.300s \\

#pragma once
#include <cstdint>

namespace Hyperion
{
    static constexpr uintptr_t ControlFlowGuard = 0x75cfc0;
    static constexpr uintptr_t BitMap = 0x1d26b8;

    enum Offsets    {
        ByteShift = 15,   // 0xf
        PageShift = 12,   // 0xc
        BitMask   = 7,   // 0x7
        PageSize  = 0x1000,  // 4096
        PageMask  = 0xfff   // 4095
    };
} // namespace Hyperion