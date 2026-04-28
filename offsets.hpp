// dumped by nick \\
// date: 2026-04-27 20:05:16 \\
// took 6.3s \\

#pragma once
#include <cstdint>
#include <Windows.h>

static const uintptr_t Roblox_BASE  = reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr));
static const uintptr_t Hyperion_Base = reinterpret_cast<uintptr_t>(GetModuleHandleA("RobloxPlayerBeta.dll"));

#define REBASE(x)         ((x) + Roblox_BASE)
#define HYP_REBASE(x)     ((x) + Hyperion_Base)

namespace Offsets
{
    namespace hyperion
    {
    const uintptr_t BitMap = HYP_REBASE(0xf9a810);
    const uintptr_t ControlFlowGuard = HYP_REBASE(0xbc5e00);

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
    const uintptr_t AppDataInfo = REBASE(0x7b6d500);
    const uintptr_t EnableLoadModule = REBASE(0x7061ce8);
    const uintptr_t IdentityPtr = REBASE(0x75e1300);
    const uintptr_t KTable = REBASE(0x749b670);
    const uintptr_t LockViolationScriptCrash = REBASE(0x75188c8);
    const uintptr_t luaH_dummynode = REBASE(0x7bf7f90);
    const uintptr_t luaO_nilobject = REBASE(0x5fc6de8);
    const uintptr_t luaT_Eventnames = REBASE(0x5ee5b48);
    const uintptr_t luaT_typenames = REBASE(0x5b98a70);
    const uintptr_t OpcodeLookupTable = REBASE(0x342b730);
    const uintptr_t PhysicsSenderMaxBandwidthBps = REBASE(0x782d5f8);
    const uintptr_t RawScheduler = REBASE(0x7c73e50);
    const uintptr_t TaskSchedulerTargetFps = REBASE(0x782d5f8);
    const uintptr_t WndProcessCheck = REBASE(0x703b798);
    } // namespace Pointers

    namespace Functions
    {
    const uintptr_t FireMouseClick = REBASE(0x25abbf0);
    const uintptr_t FireMouseHoverEnter = REBASE(0x25ad190);
    const uintptr_t FireMouseHoverLeave = REBASE(0x25ad330);
    const uintptr_t FireProximityPrompt = REBASE(0x1ab110);
    const uintptr_t FireRightMouseClick = REBASE(0x25abbf0);
    const uintptr_t FireTouchInterest = REBASE(0x4724210);
    const uintptr_t get_capabilities = REBASE(0x44361f0);
    const uintptr_t GetContextObject = REBASE(0x49c78e3c);
    const uintptr_t GetCurrentThreadId = REBASE(0x4724210);
    const uintptr_t GetFFlag = REBASE(0x4734f70);
    const uintptr_t GetGlobalState = REBASE(0x4a678b0);
    const uintptr_t GetIdentityStruct = REBASE(0x7fb0);
    const uintptr_t GetLuaStateForInstance = REBASE(0x1c33f90);
    const uintptr_t GetProperty = REBASE(0x4724210);
    const uintptr_t GetRobloxPropertyData = REBASE(0xc62a20);
    const uintptr_t GetTlsPointer = REBASE(0x7fb0);
    const uintptr_t HashTableLookup = REBASE(0x1c11fb7);
    const uintptr_t Impersonator = REBASE(0x44359b0);
    const uintptr_t InstanceBridge_Push = REBASE(0x1d29e60);
    const uintptr_t IsLegalSendEvent = REBASE(0xa66010);
    const uintptr_t lua_xmove = REBASE(0x432e460);
    const uintptr_t luaA_toobject = REBASE(0x432d320);
    const uintptr_t luaC_step = REBASE(0x432d260);
    const uintptr_t luaD_throw = REBASE(0x432f510);
    const uintptr_t luaf_freeproto = REBASE(0x4b9b9d0);
    const uintptr_t luaF_newproto = REBASE(0x75ff70);
    const uintptr_t luaG_runerrorl = REBASE(0x43402b0);
    const uintptr_t luaL_argerrorl = REBASE(0x4334840);
    const uintptr_t luaL_checkany = REBASE(0x4369b60);
    const uintptr_t luaL_checklstring = REBASE(0x4336a10);
    const uintptr_t luaL_errorl = REBASE(0x4334840);
    const uintptr_t luaL_newmetatable = REBASE(0x4809260);
    const uintptr_t luaL_pushresult = REBASE(0x432da90);
    const uintptr_t luaM_toobig = REBASE(0x4389c90);
    const uintptr_t luaO_pushfstring = REBASE(0x4348a80);
    const uintptr_t luaT_objtypename = REBASE(0x43993b0);
    const uintptr_t Luau_Execute = REBASE(0x4340ab0);
    const uintptr_t luaV_getimport = REBASE(0x44358f0);
    const uintptr_t LuaVMLoad = REBASE(0x87e790);
    const uintptr_t newblock = REBASE(0x4389fc0);
    const uintptr_t newgcoblock = REBASE(0x4389f20);
    const uintptr_t Print = REBASE(0x1dea8d0);
    const uintptr_t pseudotoaddr = REBASE(0x432dbf0);
    const uintptr_t Register = REBASE(0x2b69ca0);
    const uintptr_t ScriptContextResume = REBASE(0x1d63290);
    const uintptr_t TaskDefer = REBASE(0x1578c20);
    } // namespace Functions

} // namespace Offsets
