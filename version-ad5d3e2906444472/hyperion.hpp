// dumped by nick (hypdumper) \\
// date: 2026-06-03 23:31:16 \\
// took 0.305s \\

#pragma once
#include <cstdint>

namespace Hyperion
{
    static constexpr uintptr_t ControlFlowGuard = 0xf9bce0;
    static constexpr uintptr_t BitMap = 0x3c548;

    enum Offsets    {
        ByteShift = 15,   // 0xf
        PageShift = 12,   // 0xc
        BitMask   = 7,   // 0x7
        PageSize  = 0x1000,  // 4096
        PageMask  = 0xfff   // 4095
    };
} // namespace Hyperion