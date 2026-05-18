// dumped by nick \\
// date: 2026-05-18 12:45:28 \\
// took 14.0s \\

#pragma once
#include <cstdint>
#include <Windows.h>

static const uintptr_t Roblox_BASE   = reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr));
static const uintptr_t Hyperion_Base = reinterpret_cast<uintptr_t>(GetModuleHandleA("RobloxPlayerBeta.dll"));

#define REBASE(x)     ((x) + Roblox_BASE)
#define HYP_REBASE(x) ((x) + Hyperion_Base)

namespace Offsets
{
    inline constexpr const char* LiveChannel = "version-9377ee10133e4be3"; // FUTURE

    namespace Hyperion // somehow got fixed by itself??
    {
        const uintptr_t BitMap = HYP_REBASE(0x1d26b8);
        const uintptr_t ControlFlowGuard = HYP_REBASE(0x75cfc0);

        inline constexpr uint8_t  ByteShift = 15;
        inline constexpr uint8_t  PageShift = 12;
        inline constexpr uint32_t PageSize  = 0x1000;
        inline constexpr uint32_t PageMask  = 0xfff;
        inline constexpr uint8_t  BitMask   = 7;
    } // namespace Hyperion

    namespace DataModel
    {
        inline constexpr uintptr_t Children = 0x78;
        const uintptr_t DataModelDeleterPointer = REBASE(0x773d36);
        const uintptr_t FakeDataModelPointer = REBASE(0x74f6758);
        inline constexpr uintptr_t FakeDataModelToDataModel = 0x1d0;
        inline constexpr uintptr_t GameId = 0x190;
        inline constexpr uintptr_t Name = 0xb0;
        inline constexpr uintptr_t ScriptContext = 0x3f0;
        inline constexpr uintptr_t VisualEngine = 0x10;
        const uintptr_t VisualEnginePointer = REBASE(0x528be4);
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
        const uintptr_t GetCapabilities = REBASE(0x5e89b0);
        const uintptr_t GetIdentityStruct = REBASE(0x1d8d420);
        const uintptr_t GetTlsPointer = REBASE(0x1c7d410); // def not accurate do not trust
        const uintptr_t Impersonator = REBASE(0x5e89b0);
    } // namespace RobloxThread

    namespace Instance
    {
        const uintptr_t IsLegalSendEvent = REBASE(0x9ef400);
    } // namespace Instance

    namespace Property
    {
        const uintptr_t GetRobloxPropertyData = REBASE(0x1d00b20);
        const uintptr_t HashTableLookup = REBASE(0x1c30590);
    } // namespace Property

    namespace Luau
    {
        const uintptr_t getluastate = REBASE(0x1d6f540);
        const uintptr_t loadsafe = REBASE(0x4750d80);
        const uintptr_t lua_getfield = REBASE(0x474ceda);
        const uintptr_t lua_resume = REBASE(0x1dab140);
        const uintptr_t lua_setfield = REBASE(0x4748b10);
        const uintptr_t luaA_toobject = REBASE(0x474ceda);
        const uintptr_t luaB_assert = REBASE(0x475ef60);
        const uintptr_t luaB_error = REBASE(0x475ea20);
        const uintptr_t luaB_gcinfo = REBASE(0x475ee50);
        const uintptr_t luaB_getfenv = REBASE(0x475ebb0);
        const uintptr_t luaB_getmetatable = REBASE(0x475ea90);
        const uintptr_t luaB_newproxy = REBASE(0x475f0b0);
        const uintptr_t luaB_next = REBASE(0x475ef00);
        const uintptr_t luaB_print = REBASE(0x475e800);
        const uintptr_t luaB_rawequal = REBASE(0x475ecf0);
        const uintptr_t luaB_rawget = REBASE(0x475ed40);
        const uintptr_t luaB_rawlen = REBASE(0x475edf0);
        const uintptr_t luaB_rawset = REBASE(0x475ed90);
        const uintptr_t luaB_select = REBASE(0x475efd0);
        const uintptr_t luaB_setfenv = REBASE(0x475ec10);
        const uintptr_t luaB_setmetatable = REBASE(0x475eaf0);
        const uintptr_t luaB_tonumber = REBASE(0x475e8e0);
        const uintptr_t luaB_tostring = REBASE(0x475f080);
        const uintptr_t luaB_type = REBASE(0x475ee80);
        const uintptr_t luaB_typeof = REBASE(0x475eec0);
        const uintptr_t luaC_step = REBASE(0x474f4b0); // this kinda looks accurate idk
        //const uintptr_t luaC_step2 = REBASE(0x1dd04e0); does NOT look accurate so commented out
        const uintptr_t luaF_freeproto = REBASE(0x474a0bd);
        const uintptr_t luaG_runerror = REBASE(0x1da2de0);
        const uintptr_t luaG_runerrorl = REBASE(0x476b990);
        const uintptr_t luaL_argerror = REBASE(0x5fe5f0);
        const uintptr_t luaL_argerrorl = REBASE(0x1dab340);
        const uintptr_t luaL_checkstring = REBASE(0x474ceda);
        const uintptr_t luaL_checktype = REBASE(0x474c310);
        const uintptr_t luaL_testudata = REBASE(0x4776916);
        const uintptr_t luaM_free = REBASE(0x476b990);
        const uintptr_t luaM_toobig = REBASE(0x476b990);
        const uintptr_t luaT_Eventnames = REBASE(0x62f4298);
        const uintptr_t luaT_objtypename = REBASE(0x474ceda);
        const uintptr_t luau_execute = REBASE(0x475c5b0);
        const uintptr_t luau_opcode = REBASE(0x47513e9);
        const uintptr_t luaVM_load = REBASE(0x1c7b670);
        const uintptr_t luaX_move = REBASE(0x474c310);
        const uintptr_t pseudo2addr = REBASE(0x4b0da30);
        const uintptr_t std_runtime_error = REBASE(0x4b0da30);
    } // namespace Luau

    namespace Task // ill verify myself in ida soon
    {
        const uintptr_t defer = REBASE(0x1daa494);
        const uintptr_t desynchronize = REBASE(0x1daa8b0);
        const uintptr_t spawn = REBASE(0x1dab3a0);
        const uintptr_t synchronize = REBASE(0x1dab520);
        const uintptr_t wait = REBASE(0x1dab730);
    } // namespace Task

    namespace Signals // not accurate def
    {
        const uintptr_t FireProximityPrompt = REBASE(0x5ccef0);
        const uintptr_t FireTouchInterest = REBASE(0x4af4970);
    } // namespace Signals

    namespace IsParallel
    {
        const uintptr_t ActorRequired_Call = REBASE(0x1d1b020);
        const uintptr_t ActorRequired_Prop = REBASE(0x1d1b266);
        const uintptr_t Connection_Dc = REBASE(0x1c6a4e0);
        const uintptr_t Event_Connect = REBASE(0x1c69380);
        const uintptr_t Event_ConnPar = REBASE(0x1c697b0);
        const uintptr_t Event_Once = REBASE(0x1c6cfa0);
        const uintptr_t EventAccess = REBASE(0x1d173f0);
        const uintptr_t FilterDescendants = REBASE(0x1ce0100);
        const uintptr_t FunctionCall = REBASE(0x1d1b020);
        const uintptr_t Instance_FromExist = REBASE(0x1d76210);
        const uintptr_t LocalSafe_Call = REBASE(0x1d1b020);
        const uintptr_t LocalSafe_Write = REBASE(0x1d1b266);
        const uintptr_t PropRead = REBASE(0x1d173f0);
        const uintptr_t PropWrite = REBASE(0x1d1b266);
        const uintptr_t ScriptConnect = REBASE(0x1c697b0);
    } // namespace IsParallel

    // misc
    const uintptr_t AppDataInfo = REBASE(0x74e6c88);
    const uintptr_t EnableLoadModule = REBASE(0x1d8d4b0);
    const uintptr_t GetContextObject = REBASE(0x4af4da0);
    const uintptr_t GetContextObject2 = REBASE(0x1c88420);
    const uintptr_t GetCurrentThreadId = REBASE(0x4ade4d0);
    const uintptr_t GetCurrentThreadId2 = REBASE(0x4a38b50);
    const uintptr_t GetFFlag = REBASE(0x4b2a010);
    const uintptr_t GetGlobalState = REBASE(0x5103830);
    const uintptr_t GetGlobalStateForInstance = REBASE(0x1d6f230);
    const uintptr_t newclasspage2 = REBASE(0x476bab9);
    const uintptr_t OpcodeLookupTable = REBASE(0x34ae662);
    const uintptr_t Print = REBASE(0x1dd04e0); // new string method ez ud real
    const uintptr_t Register = REBASE(0x82b850);
    const uintptr_t RobloxLogCrash = REBASE(0x4af4da0);
    const uintptr_t WndProcessCheck = REBASE(0x70ab018);

} // namespace Offsets
