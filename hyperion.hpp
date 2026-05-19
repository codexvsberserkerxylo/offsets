// dumped by nick (hypdumper) \\
// date: 2026-05-20 01:36:38 \\
// took 0.309s \\

#pragma once
#include <cstdint>

namespace Hyperion
{
    static constexpr uintptr_t ControlFlowGuard = 0x1482210;
    static constexpr uintptr_t BitMap = 0x1567be8;

    enum Offsets    {
        ByteShift = 15,   // 0xf
        PageShift = 12,   // 0xc
        BitMask   = 7,   // 0x7
        PageSize  = 0x1000,  // 4096
        PageMask  = 0xfff   // 4095
    };
} // namespace Hyperion