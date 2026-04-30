// dumped by nick \\
// date: 2026-04-29 20:41:47 \\
// took 21.9s \\

#pragma once
#include <cstdint>
#include <Windows.h>

static const uintptr_t Roblox_BASE  = reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr));
static const uintptr_t Hyperion_Base = reinterpret_cast<uintptr_t>(GetModuleHandleA("RobloxPlayerBeta.dll"));

#define REBASE(x)         ((x) + Roblox_BASE)
#define HYP_REBASE(x)     ((x) + Hyperion_Base)

namespace Offsets
{
    inline constexpr const char* LiveChannel = "acc4b74f79e743b9";

    namespace hyperion
    {
    const uintptr_t BitMap = HYP_REBASE(0xda8550);
    const uintptr_t ControlFlowGuard = HYP_REBASE(0x6ffb0);

        inline constexpr uint8_t  ByteShift = 15;
        inline constexpr uint8_t  PageShift = 12;
        inline constexpr uint32_t PageSize  = 0x1000;
        inline constexpr uint8_t  BitMask   = 7;
    } // namespace hyperion

    namespace DataModel
    {
    inline constexpr uintptr_t Children = 0x78;
    const uintptr_t FakeDataModelPointer = REBASE(0x7c73d70);
    inline constexpr uintptr_t FakeDataModelToDataModel = 0x1c0;
    inline constexpr uintptr_t GameId = 0x190;
    inline constexpr uintptr_t GameLoaded = 0x5f8;
    inline constexpr uintptr_t Name = 0x48;
    inline constexpr uintptr_t ScriptContext = 0x3f0;
    } // namespace DataModel

    namespace ScriptContext
    {
    inline constexpr uintptr_t IsCoreScript = 0x180;
    inline constexpr uintptr_t RequireBypass = 0x824;
    inline constexpr uintptr_t ScriptContextToResume = 0x7f0;
    inline constexpr uintptr_t Userdata = 0x58;
    } // namespace ScriptContext

    namespace BasePart
    {
    inline constexpr uintptr_t Primitive = 0x148;
    } // namespace BasePart

    namespace Pointers
    {
    const uintptr_t AppDataInfo = REBASE(0x7bed540);
    const uintptr_t EnableLoadModule = REBASE(0x70dd300);
    const uintptr_t IdentityPtr = REBASE(0x7661528);
    const uintptr_t KTable = REBASE(0x751a7b0);
    const uintptr_t LockViolationScriptCrash = REBASE(0x7599a88);
    const uintptr_t luaH_dummynode = REBASE(0x7c79010);
    const uintptr_t luaO_nilobject = REBASE(0x6032ec0);
    const uintptr_t luaT_Eventnames = REBASE(0x5f52288);
    const uintptr_t luaT_typenames = REBASE(0x5c04b90);
    const uintptr_t OpcodeLookupTable = REBASE(0x3483c9c);
    const uintptr_t PhysicsSenderMaxBandwidthBps = REBASE(0x78ad438);
    const uintptr_t RawScheduler = REBASE(0x7cf5400);
    const uintptr_t TaskSchedulerTargetFps = REBASE(0x78ad438);
    const uintptr_t WndProcessCheck = REBASE(0x70b6a90);
    } // namespace Pointers

    namespace Functions
    {
    const uintptr_t FireMouseClick = REBASE(0x25f17e0);
    const uintptr_t FireMouseHoverEnter = REBASE(0x25f2d80);
    const uintptr_t FireMouseHoverLeave = REBASE(0x25f2f20);
    const uintptr_t FireProximityPrompt = REBASE(0x1ab5b0);
    const uintptr_t FireRightMouseClick = REBASE(0x25f17e0);
    const uintptr_t FireTouchInterest = REBASE(0x4788a30);
    const uintptr_t get_capabilities = REBASE(0x478ad90);
    const uintptr_t GetContextObject = REBASE(0x49c8fbfc);
    const uintptr_t GetCurrentThreadId = REBASE(0x4788a30);
    const uintptr_t GetFFlag = REBASE(0x4799730);
    const uintptr_t GetGlobalState = REBASE(0x4acc700);
    const uintptr_t GetIdentityStruct = REBASE(0x9060);
    const uintptr_t GetLuaStateForInstance = REBASE(0x1c4bad0);
    const uintptr_t GetProperty = REBASE(0x4788a30);
    const uintptr_t GetRobloxPropertyData = REBASE(0xc72e20);
    const uintptr_t GetTlsPointer = REBASE(0x9060);
    const uintptr_t HashTableLookup = REBASE(0x1c29920);
    const uintptr_t Impersonator = REBASE(0x4498820);
    const uintptr_t InstanceBridge_Push = REBASE(0x1d43290);
    const uintptr_t IsLegalSendEvent = REBASE(0xa6f750);
    const uintptr_t luaA_toobject = REBASE(0x43911c0);
    const uintptr_t luaf_freeproto = REBASE(0x4bfd860);
    const uintptr_t luaF_newproto = REBASE(0x765d20);
    const uintptr_t luaM_toobig = REBASE(0x43ef090);
    const uintptr_t Luau_Execute = REBASE(0x12af390);
    const uintptr_t LuaVMLoad = REBASE(0x8816e0);
    const uintptr_t Print = REBASE(0x1e21ad0);
    const uintptr_t Register = REBASE(0x2bbd720);
    const uintptr_t ScriptContextResume = REBASE(0x1d7cd20);
    const uintptr_t TaskDefer = REBASE(0x1588930);
    } // namespace Functions

} // namespace Offsets
