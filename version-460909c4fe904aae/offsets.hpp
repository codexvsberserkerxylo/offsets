// dumped by nick \\
// date: 2026-06-01 18:17:23 \\
// took 12.1s \\

#pragma once
#include <cstdint>
#include <Windows.h>

static const uintptr_t roblox_base = reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr));
static const uintptr_t hyperion_base = reinterpret_cast<uintptr_t>(GetModuleHandleA("RobloxPlayerBeta.dll"));

#define REBASE(x) ((x) + roblox_base)
#define HYP_REBASE(x) ((x) + hyperion_base)

namespace Offsets
{
    inline constexpr const char* LiveChannel = "version-460909c4fe904aae";

    namespace DataModel
    {
        inline constexpr uintptr_t Children = 0x78;
        const uintptr_t DataModelDeleterPointer = REBASE(0x79ca46);
        const uintptr_t FakeDataModelPointer = REBASE(0x78cf1d8);
        inline constexpr uintptr_t FakeDataModelToDataModel = 0x1d0;
        inline constexpr uintptr_t GameId = 0x198;
        inline constexpr uintptr_t GameLoaded = 0x638;
        inline constexpr uintptr_t Name = 0xb0;
        inline constexpr uintptr_t PlaceId = 0x198;
        inline constexpr uintptr_t ScriptContext = 0x440;
        inline constexpr uintptr_t VisualEngine = 0x10;
        const uintptr_t VisualEnginePointer = REBASE(0x5684d4);
    } // namespace DataModel

    namespace ScriptContext
    {
        inline constexpr uintptr_t Identity = 0x368;
        inline constexpr uintptr_t RequireBypass = 0x228;
        inline constexpr uintptr_t Userdata = 0x100;
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
        const uintptr_t GetCapabilities = REBASE(0x2f7fa90);
        const uintptr_t GetIdentityStruct = REBASE(0x4473d00);
        const uintptr_t GetTlsPointer = REBASE(0x1c6ecc0);
        const uintptr_t Impersonator = REBASE(0x1c70d20);
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
        const uintptr_t HashTableLookup = REBASE(0x1c31980);
        const uintptr_t KTable = REBASE(0x74bcee8);
    } // namespace Property

    namespace Luau
    {
        const uintptr_t currfuncname = REBASE(0x1c451d0);
        const uintptr_t lua_exception = REBASE(0x4403520);
        const uintptr_t lua_getfield = REBASE(0x44066a0);
        const uintptr_t lua_pushfstringL = REBASE(0x4401270);
        const uintptr_t lua_pushvfstring = REBASE(0x44015d0);
        const uintptr_t lua_resetthread = REBASE(0x4407d70);
        const uintptr_t lua_xmove = REBASE(0x4405850);
        const uintptr_t luaA_toobject = REBASE(0x44066a0);
        const uintptr_t luaB_assert = REBASE(0x4418070);
        const uintptr_t luaB_error = REBASE(0x4417b30);
        const uintptr_t luaB_gcinfo = REBASE(0x4417f60);
        const uintptr_t luaB_getfenv = REBASE(0x4417cc0);
        const uintptr_t luaB_getmetatable = REBASE(0x4417ba0);
        const uintptr_t luaB_newproxy = REBASE(0x44181c0);
        const uintptr_t luaB_next = REBASE(0x4418010);
        const uintptr_t luaB_pcall = REBASE(-0x253e9aa1);
        const uintptr_t luaB_pcallrun = REBASE(0x4401180);
        const uintptr_t luaB_print = REBASE(0x4417910);
        const uintptr_t luaB_rawequal = REBASE(0x251b360);
        const uintptr_t luaB_rawget = REBASE(0x4417e50);
        const uintptr_t luaB_rawlen = REBASE(0x4417f00);
        const uintptr_t luaB_rawset = REBASE(0x4417ea0);
        const uintptr_t luaB_setfenv = REBASE(0x1d8c5b0);
        const uintptr_t luaB_setmetatable = REBASE(0x4417c00);
        const uintptr_t luaB_tonumber = REBASE(0x44179f0);
        const uintptr_t luaB_tostring = REBASE(0x4418190);
        const uintptr_t luaB_type = REBASE(0x4417f90);
        const uintptr_t luaB_typeof = REBASE(0x4417fd0);
        const uintptr_t luaC_step = REBASE(0x1dcd0b0);
        const uintptr_t luaD_rawrunprotected = REBASE(0x4404a70);
        const uintptr_t luaF_freeproto = REBASE(0x442f9e0);
        const uintptr_t luaF_newlclosure = REBASE(0x442fca0);
        const uintptr_t luaF_newproto = REBASE(0x442fd50);
        const uintptr_t luaG_runerror = REBASE(0x1da1140);
        const uintptr_t luaG_runerrorl = REBASE(0x44089c0);
        const uintptr_t luaH_new = REBASE(0x4428780);
        const uintptr_t luaL_argerrorl = REBASE(0x1daa2e0);
        const uintptr_t luaL_checkstring = REBASE(0x44066a0);
        const uintptr_t luaL_checktype = REBASE(0x4405850);
        const uintptr_t luaL_error = REBASE(0x4405850);
        const uintptr_t luaL_findtable = REBASE(0x44058a0);
        const uintptr_t luaL_getmetafield = REBASE(0x4405570);
        const uintptr_t luaL_register = REBASE(0x4405e40);
        const uintptr_t luaL_testudata = REBASE(0x4431646);
        const uintptr_t luaM_free = REBASE(0x44262d0);
        const uintptr_t luaM_freegco = REBASE(0x4426820);
        const uintptr_t luaM_visitgco = REBASE(0x4426180);
        const uintptr_t luaO_chunkid = REBASE(0x4435ca0);
        const uintptr_t luaopen_math = REBASE(0x4421b90);
        const uintptr_t luaT_eventnames = REBASE(0x6661708);
        const uintptr_t luaT_init = REBASE(0x4426bf0);
        const uintptr_t luaT_objtypename = REBASE(0x44066a0);
        const uintptr_t luau_Opcode = REBASE(0x440bf09);
        const uintptr_t luaV_gettable = REBASE(0x4431930);
        const uintptr_t luaVM_load = REBASE(0xb48680);
        const uintptr_t pseudo2addr = REBASE(0x4882950);
    } // namespace Luau

    namespace Task
    {
        const uintptr_t cancel = REBASE(0x1da9160);
        const uintptr_t defer = REBASE(0x1da9440);
        const uintptr_t desynchronize = REBASE(0x1da9870);
        const uintptr_t spawn = REBASE(0x1daa340);
        const uintptr_t synchronize = REBASE(0x1daa4c0);
        const uintptr_t wait = REBASE(0x1daa6b0);
    } // namespace Task

    namespace Coroutine
    {
        const uintptr_t close = REBASE(0x4418af0);
        const uintptr_t create = REBASE(0x44189d0);
    } // namespace Coroutine

    namespace Signals
    {
        const uintptr_t FireTouchInterest = REBASE(0x2953910);
    } // namespace Signals

    namespace IsParallel
    {
        const uintptr_t ActorRequired_Call = REBASE(0x1c60c80);
        const uintptr_t ActorRequired_Prop = REBASE(0x1c60ec6);
        const uintptr_t Connection_Dc = REBASE(0x1c7cfd0);
        const uintptr_t Event_Connect = REBASE(0x1c7be80);
        const uintptr_t Event_ConnPar = REBASE(0x1c7c2b0);
        const uintptr_t Event_Once = REBASE(0x1c7fab0);
        const uintptr_t EventAccess = REBASE(0x1c5d470);
        const uintptr_t FilterDescendants = REBASE(0x1ce74e0);
        const uintptr_t FunctionCall = REBASE(0x1c60c80);
        const uintptr_t Instance_FromExist = REBASE(0x1d22740);
        const uintptr_t LocalSafe_Call = REBASE(0x1c60c80);
        const uintptr_t LocalSafe_Write = REBASE(0x1c60ec6);
        const uintptr_t PropRead = REBASE(0x1c5d470);
        const uintptr_t PropWrite = REBASE(0x1c60ec6);
        const uintptr_t ScriptConnect = REBASE(0x1c7c2b0);
    } // namespace IsParallel

    // misc
    const uintptr_t AtatachRobloxExtraSpace = REBASE(0x1ca3680);
    const uintptr_t atomic = REBASE(0x4409400);
    const uintptr_t closestate = REBASE(0x4406880);
    const uintptr_t EnableLoadModule = REBASE(0x1d8c010);
    const uintptr_t GetContextObject = REBASE(0x486a330);
    const uintptr_t GetCurrentThreadId = REBASE(0x4853790);
    const uintptr_t GetFFlag = REBASE(0x489e360);
    const uintptr_t GetGlobalState = REBASE(0x50f6740);
    const uintptr_t GetGlobalStateForInstance = REBASE(0x1d2bec0);
    const uintptr_t markroot = REBASE(0x440a4e0);
    const uintptr_t OpcodeLookupTable = REBASE(0x3295cb0);
    const uintptr_t Print = REBASE(0x1dcd0b0);
    const uintptr_t RobloxLogCrash = REBASE(0x486a330);
    const uintptr_t traversetable = REBASE(0x440b210);
    const uintptr_t WndProcessCheck = REBASE(0x74a0020);
} // namespace Offsets

namespace Structs
{
    inline constexpr uintptr_t L_global = 0x40;
    inline constexpr uintptr_t CommonHeader_memcat = 0x1;
    inline constexpr uintptr_t Proto_code = 0x10;
    inline constexpr uintptr_t Proto_p = 0x18;
    inline constexpr uintptr_t Proto_k = 0x8;
    inline constexpr uintptr_t Proto_lineinfo = 0x38;
    inline constexpr uintptr_t Proto_locvars = 0x50;
    inline constexpr uintptr_t Proto_upvalues = 0x50;
    inline constexpr uintptr_t Proto_debuginsn = 0x68;
} // namespace Structs
