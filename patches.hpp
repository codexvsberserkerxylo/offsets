// verified
// i was injected for 40 mins with this no crash btw

#pragma once
#include <iostream>
#include <Windows.h>
#include <vector>

struct Patch {
    std::vector<uintptr_t> rvas;
    std::vector<uint8_t> patch;
};

namespace Patches {
    namespace Update {
        inline std::vector<uintptr_t> subIntegrityJNZ = {
            0xCC6FAA, 0xCD44C5, 0xD07189, 0xD5D4F4, 0xCB4323,
            0xCB39EE, 0xCC5EE9, 0xE486C8, 0xDEDCAC, 0xE34A2D,
            0xE46BA8, 0xE47EDD, 0xCB55F7, 0xE474AA, 0xD56F4E,
        };
        inline std::vector<uintptr_t> staticIntegritycj = {
            0xCCCAED, 0xD727F2, 0xCAA037, 0xCAB8C1, 0xCAC535,
            0xCAD140, 0xCADE86, 0xCAEC66, 0xCAFD5E, 0xCB4C5C,
            0xCC5F8B, 0xCC6488, 0xCB1BC6, 0xCB499B, 0xCB2BDC,
            0xD56321, 0xD8CE23, 0xDBC459, 0xD5CBC9, 0xDECDB1,
            0xF31BE3, 0xE1BFA1, 0xE1F719, 0xE29C7E, 0xE7B81B,
            0x1368EBF, 0x13723BE, 0x139117B, 0x13D4D71, 0x13D927D,
            0x13DE91B, 0x146F0AE, 0x10AAAA7, 0x11C6AC0, 0x11C8A9A,
            0x11C8B9A, 0x11DA61D, 0x12EFDC8, 0x12F7510,
        };

        inline uintptr_t generalIntegrity = 0xCC4686;
        inline uintptr_t remapCheck = 0x1374D20;
        inline uintptr_t clientIntegrity = 0xCC5456;
        inline uintptr_t trampolineIntegrity = 0xE1F719;
        inline uintptr_t processScan = 0xDEDF7C;
        inline uintptr_t yaraCaller = 0x8850A9;
        inline uintptr_t consoleCheck = 0x13BEA91;
        inline uintptr_t whitelist = 0xD61DF1;
        inline uintptr_t loadLock = 0x15203CF;
        inline uintptr_t dllMainInitCallIntercept = 0x863280;
        inline uintptr_t controlFlowGuard = 0x12E9FC0;
        inline uintptr_t certificateCheck = 0xE1C0E7;
    }

    inline std::vector<Patch> patches = {
        {{Update::remapCheck}, {0x90, 0xE9}}, // JMP <IMM64>
        {{Update::clientIntegrity}, {0x90, 0x90, 0x90, 0x90, 0x90, 0x90}}, // NOP x6
        {{Update::trampolineIntegrity}, {0xEB}}, // JMP SHORT
        {{Update::processScan}, {0x90, 0x90, 0x90}}, // NOP x3
        {{Update::yaraCaller}, {0x90, 0x90, 0x90}}, // NOP x3
        {{Update::consoleCheck}, {0x38, 0xC0, 0x90, 0x90, 0x90}}, // CMP AL, AL ; NOP x3
        {{Update::whitelist}, {0x4D, 0x31, 0xC9, 0x90, 0x90, 0x90, 0x90 } }, // XOR R9, R9 ; NOP x4
        {{Update::loadLock}, {0x90, 0xE9}}, // JMP <IMM64>
        {{Update::dllMainInitCallIntercept}, {0xC3}}, // RET
        {{Update::controlFlowGuard}, {0xFF, 0xE0, 0xC3, 0x90, 0x90, 0x90, 0x90, 0x90}}, // JMP RAX
        {{Update::certificateCheck}, {0x41, 0xB2, 0x01, 0x90, 0x90, 0x90, 0x90, 0x90}}, // MOV R10B, 1 ; NOP x5
        {{Update::generalIntegrity}, {0x90, 0x90, 0x90, 0x90, 0x90, 0x90}}, // NOP x6
        {Update::subIntegrityJNZ, {0x90, 0x90, 0x90, 0x90, 0x90, 0x90}}, // NOP x6
        {Update::staticIntegritycj, {0xEB}}, // JMP SHORT
    };
}
