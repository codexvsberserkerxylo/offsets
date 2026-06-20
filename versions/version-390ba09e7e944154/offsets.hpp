// dumped by nick \\
// date: 2026-04-28 13:39:57 \\
// took 34.6s \\

#pragma once
#include <cstdint>
#include <Windows.h>

static const uintptr_t Roblox_BASE  = reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr));
static const uintptr_t Hyperion_Base = reinterpret_cast<uintptr_t>(GetModuleHandleA("RobloxPlayerBeta.dll"));

#define REBASE(x)         ((x) + Roblox_BASE)
#define HYP_REBASE(x)     ((x) + Hyperion_Base)

namespace Offsets
{
    inline constexpr const char* LiveChannel = "version-390ba09e7e944154";

    namespace hyperion
    {
    const uintptr_t BitMap = HYP_REBASE(0xda8550);
    const uintptr_t ControlFlowGuard = HYP_REBASE(0x6ffb0);

        inline constexpr uint8_t  ByteShift = 15;
        inline constexpr uint8_t  PageShift = 12;
        inline constexpr uint32_t PageSize  = 0x1000;
        inline constexpr uint8_t  BitMask   = 7;
    } // namespace hyperion

    namespace Pointers
    {
    const uintptr_t AppDataInfo = REBASE(0x7b6d500);
   //  const uintptr_t Children = REBASE(0x0); // failed
    const uintptr_t EnableLoadModule = REBASE(0x7061ce8);
   //  const uintptr_t FakeDataModelPointer = REBASE(0x0); // failed
   //  const uintptr_t FakeDataModelToDataModel = REBASE(0x0); // failed
   //  const uintptr_t GameId = REBASE(0x0); // failed
   //  const uintptr_t GameLoaded = REBASE(0x0); // failed
    const uintptr_t IdentityPtr = REBASE(0x75e1300);
   //  const uintptr_t IsCoreScript = REBASE(0x0); // failed
    const uintptr_t KTable = REBASE(0x749b670);
    const uintptr_t LockViolationScriptCrash = REBASE(0x75188c8);
    const uintptr_t luaH_dummynode = REBASE(0x7bf7f90);
    const uintptr_t luaO_nilobject = REBASE(0x5fc6de8);
    const uintptr_t luaT_Eventnames = REBASE(0x5ee5b48);
    const uintptr_t luaT_typenames = REBASE(0x5b98a70);
   //  const uintptr_t Name = REBASE(0x0); // failed
    const uintptr_t OpcodeLookupTable = REBASE(0x342b730);
    const uintptr_t PhysicsSenderMaxBandwidthBps = REBASE(0x782d5f8);
   //  const uintptr_t Primitive = REBASE(0x0); // failed
    const uintptr_t RawScheduler = REBASE(0x7c73e50);
    const uintptr_t RequireBypass = REBASE(0x7061ce8);
   //  const uintptr_t ScriptContext = REBASE(0x0); // failed
    const uintptr_t ScriptContextToResume = REBASE(0x469abddc);
    const uintptr_t TaskSchedulerTargetFps = REBASE(0x782d5f8);
   //  const uintptr_t Userdata = REBASE(0x0); // failed
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
    const uintptr_t get_capabilities = REBASE(0x46fe600);
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
   //  const uintptr_t lua_pushfstringl = REBASE(0x0); // failed
   //  const uintptr_t lua_pushvfstring = REBASE(0x0); // failed
   //  const uintptr_t lua_rawcheckstack = REBASE(0x0); // failed
   //  const uintptr_t lua_xmove = REBASE(0x0); // failed
    const uintptr_t luaA_toobject = REBASE(0x432d320);
   //  const uintptr_t luaC_step = REBASE(0x0); // failed
   //  const uintptr_t luaD_throw = REBASE(0x0); // failed
    const uintptr_t luaf_freeproto = REBASE(0x4b9b9d0);
    const uintptr_t luaF_newproto = REBASE(0x75ff70);
    const uintptr_t luaG_runerrorl = REBASE(0x432f510);
   //  const uintptr_t luaL_argerrorl = REBASE(0x0); // failed
   //  const uintptr_t luaL_checkany = REBASE(0x0); // failed
   //  const uintptr_t luaL_checklstring = REBASE(0x0); // failed
   //  const uintptr_t luaL_checktype = REBASE(0x0); // failed
   //  const uintptr_t luaL_errorl = REBASE(0x0); // failed
   //  const uintptr_t luaL_findtable = REBASE(0x0); // failed
   //  const uintptr_t luaL_newmetatable = REBASE(0x0); // failed
   //  const uintptr_t luaL_pushresult = REBASE(0x0); // failed
   //  const uintptr_t luaL_register = REBASE(0x0); // failed
   //  const uintptr_t luaL_typeerrorl = REBASE(0x0); // failed
   //  const uintptr_t luaL_where = REBASE(0x0); // failed
   //  const uintptr_t luaM_free = REBASE(0x0); // failed
   //  const uintptr_t luaM_freegco = REBASE(0x0); // failed
    const uintptr_t luaM_toobig = REBASE(0x4389c90);
   //  const uintptr_t luaM_visitgco = REBASE(0x0); // failed
   //  const uintptr_t luaO_chunkid = REBASE(0x0); // failed
   //  const uintptr_t luaO_pushfstring = REBASE(0x0); // failed
   //  const uintptr_t luaO_pushvfstring = REBASE(0x0); // failed
   //  const uintptr_t luaopen_base = REBASE(0x0); // failed
   //  const uintptr_t luaT_objtypename = REBASE(0x0); // failed
   //  const uintptr_t luaT_objtypenamestr = REBASE(0x0); // failed
   //  const uintptr_t Luau_Execute = REBASE(0x0); // failed
   //  const uintptr_t luaV_getimport = REBASE(0x0); // failed
    const uintptr_t LuaVMLoad = REBASE(0x87e790);
    const uintptr_t Print = REBASE(0x1dea8d0);
   //  const uintptr_t pseudotoaddr = REBASE(0x0); // failed
    const uintptr_t Register = REBASE(0x2b69ca0);
    const uintptr_t ScriptContextResume = REBASE(0x1d63290);
    const uintptr_t TaskDefer = REBASE(0x1578c20);
    } // namespace Functions

} // namespace Offsets
