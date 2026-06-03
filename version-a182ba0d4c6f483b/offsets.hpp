// dumped by nick \\
// date: 2026-06-02 19:57:54 \\
// took 12.9s \\

#pragma once
#include <cstdint>
#include <Windows.h>

static const uintptr_t roblox_base = reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr));
static const uintptr_t hyperion_base = reinterpret_cast<uintptr_t>(GetModuleHandleA("RobloxPlayerBeta.dll"));

#define REBASE(x) ((x) + roblox_base)
#define HYP_REBASE(x) ((x) + hyperion_base)

namespace Offsets
{
    inline constexpr const char* LiveChannel = "version-a182ba0d4c6f483b";

    namespace Hyperion
    {
        const uintptr_t BitMap = HYP_REBASE(0x14980d0);
        const uintptr_t ControlFlowGuard = HYP_REBASE(0x41cf10);

        inline constexpr uint8_t ByteShift = 15;
        inline constexpr uint8_t PageShift = 12;
        inline constexpr uint32_t PageSize = 0x1000;
        inline constexpr uint32_t PageMask = 0xfff;
        inline constexpr uint8_t BitMask = 7;
    } // namespace Hyperion

    namespace DataModel
    {
        inline constexpr uintptr_t Children = 0x78;
        const uintptr_t DataModelDeleterPointer = REBASE(0x79ec26);
        const uintptr_t FakeDataModelPointer = REBASE(0x78ff228);
        inline constexpr uintptr_t FakeDataModelToDataModel = 0x1d0;
        inline constexpr uintptr_t GameId = 0x198;
        inline constexpr uintptr_t GameLoaded = 0x638;
        inline constexpr uintptr_t Name = 0xb0;
        inline constexpr uintptr_t PlaceId = 0x198;
        inline constexpr uintptr_t ScriptContext = 0x440;
        inline constexpr uintptr_t VisualEngine = 0x10;
        const uintptr_t VisualEnginePointer = REBASE(0x5678b4);
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
        const uintptr_t GetCapabilities = REBASE(0x2fa7150);
        const uintptr_t GetIdentityStruct = REBASE(0x44a8160);
        const uintptr_t GetTlsPointer = REBASE(0x1c900f0);
        const uintptr_t Impersonator = REBASE(0x1c7e260);
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
        const uintptr_t HashTableLookup = REBASE(0x1c4c7f0);
        const uintptr_t KTable = REBASE(0x74eb068);
    } // namespace Property

    namespace Luau
    {
        const uintptr_t currfuncname = REBASE(0x1c64d30);
        const uintptr_t lua_exception = REBASE(0x44352e0);
        const uintptr_t lua_getfield = REBASE(0x44380b0);
        const uintptr_t lua_pushfstringL = REBASE(0x4432ff0);
        const uintptr_t lua_pushvfstring = REBASE(0x4433350);
        const uintptr_t lua_reallocstack = REBASE(0x4435b90);
        const uintptr_t lua_resetthread = REBASE(0x4439b80);
        const uintptr_t lua_xmove = REBASE(0x44376a0);
        const uintptr_t luaA_toobject = REBASE(0x44380b0);
        const uintptr_t luaB_assert = REBASE(0x4449ce0);
        const uintptr_t luaB_error = REBASE(0x44497a0);
        const uintptr_t luaB_gcinfo = REBASE(0x4449bd0);
        const uintptr_t luaB_getfenv = REBASE(0x4449930);
        const uintptr_t luaB_getmetatable = REBASE(0x4449810);
        const uintptr_t luaB_newproxy = REBASE(0x4449e30);
        const uintptr_t luaB_next = REBASE(0x4449c80);
        const uintptr_t luaB_pcall = REBASE(0x4432410);
        const uintptr_t luaB_pcallrun = REBASE(0x4432f00);
        const uintptr_t luaB_print = REBASE(0x4449580);
        const uintptr_t luaB_rawequal = REBASE(0x25387b0);
        const uintptr_t luaB_rawget = REBASE(0x4449ac0);
        const uintptr_t luaB_rawlen = REBASE(0x4449b70);
        const uintptr_t luaB_rawset = REBASE(0x4449b10);
        const uintptr_t luaB_setfenv = REBASE(0x1dabdf0);
        const uintptr_t luaB_setmetatable = REBASE(0x4449870);
        const uintptr_t luaB_tonumber = REBASE(0x4449660);
        const uintptr_t luaB_tostring = REBASE(0x4449e00);
        const uintptr_t luaB_type = REBASE(0x4449c00);
        const uintptr_t luaB_typeof = REBASE(0x4449c40);
        const uintptr_t luaC_step = REBASE(0x1dec8b0);
        const uintptr_t luaD_rawrunprotected = REBASE(0x4436840);
        const uintptr_t luaF_newlclosure = REBASE(0x4461880);
        const uintptr_t luaF_newproto = REBASE(0x4461930);
        const uintptr_t luaG_runerror = REBASE(0x1dc0980);
        const uintptr_t luaG_runerrorl = REBASE(0x443a7a0);
        const uintptr_t luaH_new = REBASE(0x445a390);
        const uintptr_t luaL_argerrorl = REBASE(0x1dc9b20);
        const uintptr_t luaL_checkstring = REBASE(0x44380b0);
        const uintptr_t luaL_checktype = REBASE(0x44376a0);
        const uintptr_t luaL_error = REBASE(0x44376a0);
        const uintptr_t luaL_findtable = REBASE(0x44376f0);
        const uintptr_t luaL_getmetafield = REBASE(0x44373c0);
        const uintptr_t luaL_register = REBASE(0x4437c90);
        const uintptr_t luaL_testudata = REBASE(0x4463200);
        const uintptr_t luaM_free = REBASE(0x4457f30);
        const uintptr_t luaM_freegco = REBASE(0x4458460);
        const uintptr_t luaM_visitgco = REBASE(0x4457dd0);
        const uintptr_t luaO_chunkid = REBASE(0x4467870);
        const uintptr_t luaopen_math = REBASE(0x4453810);
        const uintptr_t luaT_eventnames = REBASE(0x6688558);
        const uintptr_t luaT_init = REBASE(0x4458840);
        const uintptr_t luaT_objtypename = REBASE(0x44380b0);
        const uintptr_t luaT_objtypename = REBASE(0x4458920);
        const uintptr_t luaV_gettable = REBASE(0x4463500);
        const uintptr_t luaVM_load = REBASE(0xb47670);
        const uintptr_t pseudo2addr = REBASE(0x48b28b0);
    } // namespace Luau

    namespace Task
    {
        const uintptr_t cancel = REBASE(0x1dc89a0);
        const uintptr_t defer = REBASE(0x1dc8c80);
        const uintptr_t desynchronize = REBASE(0x1dc90b0);
        const uintptr_t spawn = REBASE(0x1dc9b80);
        const uintptr_t synchronize = REBASE(0x1dc9d00);
        const uintptr_t wait = REBASE(0x1dc9ef0);
    } // namespace Task

    namespace Coroutine
    {
        const uintptr_t close = REBASE(0x444a760);
        const uintptr_t create = REBASE(0x444a640);
    } // namespace Coroutine

    namespace Signals
    {
        const uintptr_t FireTouchInterest = REBASE(0x2970090);
    } // namespace Signals

    namespace IsParallel
    {
        const uintptr_t ActorRequired_Call = REBASE(0x1c823b6);
        const uintptr_t ActorRequired_Prop = REBASE(0x1c825b0);
        const uintptr_t Connection_Dc = REBASE(0x1c9d5c0);
        const uintptr_t Event_Connect = REBASE(0x1c9c460);
        const uintptr_t Event_ConnPar = REBASE(0x1c9c890);
        const uintptr_t Event_Once = REBASE(0x1ca0080);
        const uintptr_t EventAccess = REBASE(0x1c7ea87);
        const uintptr_t FilterDescendants = REBASE(0x1d0a2b0);
        const uintptr_t FunctionCall = REBASE(0x1c823b6);
        const uintptr_t Instance_FromExist = REBASE(0x1d42ee0);
        const uintptr_t LocalSafe_Call = REBASE(0x1c823b6);
        const uintptr_t LocalSafe_Write = REBASE(0x1c825b0);
        const uintptr_t PropRead = REBASE(0x1c7ea87);
        const uintptr_t PropWrite = REBASE(0x1c825b0);
        const uintptr_t ScriptConnect = REBASE(0x1c9c890);
    } // namespace IsParallel

    // misc
    const uintptr_t AtatachRobloxExtraSpace = REBASE(0x1cc3f90);
    const uintptr_t atomic = REBASE(0x443b1e0);
    const uintptr_t closestate = REBASE(0x44386c0);
    const uintptr_t EnableLoadModule = REBASE(0x1dab870);
    const uintptr_t GetContextObject = REBASE(0x489a240);
    const uintptr_t GetCurrentThreadId = REBASE(0x48836a0);
    const uintptr_t GetFFlag = REBASE(0x48ce2c0);
    const uintptr_t GetGlobalState = REBASE(0x512d100);
    const uintptr_t GetGlobalStateForInstance = REBASE(0x1d4c5b0);
    const uintptr_t markroot = REBASE(0x443c2a0);
    const uintptr_t OpcodeLookupTable = REBASE(0x32bbee0);
    const uintptr_t Print = REBASE(0x1dec8b0);
    const uintptr_t RobloxLogCrash = REBASE(0x489a240);
    const uintptr_t traversetable = REBASE(0x443cfe0);
    const uintptr_t WndProcessCheck = REBASE(0x74ce018);
} // namespace Offsets

namespace Structs
{
    inline constexpr uintptr_t L_global = 0x40;
} // namespace Structs
