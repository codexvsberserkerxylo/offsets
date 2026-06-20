// dumped by nick (hypdumper) \\
// date: 2026-06-10 07:02:10 \\
// took 0.310s \\

#pragma once
#include <cstdint>

namespace Hyperion
{
    static constexpr uintptr_t ControlFlowGuard = 0x5e21a0;
    static constexpr uintptr_t BitMap = 0x157f0;

    enum Offsets    {
        ByteShift = 15,   // 0xf
        PageShift = 12,   // 0xc
        BitMask   = 7,   // 0x7
        PageSize  = 0x1000,  // 4096
        PageMask  = 0xfff   // 4095
    };
} // namespace Hyperion