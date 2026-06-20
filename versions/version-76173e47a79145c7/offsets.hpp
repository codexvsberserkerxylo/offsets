// dumped by nick \\
// date: 2026-06-12 23:19:20 \\
// took 13.2s \\

#pragma once
#include <cstdint>
#include <Windows.h>

static const uintptr_t roblox_base = reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr));
static const uintptr_t hyperion_base = reinterpret_cast<uintptr_t>(GetModuleHandleA("RobloxPlayerBeta.dll"));

#define REBASE(x) ((x) + roblox_base)
#define HYP_REBASE(x) ((x) + hyperion_base)

namespace Offsets
{
    inline constexpr const char* LiveChannel = "version-76173e47a79145c7";

    namespace DataModel
    {
        inline constexpr uintptr_t Children = 0x78;
        const uintptr_t DataModelDeleterPointer = REBASE(0x7ab1e6);
        const uintptr_t FakeDataModelPointer = REBASE(0x7a39ad8);
        inline constexpr uintptr_t FakeDataModelToDataModel = 0x1d0;
        inline constexpr uintptr_t GameId = 0x198;
        inline constexpr uintptr_t GameLoaded = 0x638;
        inline constexpr uintptr_t Name = 0xb0;
        inline constexpr uintptr_t PlaceId = 0x198;
        inline constexpr uintptr_t ScriptContext = 0x440;
        inline constexpr uintptr_t VisualEngine = 0x10;
        const uintptr_t VisualEnginePointer = REBASE(0x571e94);
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
        const uintptr_t GetIdentityStruct = REBASE(0x45ab200);
        const uintptr_t GetTlsPointer = REBASE(0x1caa830);
        const uintptr_t Impersonator = REBASE(0x1c987c0);
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
        const uintptr_t HashTableLookup = REBASE(0x1c65d20);
        const uintptr_t KTable = REBASE(0x76211a8);
    } // namespace Property

    namespace Luau
    {
        const uintptr_t currfuncname = REBASE(0x1c7e1d0);
        const uintptr_t lua_exception = REBASE(0x45369d0);
        const uintptr_t lua_getfield = REBASE(0x45398f0);
        const uintptr_t lua_pushfstringL = REBASE(0x4534100);
        const uintptr_t lua_pushvfstring = REBASE(0x4534810);
        const uintptr_t lua_resetthread = REBASE(0x453b3f0);
        const uintptr_t lua_xmove = REBASE(0x4538e00);
        const uintptr_t luaA_toobject = REBASE(0x45398f0);
        const uintptr_t luaB_assert = REBASE(0x454d640);
        const uintptr_t luaB_error = REBASE(0x454d100);
        const uintptr_t luaB_gcinfo = REBASE(0x454d530);
        const uintptr_t luaB_getfenv = REBASE(0x454d290);
        const uintptr_t luaB_getmetatable = REBASE(0x1cd1c67);
        const uintptr_t luaB_newproxy = REBASE(0x454d790);
        const uintptr_t luaB_next = REBASE(0x454d5e0);
        const uintptr_t luaB_pcall = REBASE(0x4533260);
        const uintptr_t luaB_pcallrun = REBASE(0x4533fd0);
        const uintptr_t luaB_print = REBASE(0x454cee0);
        const uintptr_t luaB_rawequal = REBASE(0x258e0f0);
        const uintptr_t luaB_rawget = REBASE(0x454d420);
        const uintptr_t luaB_rawlen = REBASE(0x454d4d0);
        const uintptr_t luaB_rawset = REBASE(0x454d470);
        const uintptr_t luaB_setfenv = REBASE(0x1dc7740);
        const uintptr_t luaB_setmetatable = REBASE(0x454d1d0);
        const uintptr_t luaB_tonumber = REBASE(0x454cfc0);
        const uintptr_t luaB_tostring = REBASE(0x454d760);
        const uintptr_t luaB_type = REBASE(0x454d560);
        const uintptr_t luaB_typeof = REBASE(0x454d5a0);
        const uintptr_t luaC_step = REBASE(0x1e08380);
        const uintptr_t luaD_rawrunprotected = REBASE(0x4537f40);
        const uintptr_t luaF_newlclosure = REBASE(0x45633c0);
        const uintptr_t luaF_newproto = REBASE(0x4563470);
        const uintptr_t luaG_runerror = REBASE(0x1ddc2c0);
        const uintptr_t luaG_runerrorl = REBASE(0x453c010);
        const uintptr_t luaH_new = REBASE(0x455bf10);
        const uintptr_t luaL_argerrorl = REBASE(0x1de4110);
        const uintptr_t luaL_checkstring = REBASE(0x45398f0);
        const uintptr_t luaL_checktype = REBASE(0x4538e00);
        const uintptr_t luaL_error = REBASE(0x4538e00);
        const uintptr_t luaL_findtable = REBASE(0x4538e50);
        const uintptr_t luaL_getmetafield = REBASE(0x6fc7d0);
        const uintptr_t luaL_register = REBASE(0x45394d0);
        const uintptr_t luaL_testudata = REBASE(0x4564d76);
        const uintptr_t luaM_free = REBASE(0x4559ac0);
        const uintptr_t luaM_freegco = REBASE(0x4559ff0);
        const uintptr_t luaM_visitgco = REBASE(0x4559960);
        const uintptr_t luaO_chunkid = REBASE(0x45693c0);
        const uintptr_t luaopen_math = REBASE(0x45571f0);
        const uintptr_t luaT_eventnames = REBASE(0x67ae258);
        const uintptr_t luaT_init = REBASE(0x455a3c0);
        const uintptr_t luaT_objtypename = REBASE(0x45398f0);
        const uintptr_t luaV_gettable = REBASE(0x4565050);
        const uintptr_t luaVM_load = REBASE(0xb54210);
        const uintptr_t pseudo2addr = REBASE(0x49b8a10);
    } // namespace Luau

    namespace Task
    {
        const uintptr_t cancel = REBASE(0x1de2f90);
        const uintptr_t defer = REBASE(0x1de3270);
        const uintptr_t desynchronize = REBASE(0x1de36a0);
        const uintptr_t spawn = REBASE(0x1de4170);
        const uintptr_t synchronize = REBASE(0x1de42f0);
        const uintptr_t wait = REBASE(0x1de44e0);
    } // namespace Task

    namespace Coroutine
    {
        const uintptr_t close = REBASE(0x454e140);
        const uintptr_t create = REBASE(0x454e020);
    } // namespace Coroutine

    namespace Signals
    {
        const uintptr_t FireTouchInterest = REBASE(0x29d9ac0);
    } // namespace Signals

    namespace IsParallel
    {
        const uintptr_t ActorRequired_Call = REBASE(0x1c9ca10);
        const uintptr_t ActorRequired_Prop = REBASE(0x1c9cc30);
        const uintptr_t Connection_Dc = REBASE(0x1cb7db0);
        const uintptr_t Event_Connect = REBASE(0x1cb6c50);
        const uintptr_t Event_ConnPar = REBASE(0x1cb7080);
        const uintptr_t Event_Once = REBASE(0x1cba870);
        const uintptr_t EventAccess = REBASE(0x1c98fc0);
        const uintptr_t FilterDescendants = REBASE(0x1d17cb0);
        const uintptr_t FunctionCall = REBASE(0x1c9ca10);
        const uintptr_t Instance_FromExist = REBASE(0x1d5e090);
        const uintptr_t LocalSafe_Call = REBASE(0x1c9ca10);
        const uintptr_t LocalSafe_Write = REBASE(0x1c9cc30);
        const uintptr_t PropRead = REBASE(0x1c98fc0);
        const uintptr_t PropWrite = REBASE(0x1c9cc30);
        const uintptr_t ScriptConnect = REBASE(0x1cb7080);
    } // namespace IsParallel

    // misc
    const uintptr_t AtatachRobloxExtraSpace = REBASE(0x1cdeca0);
    const uintptr_t atomic = REBASE(0x453ca60);
    const uintptr_t closestate = REBASE(0x4539f40);
    const uintptr_t EnableLoadModule = REBASE(0x1dc7170);
    const uintptr_t GetContextObject = REBASE(0x49a03a0);
    const uintptr_t GetCurrentThreadId = REBASE(0x49896e0);
    const uintptr_t GetFFlag = REBASE(0x49d4410);
    const uintptr_t GetGlobalState = REBASE(0x49a03a0);
    const uintptr_t GetGlobalStateForInstance = REBASE(0x1dac810);
    const uintptr_t markroot = REBASE(0x453db30);
    const uintptr_t OpcodeLookupTable = REBASE(0x332a7b0);
    const uintptr_t Print = REBASE(0x1e08380);
    const uintptr_t RobloxLogCrash = REBASE(0x49a03a0);
    const uintptr_t traversetable = REBASE(0x453e9c0);
    const uintptr_t WndProcessCheck = REBASE(0x75fe020);
} // namespace Offsets

namespace Structs
{
    inline constexpr uintptr_t L_global = 0x40;
} // namespace Structs
