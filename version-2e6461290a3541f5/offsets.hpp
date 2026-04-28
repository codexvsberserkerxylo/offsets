// dumped by nick \\
// date: 2026-04-26 00:32:10 \\
// took 10.198s \\

#pragma once
#include <cstdint>

namespace RBX::Offsets
{

    namespace Hyperion
    {
        inline constexpr uintptr_t ControlFlowGuard = 0x4a76bb9;
    } // namespace Hyperion

    namespace Pointers
    {
        inline auto AppDataInfo = 0x7b6d2c0;
        inline auto Children = 0x78;
        inline auto EnableLoadModule = 0x751fe08;
        inline auto FakeDataModelPointer = 0x7c73d70;
        inline auto FakeDataModelToDataModel = 0x1c0;
        inline auto GameId = 0x190;
        inline auto GameLoaded = 0x5f8;
        inline auto IdentityPtr = 0x75e10b8;
        inline auto KTable = 0x749b470;
        inline auto LockViolationScriptCrash = 0x7518298;
        inline auto luaH_dummynode = 0x7bf7eb0;
        inline auto luaO_nilobject = 0x5fc6de8;
        inline auto luaT_Eventnames = 0x5ee5b18;
        inline auto luaT_typenames = 0x5b98a10;
        inline auto Name = 0x48;
        inline auto OpcodeLookupTable = 0x342b490;
        inline auto PhysicsSenderMaxBandwidthBps = 0x782d1b8;
        inline auto RawScheduler = 0x7c73d70;
        inline auto ScriptContext = 0x3f0;
        inline auto TaskSchedulerPointer = 0x46a8990;
        inline auto TaskSchedulerTargetFps = 0x782d1b8;
        inline auto WndProcessCheck = 0x703b790;
    } // namespace Pointers

    namespace Functions
    {
        inline auto FireMouseClick = 0x25ab950;
        inline auto FireMouseHoverEnter = 0x25acef0;
        inline auto FireMouseHoverLeave = 0x25ad090;
        inline auto FireProximityPrompt = 0x1ab0c0;
        inline auto FireRightMouseClick = 0x25ab950;
        inline auto FireTouchInterest = 0x4723f70;
        inline auto get_capabilities = 0x7fb0;
        inline auto GetContextObject = 0x49c78b9c;
        inline auto GetCurrentThreadId = 0x4723f70;
        inline auto GetFFlag = 0x4734cd0;
        inline auto GetGlobalState = 0x4a67610;
        inline auto GetIdentityStruct = 0x7fb0;
        inline auto GetLuaStateForInstance = 0x1c33cf0;
        inline auto GetRobloxPropertyData = 0xc62900;
        inline auto GetTlsPointer = 0x7fb0;
        inline auto HashTableLookup = 0x1c11ce0;
        inline auto Impersonator = 0x4435710;
        inline auto InstanceBridge_Push = 0x1d29bc0;
        inline auto IsLegalSendEvent = 0xa65ef0;
        inline auto luaF_newproto = 0x75fe80;
        inline auto LuaVMLoad = 0x87e6a0;
        inline auto Print = 0x1dea630;
        inline auto Register = 0x2b69a00;
        inline auto ScriptContextResume = 0x1d62ff0;
        inline auto TaskDefer = 0x1578b00;
    } // namespace Functions

    // failed:
    // [hyperion] BitMap: Not found
    // [function] Luau_Execute: Not found

} // namespace RBX::Offsets
