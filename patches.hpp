// soo ud
// dumped by nick

#pragma once
#include <vector>

namespace nick {
    namespace was_here {
        inline uintptr_t generalIntegrity = 0x2AD5E9;
        inline uintptr_t remapCheck = 0xE4719F;
        inline uintptr_t clientIntegrity = 0x2AE365;
        inline uintptr_t trampolineIntegrity = 0x35B19F;
        inline uintptr_t processScan = 0x1DCE02;
        inline uintptr_t yaraCaller = 0x16CBC1;
        inline uintptr_t consoleCheck = 0xE03544;
        inline uintptr_t whitelist = 0x2EA7E6;
        inline uintptr_t loadLock = 0xD4D1B4;
        inline uintptr_t dllMainInitCallIntercept = 0x8484F0;
        inline uintptr_t controlFlowGuard = 0x56DFD0;
        inline uintptr_t certificateCheck = 0x3571BD;
        inline uintptr_t blockPageEncryption = 0xDAD74A;

        inline std::vector<uintptr_t> subIntegrityJNZ = {
            0x1A9712, 0x1DCB8C, 0x1E05C7, 0x24C7BA,
            0x1E7617, 0x2D9659, 0x370AA3, 0x1BEB1F,
            0x1D8897, 0x1ECDF9, 0x21C0B2, 0x1E9001,
            0x24D0D9, 0x24E423, 0x24D834, 0x3A4AD4,
        };

        inline std::vector<uintptr_t> staticIntegritycj = {
            0x19E54C, 0x19F45E, 0x1A1DD0, 0x1A2B5B,
            0x1A3B15, 0x1A4986, 0x1A5EAC, 0x1A6513,
            0x1A7AB1, 0x1C0552, 0x1DAAB5, 0x2223B6,
            0x1A030A, 0x1A5827, 0x1A6ECC, 0x1BFE77,
            0xE95875, 0xDC084D, 0xDCC9FE, 0xE593DF,
            0x1BCE01, 0x1BDF14, 0x26F29B, 0x1A494D,
            0x2E9A1D, 0x2F4904,
        };

    }
}
