// dumped by nick (hypdumper) \\
// date: 2026-05-13 01:43:56 \\
// took 0.312s \\

#pragma once
#include <cstdint>

namespace Hyperion
{
    static constexpr uintptr_t ControlFlowGuard = 0xac2b20;
    static constexpr uintptr_t BitMap = 0x11ae918;

    enum Offsets    {
        ByteShift = 15,   // 0xf
        PageShift = 12,   // 0xc
        BitMask   = 7,   // 0x7
        PageSize  = 0x1000,  // 4096
        PageMask  = 0xfff   // 4095
    };
} // namespace Hyperion
