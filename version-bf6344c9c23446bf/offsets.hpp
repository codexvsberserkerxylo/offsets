// dumped by nick \\
// date: 2026-05-09 22:48:38 \\
// took 13.8s \\

#pragma once
#include <cstdint>
#include <Windows.h>

static const uintptr_t Roblox_BASE   = reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr));
static const uintptr_t Hyperion_Base = reinterpret_cast<uintptr_t>(GetModuleHandleA("RobloxPlayerBeta.dll"));

#define REBASE(x)     ((x) + Roblox_BASE)
#define HYP_REBASE(x) ((x) + Hyperion_Base)

namespace Offsets
{
    inline constexpr const char* LiveChannel = "version-bf6344c9c23446bf";

    namespace hyperion
    {
        const uintptr_t BitMap = HYP_REBASE(0xf9a810);
        const uintptr_t ControlFlowGuard = HYP_REBASE(0xb7860e);
    } // namespace hyperion

    namespace DataModel
    {
        inline constexpr uintptr_t Children = 0x78;
        const uintptr_t DataModelDeleterPointer = REBASE(0x7713f6);
        const uintptr_t FakeDataModelPointer = REBASE(0x749cbd8);
        inline constexpr uintptr_t FakeDataModelToDataModel = 0x1d0;
        inline constexpr uintptr_t GameId = 0x190;
        inline constexpr uintptr_t Name = 0xb0;
        inline constexpr uintptr_t ScriptContext = 0x3f0;
        inline constexpr uintptr_t VisualEngine = 0x10;
        const uintptr_t VisualEnginePointer = REBASE(0x527214);
    } // namespace DataModel

    namespace ScriptContext
    {
        inline constexpr uintptr_t Identity = 0xe8;
        inline constexpr uintptr_t ScriptContextToResume = 0x7f0;
        inline constexpr uintptr_t Userdata = 0x100;
    } // namespace ScriptContext

    namespace BasePart
    {
        inline constexpr uintptr_t Primitive = 0x148;
    } // namespace BasePart

    namespace RobloxThread
    {
        const uintptr_t GetCapabilities = REBASE(0x5e50c0);
        const uintptr_t GetIdentityStruct = REBASE(0x1d74ed0);
        const uintptr_t GetTlsPointer = REBASE(0x1c64360);
        const uintptr_t Impersonator = REBASE(0x5e50c0);
    } // namespace RobloxThread

    namespace Instance
    {
        const uintptr_t IsLegalSendEvent = REBASE(0x9e9240);
    } // namespace Instance

    namespace Property
    {
        const uintptr_t GetRobloxPropertyData = REBASE(0x1ce8b00);
        const uintptr_t HashTableLookup = REBASE(0x1c17560);
    } // namespace Property

    namespace Luau
    {
        const uintptr_t currfuncname = REBASE(0x470d140);
        const uintptr_t lua_break = REBASE(0x470c620);
        const uintptr_t lua_getfield = REBASE(0x470e54a);
        const uintptr_t lua_resume = REBASE(0x470c670);
        const uintptr_t lua_setfield = REBASE(0x470a1c0);
        const uintptr_t lua_xmove = REBASE(0x470d980);
        const uintptr_t lua_yield = REBASE(0x470c860);
        const uintptr_t luaA_toobject = REBASE(0x470e54a);
        const uintptr_t luaC_step = REBASE(0x1db7f90);
        const uintptr_t luaF_freeproto = REBASE(0x470b710);
        const uintptr_t luaG_runerror = REBASE(0x1d8a890);
        const uintptr_t luaG_runerrorl = REBASE(0x472b6a0);
        const uintptr_t luaL_argerror = REBASE(0x5fad0a);
        const uintptr_t luaL_argerrorl = REBASE(0x1d92df0);
        const uintptr_t luaL_checklstring = REBASE(0x470dd30);
        const uintptr_t luaL_checkstring = REBASE(0x470e54a);
        const uintptr_t luaL_checktype = REBASE(0x470d980);
        const uintptr_t luaL_testudata = REBASE(0x4736590);
        const uintptr_t luaL_typeerrorl = REBASE(0x470e54a);
        const uintptr_t luaM_free = REBASE(0x472b6a0);
        const uintptr_t luaM_toobig = REBASE(0x472b6a0);
        const uintptr_t luaT_Eventnames = REBASE(0x62a8a28);
        const uintptr_t luaT_objtypename = REBASE(0x470e54a);
        const uintptr_t pseudo2addr = REBASE(0x4ad0300);
        const uintptr_t std_runtime_error = REBASE(0x4ad0300);
    } // namespace Luau

    namespace Task
    {
        const uintptr_t defer = REBASE(0x1d91f00);
        const uintptr_t desynchronize = REBASE(0x1d92360);
        const uintptr_t spawn = REBASE(0x1d92e50);
        const uintptr_t synchronize = REBASE(0x1d92fd0);
        const uintptr_t wait = REBASE(0x1d931e0);
    } // namespace Task

    namespace Signals
    {
        const uintptr_t FireProximityPrompt = REBASE(0x5c97a0);
        const uintptr_t FireTouchInterest = REBASE(0x2a222b0);
    } // namespace Signals

    namespace IsParallel
    {
        const uintptr_t ActorRequired_Call = REBASE(0x1d02f80);
        const uintptr_t ActorRequired_Prop = REBASE(0x1d031a0);
        const uintptr_t Connection_Dc = REBASE(0x1c51460);
        const uintptr_t Event_Connect = REBASE(0x1c50300);
        const uintptr_t Event_ConnPar = REBASE(0x1c50730);
        const uintptr_t Event_Once = REBASE(0x1c53f20);
        const uintptr_t EventAccess = REBASE(0x1cff350);
        const uintptr_t FilterDescendants = REBASE(0x1cc3120);
        const uintptr_t FunctionCall = REBASE(0x1d02f80);
        const uintptr_t Instance_FromExist = REBASE(0x1d5df90);
        const uintptr_t LocalSafe_Call = REBASE(0x1d02f80);
        const uintptr_t LocalSafe_Write = REBASE(0x1d031a0);
        const uintptr_t PropRead = REBASE(0x1cff350);
        const uintptr_t PropWrite = REBASE(0x1d031a0);
        const uintptr_t ScriptConnect = REBASE(0x1c50730);
    } // namespace IsParallel

    // misc
    const uintptr_t AppDataInfo = REBASE(0x748d0e8);
    const uintptr_t EnableLoadModule = REBASE(0x1d74f60);
    const uintptr_t GetContextObject = REBASE(0x4ab7670);
    const uintptr_t GetContextObject2 = REBASE(0x1c6f330);
    const uintptr_t GetCurrentThreadId = REBASE(0x4aa0da0);
    const uintptr_t GetCurrentThreadId2 = REBASE(0x49fa680);
    const uintptr_t GetFFlag = REBASE(0x4aec8e0);
    const uintptr_t GetGlobalState = REBASE(0x50c7440);
    const uintptr_t GetGlobalStateForInstance = REBASE(0x1d57010);
    const uintptr_t newclasspage2 = REBASE(0x472b7c9);
    const uintptr_t OpcodeLookupTable = REBASE(0x348c790);
    const uintptr_t Print = REBASE(0x1db7f90);
    const uintptr_t Register = REBASE(0x8283d0);
    const uintptr_t RobloxLogCrash = REBASE(0x4ab7670);
    const uintptr_t WndProcessCheck = REBASE(0x7057018);

} // namespace Offsets
