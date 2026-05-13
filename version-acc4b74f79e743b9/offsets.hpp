// dumped by nick \\
// date: 2026-05-06 22:59:49 \\
// took 38.8s \\

#pragma once
#include <cstdint>
#include <Windows.h>

static const uintptr_t Roblox_BASE   = reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr));
static const uintptr_t Hyperion_Base = reinterpret_cast<uintptr_t>(GetModuleHandleA("RobloxPlayerBeta.dll"));

#define REBASE(x)     ((x) + Roblox_BASE)
#define HYP_REBASE(x) ((x) + Hyperion_Base)

namespace Offsets
{
    inline constexpr const char* LiveChannel = "version-acc4b74f79e743b9";

    namespace hyperion
    {
        const uintptr_t BitMap = HYP_REBASE(0x12730);
        const uintptr_t ControlFlowGuard = HYP_REBASE(0xe6cb30);

        inline constexpr uint8_t  ByteShift = 15;
        inline constexpr uint8_t  PageShift = 12;
        inline constexpr uint32_t PageSize  = 0x1000;
        inline constexpr uint32_t PageMask  = 0xfff;
        inline constexpr uint8_t  BitMask   = 7;
    } // namespace hyperion

    namespace DataModel
    {
        inline constexpr uintptr_t Children = 0x78;
        const uintptr_t DataModelDeleterPointer = REBASE(0x83b3bc);
        const uintptr_t FakeDataModelPointer = REBASE(0x7c1a148);
        inline constexpr uintptr_t FakeDataModelToDataModel = 0x1d0;
        inline constexpr uintptr_t GameId = 0x190;
        inline constexpr uintptr_t Name = 0xb0;
        inline constexpr uintptr_t ScriptContext = 0x3f0;
        inline constexpr uintptr_t VisualEngine = 0x10;
        const uintptr_t VisualEnginePointer = REBASE(0x5f2364);
    } // namespace DataModel

    namespace ScriptContext
    {
        inline constexpr uintptr_t Identity = 0x170;
        inline constexpr uintptr_t ScriptContextToResume = 0x7f0;
        inline constexpr uintptr_t Userdata = 0x1d0;
    } // namespace ScriptContext

    namespace RobloxThread
    {
        const uintptr_t GetCapabilities = REBASE(0x478ad90);
        const uintptr_t GetIdentityStruct = REBASE(0x1dc6140);
        const uintptr_t GetTlsPointer = REBASE(0x9060);
        const uintptr_t IdentityPtr_Pointer = REBASE(0x7661528);
        const uintptr_t Impersonator = REBASE(0x478ad90);
    } // namespace RobloxThread

    namespace Instance
    {
        const uintptr_t IsLegalSendEvent = REBASE(0xa6f750);
        const uintptr_t push = REBASE(0x1d43290);
        const uintptr_t push2 = REBASE(0x977960);
    } // namespace Instance

    namespace Property
    {
        const uintptr_t GetRobloxPropertyData = REBASE(0xc72e20);
        const uintptr_t HashTableLookup = REBASE(0x1c29920);
        const uintptr_t KTable_Pointer = REBASE(0x751a7b0);
    } // namespace Property

    namespace Luau
    {
        const uintptr_t auxgetinfo = REBASE(0x43a8290);
        const uintptr_t auxopen = REBASE(0x43ce630);
        const uintptr_t Bridge_registerClass = REBASE(0x1c3ea61);
        const uintptr_t close = REBASE(0x43d1b60);
        const uintptr_t close_state = REBASE(0x4397da0);
        const uintptr_t compress = REBASE(0x1c81750);
        const uintptr_t create = REBASE(0x43d1420);
        const uintptr_t currfuncname = REBASE(0x4399390);
        const uintptr_t error_code_check = REBASE(0x43b3950);
        const uintptr_t f_luaopen = REBASE(0x43a8f30);
        const uintptr_t FireProximityPrompt = REBASE(0x1ab5b0);
        const uintptr_t FireProximityPrompt = REBASE(0x2687980);
        const uintptr_t FireTouchInterest = REBASE(0x2a36ac0);
        const uintptr_t FireTouchInterest = REBASE(0x4788a30);
        const uintptr_t freeblock = REBASE(0x43efe60);
        const uintptr_t freeclasspage = REBASE(0x43efc80);
        const uintptr_t functionContainer = REBASE(0x1c81600);
        const uintptr_t get_capabilites = REBASE(0x4499160);
        const uintptr_t GetLuaState = REBASE(0x1c4c4d0);
        const uintptr_t GetProperty = REBASE(0x4789430);
        const uintptr_t getTaskScheduler = REBASE(0x1384f00);
        const uintptr_t IdentityPtr = REBASE(0x7ee1d28);
        const uintptr_t info = REBASE(0x43c21d0);
        const uintptr_t isyieldable = REBASE(0x43d1b30);
        const uintptr_t KTable = REBASE(0x7d9afb0);
        const uintptr_t loadLibraryProtected = REBASE(0x1d4cce0);
        const uintptr_t loadsafe = REBASE(0x43a8f40);
        const uintptr_t lua_newstate = REBASE(0x1015fe0);
        const uintptr_t lua_pcall = REBASE(0x4394320);
        const uintptr_t Lua_protect_metatable = REBASE(0x1d47b00);
        const uintptr_t lua_pushfstringL = REBASE(0x4392bd0);
        const uintptr_t lua_pushvfstring = REBASE(0x4392b60);
        const uintptr_t lua_rawcheckstack = REBASE(0x4392020);
        const uintptr_t lua_xmove = REBASE(0x4392340);
        const uintptr_t luaA_toobject = REBASE(0x4391bc0);
        const uintptr_t luaB_xpcallcont = REBASE(0x43cfd00);
        const uintptr_t luaC_step = REBASE(0x43a40c0);
        const uintptr_t luaD_growstack = REBASE(0x4391d00);
        const uintptr_t luaD_rawrunprotected = REBASE(0x4394210);
        const uintptr_t luaD_throw = REBASE(0x4394240);
        const uintptr_t luaF_freeproto = REBASE(0x43ff010);
        const uintptr_t luaF_newproto = REBASE(0x43ff020);
        const uintptr_t luaG_runerrorl = REBASE(0x43a5140);
        const uintptr_t luaH_dummynode = REBASE(0x7c79010);
        const uintptr_t luaL_checklstring = REBASE(0x439b230);
        const uintptr_t luaL_checktype = REBASE(0x4399580);
        const uintptr_t luaL_errorl = REBASE(0x48a9f00);
        const uintptr_t luaL_findtable = REBASE(0x48d1ee0);
        const uintptr_t luaL_getmetafield = REBASE(0x439b2e0);
        const uintptr_t luaL_newmetatable = REBASE(0x486e550);
        const uintptr_t luaL_pushresult = REBASE(0x439fdb0);
        const uintptr_t luaL_register = REBASE(0x2bbe120);
        const uintptr_t luaL_where = REBASE(0x43995b0);
        const uintptr_t luaM_free = REBASE(0x1c528e0);
        const uintptr_t luaM_freegco = REBASE(0x43effa0);
        const uintptr_t luaM_toobig = REBASE(0x43ef090);
        const uintptr_t luaM_toobig2 = REBASE(0x43ef090);
        const uintptr_t luaM_visitgco = REBASE(0x43f00c0);
        const uintptr_t luaO_chunkid = REBASE(0x4406da0);
        const uintptr_t luaO_nilobject = REBASE(0x6032ec0);
        const uintptr_t luaO_pushfstring = REBASE(0x4406d70);
        const uintptr_t luaO_pushvfstring = REBASE(0x4406670);
        const uintptr_t luaopen_base = REBASE(0x43ced00);
        const uintptr_t luaT_objtypename = REBASE(0x43ff2a0);
        const uintptr_t luaT_objtypenamestr = REBASE(0x43ff010);
        const uintptr_t Luau_Execute = REBASE(0x43ade90);
        const uintptr_t Luau_Execute_Alt = REBASE(0x43ad490);
        const uintptr_t luau_load = REBASE(0x4395a20);
        const uintptr_t luaV_getimport = REBASE(0x43a5940);
        const uintptr_t luaV_gettable = REBASE(0x43a5890);
        const uintptr_t luaV_settable = REBASE(0x43a5ad0);
        const uintptr_t LuaVMLoad = REBASE(0x1c82880);
        const uintptr_t newblock = REBASE(0x43efd10);
        const uintptr_t newclasspage = REBASE(0x43efc10);
        const uintptr_t newgcoblock = REBASE(0x43efdc0);
        const uintptr_t newpage = REBASE(0x1c41aa0);
        const uintptr_t newproxy = REBASE(0x43ce2c0);
        const uintptr_t OpCode = REBASE(0x646de30);
        const uintptr_t openState = REBASE(0x1d4cf90);
        const uintptr_t PhysicalPropertiesBridge_registerClass = REBASE(0x1ce1e00);
        const uintptr_t print = REBASE(0x88ebf0);
        const uintptr_t pseudo2addr = REBASE(0x4391b00);
        const uintptr_t pushInstance = REBASE(0x1d4006d);
        const uintptr_t RawScheduler = REBASE(0x7cf5400);
        const uintptr_t RawScheduler = REBASE(0x0);
        const uintptr_t readVarInt = REBASE(0xa1f1d0);
        const uintptr_t remapUserdataTypes = REBASE(0x43a5fd0);
        const uintptr_t RequestCode = REBASE(0x1c4c8d0);
        const uintptr_t resume = REBASE(0x1d7d720);
        const uintptr_t RobloxLogCrash = REBASE(0x4789430);
        const uintptr_t running = REBASE(0x43cee54);
        const uintptr_t SandBoxThread = REBASE(0x14f9cb);
        const uintptr_t startScript = REBASE(0x45223c0);
        const uintptr_t status = REBASE(0x43d0040);
        const uintptr_t std_runtime_error = REBASE(0x5ceacd);
        const uintptr_t tostring = REBASE(0x1d08af2);
        const uintptr_t traceback = REBASE(0x43a8490);
        const uintptr_t Vector2Bridge_registerClass = REBASE(0x1d12720);
        const uintptr_t Vector3Bridge_registerClass = REBASE(0x1d0ff00);
        const uintptr_t wrap = REBASE(0x43d18e0);
        const uintptr_t yield = REBASE(0x43d1a70);
    } // namespace Luau

    namespace Task
    {
        const uintptr_t defer = REBASE(0x1df9c40);
        const uintptr_t defer2 = REBASE(0x1588930);
        const uintptr_t desynchronize = REBASE(0x1df9050);
        const uintptr_t spawn = REBASE(0x1dfa0e0);
        const uintptr_t synchronize = REBASE(0x1df8b1e);
        const uintptr_t wait = REBASE(0x1dfa6d9);
    } // namespace Task

    namespace Signals
    {
        const uintptr_t FireMouseClick = REBASE(0x25f17e0);
        const uintptr_t FireMouseHoverEnter = REBASE(0x25f2d80);
        const uintptr_t FireMouseHoverLeave = REBASE(0x25f2f20);
        const uintptr_t FireRightMouseClick = REBASE(0x25f17e0);
    } // namespace Signals

    namespace IsParallel
    {
        const uintptr_t ActorRequired_Call = REBASE(0x1d3c030);
        const uintptr_t ActorRequired_Prop = REBASE(0x1d3bb60);
        const uintptr_t Connection_Dc = REBASE(0x1c6c840);
        const uintptr_t Event_Connect = REBASE(0x1c6b810);
        const uintptr_t Event_ConnPar = REBASE(0x1c6baa0);
        const uintptr_t Event_Once = REBASE(0x1c6be8e);
        const uintptr_t EventAccess = REBASE(0x1d47ee0);
        const uintptr_t FilterDescendants = REBASE(0x1cf6e60);
        const uintptr_t FunctionCall = REBASE(0x1d3c030);
        const uintptr_t Instance_FromExist = REBASE(0x1db1640);
        const uintptr_t LocalSafe_Call = REBASE(0x1d3c030);
        const uintptr_t LocalSafe_Write = REBASE(0x1d3bb60);
        const uintptr_t PropRead = REBASE(0x1d47ee0);
        const uintptr_t PropWrite = REBASE(0x1d3bb60);
        const uintptr_t ScriptConnect = REBASE(0x1c6baa0);
    } // namespace IsParallel

    namespace Raknet
    {
        const uintptr_t HandleConnectionState = REBASE(0x134a800);
        const uintptr_t ProcessNetworkPacket = REBASE(0x134a800);
        const uintptr_t ReportNetworkError = REBASE(0xa4fa10);
        const uintptr_t send = REBASE(0x3136030);
    } // namespace Raknet

    // misc
    const uintptr_t AppDataInfo = REBASE(0x7bed540);
    const uintptr_t CastArgs = REBASE(0x1c54a20);
    const uintptr_t ConnectionDisconnect = REBASE(0x47856d0);
    const uintptr_t CrashOnDataModelValidationFailure = REBASE(0x1e8c330);
    const uintptr_t DebugCheckRenderThreading = REBASE(0x87ce5b);
    const uintptr_t EnableLoadModule = REBASE(0x70dd300);
    const uintptr_t GetContextObject = REBASE(0x49c8fbfc);
    const uintptr_t GetContextObject2 = REBASE(0x1c88570);
    const uintptr_t GetCurrentThreadId = REBASE(0x4788a30);
    const uintptr_t GetCurrentThreadId2 = REBASE(0x46d5940);
    const uintptr_t GetFastFlag = REBASE(0x479a2f0);
    const uintptr_t GetFFlag = REBASE(0x4799730);
    const uintptr_t GetGlobalState = REBASE(0x4acc700);
    const uintptr_t GetGlobalStateForInstance = REBASE(0x1d4b3c0);
    const uintptr_t GetLuaStateForInstance = REBASE(0x1c4bad0);
    const uintptr_t LockViolationScriptCrash = REBASE(0x7599a88);
    const uintptr_t newclasspage2 = REBASE(0x43ef349);
    const uintptr_t newgcoblock2 = REBASE(0x1c4f87f);
    const uintptr_t newpage2 = REBASE(0x43a5ac8);
    const uintptr_t OpcodeLookupTable = REBASE(0x3483c9c);
    const uintptr_t PhysicsSenderMaxBandwidth = REBASE(0x78ad438);
    const uintptr_t Print = REBASE(0x1e21ad0);
    const uintptr_t Register = REBASE(0x2bbd720);
    const uintptr_t ScriptContextResume = REBASE(0x1d7cd20);
    const uintptr_t TaskSchedulerTargetFps = REBASE(0x78ad438);
    const uintptr_t WebSocketServiceEnableClientCreation = REBASE(0x440af5);
    const uintptr_t WndProcessCheck = REBASE(0x70b6a90);

} // namespace Offsets
