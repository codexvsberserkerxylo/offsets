// dumped by nick \\
// date: 2026-06-04 16:58:14 \\
// took 13.3s \\

#pragma once
#include <cstdint>
#include <Windows.h>

static const uintptr_t roblox_base = reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr));
static const uintptr_t hyperion_base = reinterpret_cast<uintptr_t>(GetModuleHandleA("RobloxPlayerBeta.dll"));

#define REBASE(x) ((x) + roblox_base)
#define HYP_REBASE(x) ((x) + hyperion_base)

namespace Offsets
{
    inline constexpr const char* LiveChannel = "version-ad5d3e2906444472";

    namespace DataModel
    {
        inline constexpr uintptr_t Children = 0x78;
        const uintptr_t DataModelDeleterPointer = REBASE(0x79ec66);
        const uintptr_t FakeDataModelPointer = REBASE(0x78ff228);
        inline constexpr uintptr_t FakeDataModelToDataModel = 0x1d0;
        inline constexpr uintptr_t GameId = 0x198;
        inline constexpr uintptr_t GameLoaded = 0x638;
        inline constexpr uintptr_t Name = 0xb0;
        inline constexpr uintptr_t PlaceId = 0x198;
        inline constexpr uintptr_t ScriptContext = 0x440;
        inline constexpr uintptr_t VisualEngine = 0x10;
        const uintptr_t VisualEnginePointer = REBASE(0x5678f4);
    } // namespace DataModel

    namespace ScriptContext
    {
        inline constexpr uintptr_t RequireBypass = 0x228;
    } // namespace ScriptContext

    namespace BasePart
    {
        inline constexpr uintptr_t Overlap = 0x1e8;
        inline constexpr uintptr_t Primitive = 0x148;
    } // namespace BasePart

    namespace ExtraSpace
    {
        inline constexpr uintptr_t RequireByapss = 0x9e9;
        inline constexpr uintptr_t ScriptContextToResume = 0x953;
    } // namespace ExtraSpace

    namespace RobloxThread
    {
        const uintptr_t GetCapabilities = REBASE(0x2fa7190);
        const uintptr_t GetIdentityStruct = REBASE(0x44a81a0);
        const uintptr_t GetTlsPointer = REBASE(0x1c90130);
        const uintptr_t Impersonator = REBASE(0x1c7e2a0);
    } // namespace RobloxThread

    namespace Instance
    {
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        inline constexpr uintptr_t ClassName = 0x8;
        inline constexpr uintptr_t offset = 0x67;
        inline constexpr uintptr_t PropDescriptor = 0x28;
        inline constexpr uintptr_t PropertyDescriptorBitFlags = 0x88;
        inline constexpr uintptr_t ScriptableMask = 0x10;
    } // namespace Instance

    namespace Property
    {
        const uintptr_t HashTableLookup = REBASE(0x1c4c830);
        const uintptr_t KTable = REBASE(0x74eb068);
    } // namespace Property

    namespace Luau
    {
        const uintptr_t currfuncname = REBASE(0x1c64d70);
        const uintptr_t lua_exception = REBASE(0x4435320);
        const uintptr_t lua_getfield = REBASE(0x44380f0);
        const uintptr_t lua_pushfstringL = REBASE(0x4433030);
        const uintptr_t lua_pushvfstring = REBASE(0x4433390);
        const uintptr_t lua_reallocstack = REBASE(0x4435bd0);
        const uintptr_t lua_resetthread = REBASE(0x4439bc0);
        const uintptr_t lua_xmove = REBASE(0x44376e0);
        const uintptr_t luaA_toobject = REBASE(0x44380f0);
        const uintptr_t luaB_assert = REBASE(0x4449d20);
        const uintptr_t luaB_error = REBASE(0x44497e0);
        const uintptr_t luaB_gcinfo = REBASE(0x4449c10);
        const uintptr_t luaB_getfenv = REBASE(0x4449970);
        const uintptr_t luaB_getmetatable = REBASE(0x4449850);
        const uintptr_t luaB_newproxy = REBASE(0x4449e70);
        const uintptr_t luaB_next = REBASE(0x4449cc0);
        const uintptr_t luaB_pcall = REBASE(0x4432450);
        const uintptr_t luaB_pcallrun = REBASE(0x4432f40);
        const uintptr_t luaB_print = REBASE(0x44495c0);
        const uintptr_t luaB_rawequal = REBASE(0x25387f0);
        const uintptr_t luaB_rawget = REBASE(0x4449b00);
        const uintptr_t luaB_rawlen = REBASE(0x4449bb0);
        const uintptr_t luaB_rawset = REBASE(0x4449b50);
        const uintptr_t luaB_setfenv = REBASE(0x1dabe30);
        const uintptr_t luaB_setmetatable = REBASE(0x44498b0);
        const uintptr_t luaB_tonumber = REBASE(0x44496a0);
        const uintptr_t luaB_tostring = REBASE(0x4449e40);
        const uintptr_t luaB_type = REBASE(0x4449c40);
        const uintptr_t luaB_typeof = REBASE(0x4449c80);
        const uintptr_t luaC_step = REBASE(0x1dec8f0);
        const uintptr_t luaD_rawrunprotected = REBASE(0x4436880);
        const uintptr_t luaF_newlclosure = REBASE(0x44618c0);
        const uintptr_t luaF_newproto = REBASE(0x4461970);
        const uintptr_t luaG_runerror = REBASE(0x1dc09c0);
        const uintptr_t luaG_runerrorl = REBASE(0x443a7e0);
        const uintptr_t luaH_new = REBASE(0x445a3d0);
        const uintptr_t luaL_argerrorl = REBASE(0x1dc9b60);
        const uintptr_t luaL_checkstring = REBASE(0x44380f0);
        const uintptr_t luaL_checktype = REBASE(0x44376e0);
        const uintptr_t luaL_error = REBASE(0x44376e0);
        const uintptr_t luaL_findtable = REBASE(0x4437730);
        const uintptr_t luaL_getmetafield = REBASE(0x4437400);
        const uintptr_t luaL_register = REBASE(0x4437cd0);
        const uintptr_t luaL_testudata = REBASE(0x4463240);
        const uintptr_t luaM_free = REBASE(0x4457f70);
        const uintptr_t luaM_freegco = REBASE(0x44584a0);
        const uintptr_t luaM_visitgco = REBASE(0x4457e10);
        const uintptr_t luaO_chunkid = REBASE(0x44678b0);
        const uintptr_t luaopen_math = REBASE(0x4453850);
        const uintptr_t luaT_eventnames = REBASE(0x6688558);
        const uintptr_t luaT_init = REBASE(0x4458880);
        const uintptr_t luaT_objtypename = REBASE(0x44380f0);
        const uintptr_t luaT_objtypename = REBASE(0x4458960);
        const uintptr_t luaV_gettable = REBASE(0x4463540);
        const uintptr_t luaVM_load = REBASE(0xb476b0);
        const uintptr_t pseudo2addr = REBASE(0x48b28f0);
    } // namespace Luau

    namespace Task
    {
        const uintptr_t cancel = REBASE(0x1dc89e0);
        const uintptr_t defer = REBASE(0x1dc8cc0);
        const uintptr_t desynchronize = REBASE(0x1dc90f0);
        const uintptr_t spawn = REBASE(0x1dc9bc0);
        const uintptr_t synchronize = REBASE(0x1dc9d40);
        const uintptr_t wait = REBASE(0x1dc9f30);
    } // namespace Task

    namespace Coroutine
    {
        const uintptr_t close = REBASE(0x444a7a0);
        const uintptr_t create = REBASE(0x444a680);
    } // namespace Coroutine

    namespace Signals
    {
        const uintptr_t FireTouchInterest = REBASE(0x29700d0);
    } // namespace Signals

    namespace IsParallel
    {
        const uintptr_t ActorRequired_Call = REBASE(0x1c823d0);
        const uintptr_t ActorRequired_Prop = REBASE(0x1c825f0);
        const uintptr_t Connection_Dc = REBASE(0x1c9d600);
        const uintptr_t Event_Connect = REBASE(0x1c9c4a0);
        const uintptr_t Event_ConnPar = REBASE(0x1c9c8d0);
        const uintptr_t Event_Once = REBASE(0x1ca00c0);
        const uintptr_t EventAccess = REBASE(0x1c7eaa0);
        const uintptr_t FilterDescendants = REBASE(0x1d0a2f0);
        const uintptr_t FunctionCall = REBASE(0x1c823d0);
        const uintptr_t Instance_FromExist = REBASE(0x1d42f20);
        const uintptr_t LocalSafe_Call = REBASE(0x1c823d0);
        const uintptr_t LocalSafe_Write = REBASE(0x1c825f0);
        const uintptr_t PropRead = REBASE(0x1c7eaa0);
        const uintptr_t PropWrite = REBASE(0x1c825f0);
        const uintptr_t ScriptConnect = REBASE(0x1c9c8d0);
    } // namespace IsParallel

    // misc
    const uintptr_t AtatachRobloxExtraSpace = REBASE(0x1cc3fd0);
    const uintptr_t atomic = REBASE(0x443b220);
    const uintptr_t closestate = REBASE(0x4438700);
    const uintptr_t EnableLoadModule = REBASE(0x1dab8b0);
    const uintptr_t GetContextObject = REBASE(0x489a280);
    const uintptr_t GetCurrentThreadId = REBASE(0x48836e0);
    const uintptr_t GetFFlag = REBASE(0x48ce300);
    const uintptr_t GetGlobalState = REBASE(0x512d140);
    const uintptr_t GetGlobalStateForInstance = REBASE(0x1d4c5f0);
    const uintptr_t markroot = REBASE(0x443c2e0);
    const uintptr_t OpcodeLookupTable = REBASE(0x32bbf20);
    const uintptr_t Print = REBASE(0x1dec8f0);
    const uintptr_t RobloxLogCrash = REBASE(0x489a280);
    const uintptr_t traversetable = REBASE(0x443d020);
    const uintptr_t WndProcessCheck = REBASE(0x74ce018);
} // namespace Offsets

namespace Structs
{
    inline constexpr uintptr_t L_global = 0x40;
} // namespace Structs
