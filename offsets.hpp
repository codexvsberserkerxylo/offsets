// dumped by nick \\
// date: 2026-05-22 00:15:05 \\
// took 14.2s \\

#pragma once
#include <cstdint>
#include <Windows.h>

static const uintptr_t roblox_base = reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr));
static const uintptr_t hyperion_base = reinterpret_cast<uintptr_t>(GetModuleHandleA("RobloxPlayerBeta.dll"));

#define REBASE(x) ((x) + roblox_base)
#define HYP_REBASE(x) ((x) + hyperion_base)

namespace Offsets
{
    inline constexpr const char* LiveChannel = "version-4b6315bf1f0a4dbb";

    namespace Hyperion
    {
        const uintptr_t BitMap = HYP_REBASE(0x1567be8);
        const uintptr_t ControlFlowGuard = HYP_REBASE(0x1482210);

        inline constexpr uint8_t  ByteShift = 15;
        inline constexpr uint8_t PageShift = 12;
        inline constexpr uint32_t PageSize = 0x1000;
        inline constexpr uint32_t PageMask = 0xfff;
        inline constexpr uint8_t BitMask = 7;
    } // namespace Hyperion

    namespace DataModel
    {
        inline constexpr uintptr_t Children = 0x78;
        const uintptr_t DataModelDeleterPointer = REBASE(0x79f246);
        const uintptr_t FakeDataModelPointer = REBASE(0x7868a68);
        inline constexpr uintptr_t FakeDataModelToDataModel = 0x1d0;
        inline constexpr uintptr_t GameId = 0x190;
        inline constexpr uintptr_t Name = 0xb0;
        inline constexpr uintptr_t ScriptContext = 0x3f0;
        inline constexpr uintptr_t VisualEngine = 0x10;
        const uintptr_t VisualEnginePointer = REBASE(0x558cc4);
    } // namespace DataModel

    namespace ScriptContext
    {
        inline constexpr uintptr_t ScriptContextToResume = 0x7f0;
    } // namespace ScriptContext

    namespace BasePart
    {
        inline constexpr uintptr_t Primitive = 0x148;
    } // namespace BasePart

    namespace RobloxThread
    {
        const uintptr_t GetCapabilities = REBASE(0x1be9bc0);
        const uintptr_t GetIdentityStruct = REBASE(0x7de2840);
        const uintptr_t GetTlsPointer = REBASE(0x1c28ea0);
        const uintptr_t Impersonator = REBASE(0x1c2b2a0);
    } // namespace RobloxThread

    namespace Instance
    {
        const uintptr_t IsLegalSendEvent = REBASE(0xa0fdc0);
    } // namespace Instance

    namespace Property
    {
        const uintptr_t GetRobloxPropertyData = REBASE(0x1cc8460);
        const uintptr_t HashTableLookup = REBASE(0x1be6480);
        const uintptr_t KTable = REBASE(0x7f7de50);
    } // namespace Property

    namespace Luau
    {
        const uintptr_t currfuncname = REBASE(0x1bff670);
        const uintptr_t GetLuaState = REBASE(0x1ce6270);
        const uintptr_t lua_getfield = REBASE(0x43b63c0);
        const uintptr_t lua_pushfstringL = REBASE(0x1cb5520);
        const uintptr_t lua_resume = REBASE(0x1d63510);
        const uintptr_t lua_xmove = REBASE(0x43b5570);
        const uintptr_t luaA_toobject = REBASE(0x43b63c0);
        const uintptr_t luaB_assert = REBASE(0x43c7bb0);
        const uintptr_t luaB_error = REBASE(0x43c7670);
        const uintptr_t luaB_gcinfo = REBASE(0x43c7aa0);
        const uintptr_t luaB_getfenv = REBASE(0x43c7800);
        const uintptr_t luaB_getmetatable = REBASE(0x43c76e0);
        const uintptr_t luaB_newproxy = REBASE(0x43c7d00);
        const uintptr_t luaB_next = REBASE(0x43c7b50);
        const uintptr_t luaB_pcall = REBASE(0x43b02c0);
        const uintptr_t luaB_pcallrun = REBASE(0x43b0dc0);
        const uintptr_t luaB_print = REBASE(0x43c7450);
        const uintptr_t luaB_rawequal = REBASE(0x24f5230);
        const uintptr_t luaB_rawget = REBASE(0x43c7990);
        const uintptr_t luaB_rawlen = REBASE(0x43c7a40);
        const uintptr_t luaB_rawset = REBASE(0x43c79e0);
        const uintptr_t luaB_setfenv = REBASE(0x43c7860);
        const uintptr_t luaB_setmetatable = REBASE(0x43c7740);
        const uintptr_t luaB_tonumber = REBASE(0x43c7530);
        const uintptr_t luaB_tostring = REBASE(0x43c7cd0);
        const uintptr_t luaB_type = REBASE(0x43c7ad0);
        const uintptr_t luaB_typeof = REBASE(0x43c7b10);
        const uintptr_t luaC_step = REBASE(0x43b9c60);
        const uintptr_t luaC_step = REBASE(0x1d864c0);
        const uintptr_t luaD_rawrunprotected = REBASE(0x43b4710);
        const uintptr_t luaF_freeproto = REBASE(0x43b320d);
        const uintptr_t luaG_runerror = REBASE(0x1d5a580);
        const uintptr_t luaG_runerrorl = REBASE(0x43d6320);
        const uintptr_t luaL_argerror = REBASE(0x622e40);
        const uintptr_t luaL_argerrorl = REBASE(0x1d63710);
        const uintptr_t luaL_checkstring = REBASE(0x43b63c0);
        const uintptr_t luaL_checktype = REBASE(0x43b5570);
        const uintptr_t luaL_findtable = REBASE(0x43b5b87);
        const uintptr_t luaL_register = REBASE(0x43b5b87);
        const uintptr_t luaL_testudata = REBASE(0x43e11c0);
        const uintptr_t luaopen_math = REBASE(0x43d16e0);
        const uintptr_t luaT_eventnames = REBASE(0x65e1048);
        const uintptr_t luaT_objtypename = REBASE(0x43b63c0);
        const uintptr_t luau_execute = REBASE(0x43c7090);
        const uintptr_t luau_opcode = REBASE(0x43bbaa9);
        const uintptr_t luaV_gettable = REBASE(0x43e14fa);
        const uintptr_t pseudo2addr = REBASE(0x480f460);
        const uintptr_t std_runtime_error = REBASE(0x480f460);
    } // namespace Luau

    namespace Task
    {
        const uintptr_t defer = REBASE(0x1d6289b);
        const uintptr_t desynchronize = REBASE(0x1d62ca0);
        const uintptr_t spawn = REBASE(0x1d63770);
        const uintptr_t synchronize = REBASE(0x1d638f0);
        const uintptr_t wait = REBASE(0x1d63afc);
    } // namespace Task

    namespace Signals
    {
        const uintptr_t FireProximityPrompt = REBASE(0x5f2900);
        const uintptr_t FireTouchInterest = REBASE(0x2922a8e);
    } // namespace Signals

    namespace IsParallel
    {
        const uintptr_t ActorRequired_Call = REBASE(0x1c1aae6);
        const uintptr_t ActorRequired_Prop = REBASE(0x1c1ace0);
        const uintptr_t Connection_Dc = REBASE(0x1c374de);
        const uintptr_t Event_Connect = REBASE(0x1c36380);
        const uintptr_t Event_ConnPar = REBASE(0x1c367b0);
        const uintptr_t Event_Once = REBASE(0x1c39ee0);
        const uintptr_t EventAccess = REBASE(0x1c173f0);
        const uintptr_t FilterDescendants = REBASE(0x1ca99e0);
        const uintptr_t FunctionCall = REBASE(0x1c1aae6);
        const uintptr_t Instance_FromExist = REBASE(0x1cdcc2a);
        const uintptr_t LocalSafe_Call = REBASE(0x1c1aae6);
        const uintptr_t LocalSafe_Write = REBASE(0x1c1ace0);
        const uintptr_t PropRead = REBASE(0x1c173f0);
        const uintptr_t PropWrite = REBASE(0x1c1ace0);
        const uintptr_t ScriptConnect = REBASE(0x1c367b0);
    } // namespace IsParallel

    namespace Raknet
    {
        const uintptr_t HandleConnectionState = REBASE(0x11d62f0);
    } // namespace Raknet

    // misc
    const uintptr_t AppDataInfo = REBASE(0x7857038);
    const uintptr_t EnableLoadModule = REBASE(0x1d45460);
    const uintptr_t GetContextObject = REBASE(0x47f6f10);
    const uintptr_t GetContextObject2 = REBASE(0x1c52cd0);
    const uintptr_t GetCurrentThreadId = REBASE(0x47e0370);
    const uintptr_t GetCurrentThreadId2 = REBASE(0x4659870);
    const uintptr_t GetFFlag = REBASE(0x482b210);
    const uintptr_t GetGlobalState = REBASE(0x50824f0);
    const uintptr_t GetGlobalStateForInstance = REBASE(0x1ce6250);
    const uintptr_t GetLuaStateForInstance = REBASE(0x1c30560);
    const uintptr_t newclasspage2 = REBASE(0x43d6449);
    const uintptr_t OpcodeLookupTable = REBASE(0x3243960);
    const uintptr_t Print = REBASE(0x1d864c0);
    const uintptr_t Register = REBASE(0x69eb00);
    const uintptr_t RobloxLogCrash = REBASE(0x47f6f10);
    const uintptr_t ScriptContextResume = REBASE(0x1d00ca0);
    const uintptr_t WndProcessCheck = REBASE(0x7413018);

} // namespace Offsets

namespace Structs
{
    inline constexpr uintptr_t L_global = 0x40;
    inline constexpr uintptr_t CommonHeader_memcat = 0x1;
    inline constexpr uintptr_t Proto_p = 0x38;
    inline constexpr uintptr_t Proto_k = 0x38;
    inline constexpr uintptr_t Proto_lineinfo = 0x5;
    inline constexpr uintptr_t Proto_locvars = 0x5;
} // namespace Structs
