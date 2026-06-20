// dumped by nick \\
// date: 2026-05-27 00:54:35 \\
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
    inline constexpr const char* LiveChannel = "version-2b1721d47abf49aa";

    namespace Hyperion
    {
        const uintptr_t BitMap = HYP_REBASE(0x1d26b8);
        const uintptr_t ControlFlowGuard = HYP_REBASE(0x75cfc0);

        inline constexpr uint8_t  ByteShift = 15;
        inline constexpr uint8_t  PageShift = 12;
        inline constexpr uint32_t PageSize = 0x1000;
        inline constexpr uint32_t PageMask = 0xfff;
        inline constexpr uint8_t  BitMask = 7;
    } // namespace Hyperion

    namespace DataModel
    {
        inline constexpr uintptr_t Children = 0x78;
        const uintptr_t DataModelDeleterPointer = REBASE(0x773d36);
        const uintptr_t FakeDataModelPointer = REBASE(0x74f6758);
        inline constexpr uintptr_t FakeDataModelToDataModel = 0x1d0;
        inline constexpr uintptr_t GameId = 0x198;
        inline constexpr uintptr_t GameLoaded = 0x638;
        inline constexpr uintptr_t Name = 0xb0;
        inline constexpr uintptr_t PlaceId = 0x198;
        inline constexpr uintptr_t ScriptContext = 0x440;
        inline constexpr uintptr_t VisualEngine = 0x10;
        const uintptr_t VisualEnginePointer = REBASE(0x528be4);
    } // namespace DataModel

    namespace ScriptContext
    {
        inline constexpr uintptr_t Identity = 0xe8;
        inline constexpr uintptr_t RequireBypass = 0x1a8;
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
        const uintptr_t GetCapabilities = REBASE(0x1c26700);
        const uintptr_t GetIdentityStruct = REBASE(0x48083c0);
        const uintptr_t GetTlsPointer = REBASE(0x1c7d410);
        const uintptr_t Impersonator = REBASE(0x5e89b0);
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
        const uintptr_t HashTableLookup = REBASE(0x1c30590);
        const uintptr_t KTable = REBASE(0x70c7d50);
    } // namespace Property

    namespace Luau
    {
        const uintptr_t currfuncname = REBASE(0x1c44940);
        const uintptr_t f_luaopen = REBASE(0x474af30);
        const uintptr_t lua_clock = REBASE(0x4761b10);
        const uintptr_t lua_exception = REBASE(0x474a060);
        const uintptr_t lua_getfield = REBASE(0x474cd20);
        const uintptr_t lua_pushfstringL = REBASE(0x4746720);
        const uintptr_t lua_pushvfstring = REBASE(0x4746a80);
        const uintptr_t lua_reallocstack = REBASE(0x474a930);
        const uintptr_t lua_resetthread = REBASE(0x4749f10);
        const uintptr_t lua_xmove = REBASE(0x474c310);
        const uintptr_t luaA_toobject = REBASE(0x474cd20);
        const uintptr_t luaB_assert = REBASE(0x475ef60);
        const uintptr_t luaB_error = REBASE(0x475ea20);
        const uintptr_t luaB_gcinfo = REBASE(0x475ee50);
        const uintptr_t luaB_getfenv = REBASE(0x475ebb0);
        const uintptr_t luaB_getmetatable = REBASE(0x475ea90);
        const uintptr_t luaB_newproxy = REBASE(0x475f0b0);
        const uintptr_t luaB_next = REBASE(0x475ef00);
        const uintptr_t luaB_pcall = REBASE(0x4745b10);
        const uintptr_t luaB_pcallrun = REBASE(0x4746630);
        const uintptr_t luaB_print = REBASE(0x475e800);
        const uintptr_t luaB_rawequal = REBASE(0x475ecf0);
        const uintptr_t luaB_rawget = REBASE(0x475ed40);
        const uintptr_t luaB_rawlen = REBASE(0x475edf0);
        const uintptr_t luaB_rawset = REBASE(0x475ed90);
        const uintptr_t luaB_setfenv = REBASE(0x1d8da60);
        const uintptr_t luaB_setmetatable = REBASE(0x475eaf0);
        const uintptr_t luaB_tonumber = REBASE(0x475e8e0);
        const uintptr_t luaB_tostring = REBASE(0x475f080);
        const uintptr_t luaB_type = REBASE(0x475ee80);
        const uintptr_t luaB_typeof = REBASE(0x475eec0);
        const uintptr_t luaC_step = REBASE(0x1dd04e0);
        const uintptr_t luaD_rawrunprotected = REBASE(0x474b500);
        const uintptr_t luaF_freeproto = REBASE(0x4774d20);
        const uintptr_t luaF_newlclosure = REBASE(0x4775000);
        const uintptr_t luaF_newproto = REBASE(0x47750b0);
        const uintptr_t luaG_runerror = REBASE(0x1da2de0);
        const uintptr_t luaG_runerrorl = REBASE(0x474de60);
        const uintptr_t luaH_new = REBASE(0x476d930);
        const uintptr_t luaL_argerrorl = REBASE(0x1dab340);
        const uintptr_t luaL_checkstring = REBASE(0x474cd20);
        const uintptr_t luaL_checktype = REBASE(0x474c310);
        const uintptr_t luaL_error = REBASE(0x474c310);
        const uintptr_t luaL_findtable = REBASE(0x474c360);
        const uintptr_t luaL_getmetafield = REBASE(0x474c030);
        const uintptr_t luaL_register = REBASE(0x474c900);
        const uintptr_t luaL_testudata = REBASE(0x4776916);
        const uintptr_t luaL_tolstring = REBASE(0x474ca40);
        const uintptr_t luaL_where = REBASE(0x474d270);
        const uintptr_t luaM_free = REBASE(0x476b470);
        const uintptr_t luaM_freegco = REBASE(0x476b9c0);
        const uintptr_t luaM_visitgco = REBASE(0x476b310);
        const uintptr_t luaO_chunkid = REBASE(0x477afc0);
        const uintptr_t luaO_pushfstring = REBASE(0x477b180);
        const uintptr_t luaO_pushvfstring = REBASE(0x477b260);
        const uintptr_t luaopen_math = REBASE(0x4768b90);
        const uintptr_t luaT_eventnames = REBASE(0x62f4298);
        const uintptr_t luaT_init = REBASE(0x476be00);
        const uintptr_t luaT_objtypename = REBASE(0x474cd20);
        const uintptr_t luaT_objtypename = REBASE(0x476bee0);
        const uintptr_t luau_Opcode = REBASE(0x47513e9);
        const uintptr_t luaV_gettable = REBASE(0x4776bf0);
        const uintptr_t luaVM_load = REBASE(0x4750ad0);
        const uintptr_t pseudo2addr = REBASE(0x4b0da30);
        const uintptr_t pusherror = REBASE(0x4748b10);
    } // namespace Luau

    namespace Task
    {
        const uintptr_t cancel = REBASE(0x1daa140);
        const uintptr_t defer = REBASE(0x1daa450);
        const uintptr_t desynchronize = REBASE(0x1daa450);
        const uintptr_t spawn = REBASE(0x1dab3a0);
        const uintptr_t synchronize = REBASE(0x1dab520);
        const uintptr_t wait = REBASE(0x1dab730);
    } // namespace Task

    namespace Coroutine
    {
        const uintptr_t close = REBASE(0x475fa30);
        const uintptr_t create = REBASE(0x475f910);
        const uintptr_t resume = REBASE(0x475fff0);
    } // namespace Coroutine

    namespace Signals
    {
        const uintptr_t FireTouchInterest = REBASE(0x2a482e0);
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
        const uintptr_t Instance_FromExist = REBASE(0x1d75bf0);
        const uintptr_t LocalSafe_Call = REBASE(0x1d1b020);
        const uintptr_t LocalSafe_Write = REBASE(0x1d1b266);
        const uintptr_t PropRead = REBASE(0x1d173f0);
        const uintptr_t PropWrite = REBASE(0x1d1b266);
        const uintptr_t ScriptConnect = REBASE(0x1c697b0);
    } // namespace IsParallel

    // misc
    const uintptr_t AtatachRobloxExtraSpace = REBASE(0x1c93300);
    const uintptr_t atomic = REBASE(0x474e8d0);
    const uintptr_t closestate = REBASE(0x4748a50);
    const uintptr_t EnableLoadModule = REBASE(0x1d8d4b0);
    const uintptr_t GetContextObject = REBASE(0x4af4da0);
    const uintptr_t GetCurrentThreadId = REBASE(0x4ade4d0);
    const uintptr_t GetFFlag = REBASE(0x4b29f80);
    const uintptr_t GetGlobalState = REBASE(0x5103830);
    const uintptr_t GetGlobalStateForInstance = REBASE(0x1d6f1f0);
    const uintptr_t loadsafe = REBASE(0x4750d80);
    const uintptr_t markroot = REBASE(0x474f9c0);
    const uintptr_t OpcodeLookupTable = REBASE(0x34ae662);
    const uintptr_t Print = REBASE(0x1dd04e0);
    const uintptr_t propagatemark = REBASE(0x474fb00);
    const uintptr_t RobloxLogCrash = REBASE(0x4af4da0);
    const uintptr_t traversetable = REBASE(0x4750700);
    const uintptr_t WndProcessCheck = REBASE(0x70ab018);
} // namespace Offsets

namespace Structs
{
    inline constexpr uintptr_t L_global = 0x80;
    inline constexpr uintptr_t CommonHeader_memcat = 0x2;
    inline constexpr uintptr_t Proto_code = 0x68;
    inline constexpr uintptr_t Proto_p = 0x48;
    inline constexpr uintptr_t Proto_k = 0x60;
    inline constexpr uintptr_t Proto_lineinfo = 0x10;
    inline constexpr uintptr_t Proto_locvars = 0x38;
    inline constexpr uintptr_t Proto_upvalues = 0x38;
    inline constexpr uintptr_t Proto_debuginsn = 0x30;
} // namespace Structs
