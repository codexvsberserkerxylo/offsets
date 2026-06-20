// dumped by nick \\
// date: 2026-05-23 10:33:26 \\
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
    inline constexpr const char* LiveChannel = "version-4b6315bf1f0a4dbb";

    namespace Hyperion
    {
        const uintptr_t BitMap = HYP_REBASE(0x157c368);
        const uintptr_t ControlFlowGuard = HYP_REBASE(0xea80e0);

        inline constexpr uint8_t  ByteShift = 15;
        inline constexpr uint8_t  PageShift = 12;
        inline constexpr uint32_t PageSize  = 0x1000;
        inline constexpr uint32_t PageMask  = 0xfff;
        inline constexpr uint8_t  BitMask   = 7;
    } // namespace Hyperion

    namespace DataModel
    {
        inline constexpr uintptr_t Children = 0x78;
        const uintptr_t DataModelDeleterPointer = REBASE(0x79f246);
        const uintptr_t FakeDataModelPointer = REBASE(0x7868a68);
        inline constexpr uintptr_t FakeDataModelToDataModel = 0x1d0;
        inline constexpr uintptr_t GameId = 0x198;
        inline constexpr uintptr_t GameLoaded = 0x638;
        inline constexpr uintptr_t Name = 0xb0;
        inline constexpr uintptr_t PlaceId = 0x198;
        inline constexpr uintptr_t ScriptContext = 0x440;
        inline constexpr uintptr_t VisualEngine = 0x10;
        const uintptr_t VisualEnginePointer = REBASE(0x558cc4);
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
        const uintptr_t GetCapabilities = REBASE(0x1be9bc0);
        const uintptr_t GetIdentityStruct = REBASE(0x44238a0);
        const uintptr_t GetTlsPointer = REBASE(0x1c28ea0);
        const uintptr_t Impersonator = REBASE(0x1c2b2a0);
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
        const uintptr_t HashTableLookup = REBASE(0x1be6230);
        const uintptr_t KTable = REBASE(0x742fdd0);
    } // namespace Property

    namespace Luau
    {
        const uintptr_t currfuncname = REBASE(0x1bff670);
        const uintptr_t lua_exception = REBASE(0x43b31b0);
        const uintptr_t lua_getfield = REBASE(0x43b63c0);
        const uintptr_t lua_pushfstringL = REBASE(0x43b0eb0);
        const uintptr_t lua_pushvfstring = REBASE(0x43b1210);
        const uintptr_t lua_resetthread = REBASE(0x43b7a60);
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
        const uintptr_t luaB_setfenv = REBASE(0x1d45a00);
        const uintptr_t luaB_setmetatable = REBASE(0x43c7740);
        const uintptr_t luaB_tonumber = REBASE(0x43c7530);
        const uintptr_t luaB_tostring = REBASE(0x43c7cd0);
        const uintptr_t luaB_type = REBASE(0x43c7ad0);
        const uintptr_t luaB_typeof = REBASE(0x43c7b10);
        const uintptr_t luaC_step = REBASE(0x1d864c0);
        const uintptr_t luaD_rawrunprotected = REBASE(0x43b4710);
        const uintptr_t luaF_freeproto = REBASE(0x43df570);
        const uintptr_t luaF_newlclosure = REBASE(0x43df840);
        const uintptr_t luaF_newproto = REBASE(0x43df8f0);
        const uintptr_t luaG_runerror = REBASE(0x1d5a580);
        const uintptr_t luaG_runerrorl = REBASE(0x43b8680);
        const uintptr_t luaH_new = REBASE(0x43d82b0);
        const uintptr_t luaL_argerrorl = REBASE(0x1d63710);
        const uintptr_t luaL_checkstring = REBASE(0x43b63c0);
        const uintptr_t luaL_checktype = REBASE(0x43b5570);
        const uintptr_t luaL_error = REBASE(0x43b5570);
        const uintptr_t luaL_findtable = REBASE(0x43b55c0);
        const uintptr_t luaL_getmetafield = REBASE(0x43b5290);
        const uintptr_t luaL_register = REBASE(0x43b5b60);
        const uintptr_t luaL_testudata = REBASE(0x43e11c0);
        const uintptr_t luaM_free = REBASE(0x43d5e00);
        const uintptr_t luaM_freegco = REBASE(0x43d6350);
        const uintptr_t luaM_visitgco = REBASE(0x43d5ca0);
        const uintptr_t luaO_chunkid = REBASE(0x43e5840);
        const uintptr_t luaopen_math = REBASE(0x43d16e0);
        const uintptr_t luaT_eventnames = REBASE(0x65e1048);
        const uintptr_t luaT_init = REBASE(0x43d6730);
        const uintptr_t luaT_objtypename = REBASE(0x43b63c0);
        const uintptr_t luau_Opcode = REBASE(0x43bbaa9);
        const uintptr_t luaV_gettable = REBASE(0x43e14c0);
        const uintptr_t luaVM_load = REBASE(0xb48410);
        const uintptr_t pseudo2addr = REBASE(0x480f460);
    } // namespace Luau

    namespace Task
    {
        const uintptr_t cancel = REBASE(0x1d62590);
        const uintptr_t defer = REBASE(0x1d62870);
        const uintptr_t desynchronize = REBASE(0x1d62ca0);
        const uintptr_t spawn = REBASE(0x1d63770);
        const uintptr_t synchronize = REBASE(0x1d638f0);
        const uintptr_t wait = REBASE(0x1d63ae0);
    } // namespace Task

    namespace Coroutine
    {
        const uintptr_t close = REBASE(0x43c8630);
        const uintptr_t create = REBASE(0x43c8510);
    } // namespace Coroutine

    namespace Signals
    {
        const uintptr_t FireTouchInterest = REBASE(0x2922a70);
    } // namespace Signals

    namespace IsParallel
    {
        const uintptr_t ActorRequired_Call = REBASE(0x1c1aae6);
        const uintptr_t ActorRequired_Prop = REBASE(0x1c1ace0);
        const uintptr_t Connection_Dc = REBASE(0x1c374d0);
        const uintptr_t Event_Connect = REBASE(0x1c36380);
        const uintptr_t Event_ConnPar = REBASE(0x1c367b0);
        const uintptr_t Event_Once = REBASE(0x1c39ee0);
        const uintptr_t EventAccess = REBASE(0x1c173f0);
        const uintptr_t FilterDescendants = REBASE(0x1ca99e0);
        const uintptr_t FunctionCall = REBASE(0x1c1aae6);
        const uintptr_t Instance_FromExist = REBASE(0x1cdcc10);
        const uintptr_t LocalSafe_Call = REBASE(0x1c1aae6);
        const uintptr_t LocalSafe_Write = REBASE(0x1c1ace0);
        const uintptr_t PropRead = REBASE(0x1c173f0);
        const uintptr_t PropWrite = REBASE(0x1c1ace0);
        const uintptr_t ScriptConnect = REBASE(0x1c367b0);
    } // namespace IsParallel

    // misc
    const uintptr_t AtatachRobloxExtraSpace = REBASE(0x1c5d810);
    const uintptr_t atomic = REBASE(0x43b90b0);
    const uintptr_t closestate = REBASE(0x43b65a0);
    const uintptr_t EnableLoadModule = REBASE(0x1d45460);
    const uintptr_t GetContextObject = REBASE(0x47f6f10);
    const uintptr_t GetCurrentThreadId = REBASE(0x47e0370);
    const uintptr_t GetFFlag = REBASE(0x482b180);
    const uintptr_t GetGlobalState = REBASE(0x50824f0);
    const uintptr_t GetGlobalStateForInstance = REBASE(0x1ce6210);
    const uintptr_t markroot = REBASE(0x43ba170);
    const uintptr_t OpcodeLookupTable = REBASE(0x3243960);
    const uintptr_t Print = REBASE(0x1d864c0);
    const uintptr_t RobloxLogCrash = REBASE(0x47f6f10);
    const uintptr_t traversetable = REBASE(0x43bada0);
    const uintptr_t WndProcessCheck = REBASE(0x7413018);
} // namespace Offsets

namespace Structs
{
    inline constexpr uintptr_t L_global = 0x40;
    inline constexpr uintptr_t CommonHeader_memcat = 0x1;
    inline constexpr uintptr_t Proto_code = 0x68;
    inline constexpr uintptr_t Proto_p = 0x10;
    inline constexpr uintptr_t Proto_k = 0x60;
    inline constexpr uintptr_t Proto_lineinfo = 0x38;
    inline constexpr uintptr_t Proto_locvars = 0x8;
    inline constexpr uintptr_t Proto_upvalues = 0x8;
    inline constexpr uintptr_t Proto_debuginsn = 0x28;
} // namespace Structs
