// dumped by nick (@skiddingonthescene)
// date: 2026-11-09 21:19:08
// took 145.5s
// success rate: 90.0%

#include <cstdint>
#include <Windows.h>

static const uintptr_t roblox_base = reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr));
static const uintptr_t hyperion_base = reinterpret_cast<uintptr_t>(GetModuleHandleA("RobloxPlayerBeta.dll"));

#define REBASE(x) ((x) + roblox_base)
#define HREBASE(x) ((x) + hyperion_base)

namespace Offsets
{
    inline constexpr const char* LiveChannel = "0.746.0.7461267";
    inline constexpr const char* LiveHash = "version-f0ea5da9412f4e35";

    namespace Hyperion
    {
        enum cfg {
            static constexpr uintptr_t address = HREBASE(0x4c9360);
            static constexpr uintptr_t bitmap = HREBASE(0xec2998);
            static constexpr uintptr_t fallback = HREBASE(0x4c92e0);
            static constexpr uintptr_t handler = HREBASE(0x3dcc90);

            enum Offsets {
                ByteShift = 15, // 0xf
                PageShift = 12, // 0xc
                BitMask = 7, // 0x7
                PageSize = 0x1000, // 4096
                PageMask = 0xfff // 4095
            };
        };
    } // namespace Hyperion

    namespace ScriptContext
    {
        inline constexpr uintptr_t IsRobloxScript = 0x150;
        inline constexpr uintptr_t RequireBypass = 0xb71;
        inline constexpr uintptr_t ToResume = 0xa28;
        const uintptr_t Resume = REBASE(0x431b1f0);
        const uintptr_t ResumeParallelWaitingScripts = REBASE(0x439a8e0);
        const uintptr_t TaskQueue = REBASE(0x43e5ff0);
        const uintptr_t whjs_step = REBASE(0x4351c40);
    } // namespace ScriptContext

    namespace BasePart
    {
        inline constexpr uintptr_t Overlap = 0x200;
        inline constexpr uintptr_t Primitive = 0x178;
    } // namespace BasePart

    namespace Connection
    {
        inline constexpr uintptr_t enabled = 0x20;
        inline constexpr uintptr_t next = 0x10;
        inline constexpr uintptr_t slot_wrapper = 0x30;
        inline constexpr uintptr_t slot_wrapper_self = 0x38;
    } // namespace Connection

    namespace Signal
    {
        inline constexpr uintptr_t slot = 0x30;
        inline constexpr uintptr_t slot_wrapper = 0x38;
        namespace Slot
        {
            inline constexpr uintptr_t isOnce = 0x95;
            inline constexpr uintptr_t refs = 0x70;
            namespace Refs
            {
                inline constexpr uintptr_t funcRefId = 0x14;
                inline constexpr uintptr_t luaThread = 0x8;
                inline constexpr uintptr_t luaThreadRefId = 0x10;
            } // namespace Refs

            namespace Wait
            {
                inline constexpr uintptr_t checkPtr = 0x10;
                inline constexpr uintptr_t connRefs = 0x38;
                inline constexpr uintptr_t connRefs2 = 0x40;
                inline constexpr uintptr_t connRefs3 = 0x50;
                inline constexpr uintptr_t threadRef = 0x20;
                inline constexpr uintptr_t threadRefcon = 0x18;
                inline constexpr uintptr_t threadRefcon2 = 0x8;
                inline constexpr uintptr_t threadRefcon3 = 0x10;
            } // namespace Wait

            namespace Wrapper
            {
                inline constexpr uintptr_t Ptr = 0x10;
                inline constexpr uintptr_t funcid = 0x30;
                inline constexpr uintptr_t secPtr = 0x18;
                inline constexpr uintptr_t thirdPtr = 0x38;
                inline constexpr uintptr_t thread = 0x28;
                inline constexpr uintptr_t weak_obj_ref = 0x90;
            } // namespace Wrapper

        } // namespace Slot

    } // namespace Signal

    namespace Scripts
    {
        inline constexpr uintptr_t LocalBytecode = 0x178;
        inline constexpr uintptr_t ModuleBytecode = 0x120;
    } // namespace Scripts

    namespace Bytecode
    {
        inline constexpr uintptr_t Pointer = 0x10;
        inline constexpr uintptr_t Size = 0x20;
    } // namespace Bytecode

    namespace Threads
    {
        inline constexpr uintptr_t weak_thread_live = 0x20;
        inline constexpr uintptr_t weak_thread_live_thread = 0x8;
        inline constexpr uintptr_t weak_thread_node = 0x180;
        inline constexpr uintptr_t weak_thread_ref = 0x8;
    } // namespace Threads

    namespace RobloxThread
    {
        inline constexpr uintptr_t Capabilities = 0x30;
        const uintptr_t GetCapabilities = REBASE(0x1cea140);
        const uintptr_t GetLuaStateForInstance = REBASE(0x4274c30);
        const uintptr_t GetTssSlot = REBASE(0xc700);
        const uintptr_t IdentityPtr = REBASE(0x855cf68);
        const uintptr_t rbxSpawn = REBASE(0x43231f0);
    } // namespace RobloxThread

    namespace Instance
    {
        inline constexpr uintptr_t BucketIndices = 0x10;
        inline constexpr uintptr_t BucketMask = 0x38;
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        inline constexpr uintptr_t HashLookup = 0xac;
        inline constexpr uintptr_t PropertyTable = 0x18;
        const uintptr_t GetModuleFromVMStateMap = REBASE(0x432b2e0);
        const uintptr_t GetValues = REBASE(0x41c90a0);
        const uintptr_t SetParent = REBASE(0x1cf8cf0);
        const uintptr_t WaitForChild = REBASE(0x14985f0);
    } // namespace Instance

    namespace RbxTransport
    {
        const uintptr_t Decrypt = REBASE(0x22379e0);
        const uintptr_t Encrypt = REBASE(0x22376d0);
        const uintptr_t FailureFallback = REBASE(0x81a1ec8);
        const uintptr_t Use = REBASE(0x8189a60);
        namespace App
        {
            const uintptr_t Destructor = REBASE(0x2159630);
            const uintptr_t RTTI = REBASE(0x7804fd0);
            const uintptr_t Receive = REBASE(0x21542b0);
            const uintptr_t ReceiveMaxBytes = REBASE(0x2154b60);
            const uintptr_t Send = REBASE(0x2153f40);
            const uintptr_t VTable = REBASE(0x70db908);
        } // namespace App

        namespace Client
        {
            const uintptr_t ChannelConfig = REBASE(0x3b02650);
            const uintptr_t Destructor = REBASE(0x3b02850);
            const uintptr_t RTTI = REBASE(0x787b300);
            const uintptr_t Receive = REBASE(0x3b03080);
            const uintptr_t Send = REBASE(0x3b02970);
            const uintptr_t VTable = REBASE(0x714d5b0);
        } // namespace Client

        namespace Stream
        {
            const uintptr_t Create = REBASE(0x53e7e60);
            const uintptr_t Destroy = REBASE(0x211d570);
        } // namespace Stream

    } // namespace RbxTransport

    namespace Raknet
    {
        const uintptr_t HandleConnectionState = REBASE(0x49b94c0);
        const uintptr_t ProcessNetworkPacket = REBASE(0x287fa90);
        const uintptr_t Receive = REBASE(0x2897490);
        const uintptr_t RecvFromLoop = REBASE(0x2880620);
        const uintptr_t ReportNetworkError = REBASE(0x49b6700);
        const uintptr_t Send = REBASE(0x28735c0);
        const uintptr_t UpdateNetworkLoop = REBASE(0x2864e70);
        const uintptr_t convertItemEnumToString = REBASE(0x491ec20);
        namespace RakPeer
        {
            const uintptr_t OnOpenConnectionReply1 = REBASE(0x2882ad0);
            const uintptr_t Receive = REBASE(0x286aa50);
            const uintptr_t SendPacketsToSelf = REBASE(0x2868f40);
            const uintptr_t VTable = REBASE(0x70e84b8);
            const uintptr_t setServerMachineAddress = REBASE(0x2888bd0);
        } // namespace RakPeer

    } // namespace Raknet

    namespace FFlags
    {
        const uintptr_t BooleanType = REBASE(0x71de5a8);
        const uintptr_t BooleanValueType = REBASE(0x71de7d8);
        const uintptr_t FFlagPointer = REBASE(0x814e6b0);
        const uintptr_t GetFFlag = REBASE(0x4b12b50);
        const uintptr_t IntegerType = REBASE(0x71de6c0);
        const uintptr_t IntegerValueType = REBASE(0x71de8f0);
        const uintptr_t SetFFlag = REBASE(0x4b12050);
    } // namespace FFlags

    namespace vft
    {
        const uintptr_t vftFuncScriptSlot0 = REBASE(0x71afdb8);
        const uintptr_t vftFuncScriptSlot1 = REBASE(0x71afeb0);
        const uintptr_t vftMessageScriptSlot = REBASE(0x71afc20);
        const uintptr_t vftNetworkStream = REBASE(0x70d0430);
        const uintptr_t vftWaitScriptSlot = REBASE(0x71afcf8);
    } // namespace vft

    namespace Luau
    {
        const uintptr_t ClientOnRecieve = REBASE(0x48ce190);
        const uintptr_t call_binTM = REBASE(0x2656210);
        const uintptr_t currfuncname = REBASE(0x263f5a0);
        const uintptr_t dumpgco = REBASE(0x2674ae0);
        const uintptr_t f_luaopen = REBASE(0x263cf30);
        const uintptr_t freeblock = REBASE(0x269fc70);
        const uintptr_t freechunk = REBASE(0x269f700);
        const uintptr_t getfunc = REBASE(0x2694ce0);
        const uintptr_t index2addr = REBASE(0x262fcd0);
        const uintptr_t loadsafe = REBASE(0x265f9d0);
        const uintptr_t luaB_assert = REBASE(0x2699220);
        const uintptr_t luaB_error = REBASE(0x2693a70);
        const uintptr_t luaB_gcinfo = REBASE(0x26970a0);
        const uintptr_t luaB_getfenv = REBASE(0x26954c0);
        const uintptr_t luaB_getmetatable = REBASE(0x2694980);
        const uintptr_t luaB_newproxy = REBASE(0x2699e00);
        const uintptr_t luaB_next = REBASE(0x2698770);
        const uintptr_t luaB_print = REBASE(0x2693620);
        const uintptr_t luaB_rawequal = REBASE(0x26957a0);
        const uintptr_t luaB_rawget = REBASE(0x26958b0);
        const uintptr_t luaB_rawlen = REBASE(0x2697000);
        const uintptr_t luaB_rawset = REBASE(0x2696340);
        const uintptr_t luaB_select = REBASE(0x26992d0);
        const uintptr_t luaB_setfenv = REBASE(0x2695580);
        const uintptr_t luaB_setmetatable = REBASE(0x2694b00);
        const uintptr_t luaB_tonumber = REBASE(0x26936e0);
        const uintptr_t luaB_tostring = REBASE(0x2699da0);
        const uintptr_t luaB_type = REBASE(0x26970c0);
        const uintptr_t luaB_typeof = REBASE(0x2697c20);
        const uintptr_t luaD_growstack = REBASE(0x26301f0);
        const uintptr_t luaD_preparefinalize = REBASE(0x26383e0);
        const uintptr_t luaD_rawrunprotected = REBASE(0x26360b0);
        const uintptr_t luaD_reallocstack = REBASE(0x262fe80);
        const uintptr_t luaD_runfinalizers = REBASE(0x2638470);
        const uintptr_t luaD_throw = REBASE(0x26360e0);
        const uintptr_t luaF_freeproto = REBASE(0x2672800);
        const uintptr_t luaF_newproto = REBASE(0x2671850);
        const uintptr_t luaG_aritherror = REBASE(0x2670250);
        const uintptr_t luaG_concaterror = REBASE(0x2670200);
        const uintptr_t luaG_forerrorL = REBASE(0x26701c0);
        const uintptr_t luaG_indexerror = REBASE(0x2670370);
        const uintptr_t luaG_methoderror = REBASE(0x2670470);
        const uintptr_t luaG_missingmembererror = REBASE(0x2670400);
        const uintptr_t luaG_ordererror = REBASE(0x26702f0);
        const uintptr_t luaG_pusherror = REBASE(0x26704e0);
        const uintptr_t luaG_readonlyerror = REBASE(0x26704b0);
        const uintptr_t luaG_runerrorL = REBASE(0x2671020);
        const uintptr_t luaG_typeerrorL = REBASE(0x2670180);
        const uintptr_t luaH_clone = REBASE(0x266c490);
        const uintptr_t luaH_dummynode = REBASE(0x68b9f58);
        const uintptr_t luaL_addlstring = REBASE(0x264ac40);
        const uintptr_t luaL_addvalue = REBASE(0x264aca0);
        const uintptr_t luaL_argcheck = REBASE(0x2643230);
        const uintptr_t luaL_error = REBASE(0x26406b0);
        const uintptr_t luaL_getmetafield = REBASE(0x2643230);
        const uintptr_t luaL_prepbuffsize = REBASE(0x264a860);
        const uintptr_t luaL_requiref = REBASE(0x26451b0);
        const uintptr_t luaL_tolstring = REBASE(0x264c5b0);
        const uintptr_t luaL_typeerrorL = REBASE(0x263f6a0);
        const uintptr_t luaL_typename = REBASE(0x2649d60);
        const uintptr_t luaM_free = REBASE(0x269f7c0);
        const uintptr_t luaM_toobig = REBASE(0x269f6d0);
        const uintptr_t luaO_nilobject = REBASE(0x68ba8e8);
        const uintptr_t luaO_pushfstring = REBASE(0x2631240);
        const uintptr_t luaR_defaultcreateobject = REBASE(0x26a6b40);
        const uintptr_t luaT_eventname = REBASE(0x68dc080);
        const uintptr_t luaT_objtypename = REBASE(0x2674030);
        const uintptr_t luaT_typenames = REBASE(0x68dc010);
        const uintptr_t luaV_doarithimpl_TM_ADD = REBASE(0x26588e0);
        const uintptr_t luaV_doarithimpl_TM_DIV = REBASE(0x2658f20);
        const uintptr_t luaV_doarithimpl_TM_IDIV = REBASE(0x26591a0);
        const uintptr_t luaV_doarithimpl_TM_MOD = REBASE(0x26594a0);
        const uintptr_t luaV_doarithimpl_TM_MUL = REBASE(0x2658ca0);
        const uintptr_t luaV_doarithimpl_TM_POW = REBASE(0x2659650);
        const uintptr_t luaV_doarithimpl_TM_SUB = REBASE(0x2658ac0);
        const uintptr_t luaV_doarithimpl_TM_UNM = REBASE(0x2659800);
        const uintptr_t luaV_gettable = REBASE(0x2652d90);
        const uintptr_t luaV_prepareFORN = REBASE(0x2657fb0);
        const uintptr_t luaV_settable = REBASE(0x2654b10);
        const uintptr_t luaV_tonumber = REBASE(0x266ee10);
        const uintptr_t luaV_tostring = REBASE(0x264faa0);
        const uintptr_t lua_createtable = REBASE(0x1497960);
        const uintptr_t lua_exception = REBASE(0x2635f50);
        const uintptr_t lua_pushfstringL = REBASE(0x2631240);
        const uintptr_t lua_pushthread = REBASE(0x2631310);
        const uintptr_t lua_resume = REBASE(0x5a66480);
        const uintptr_t lua_setfenv = REBASE(0x26314c0);
        const uintptr_t lua_setthreadfinalizer = REBASE(0x2633a80);
        const uintptr_t luau_execute = REBASE(0x26789e0);
        const uintptr_t luau_execute_false = REBASE(0x26862e0);
        const uintptr_t luau_execute_true = REBASE(0x26791e0);
        const uintptr_t newclasspage = REBASE(0x26a0640);
        const uintptr_t newpage = REBASE(0x269fdb0);
        const uintptr_t printf = REBASE(0x1ca9a30);
        const uintptr_t pushfstring_nocheck = REBASE(0x263f620);
        const uintptr_t raiseerror = REBASE(0x4afba30);
        const uintptr_t tag_error = REBASE(0x263f790);
    } // namespace Luau

    namespace Task
    {
        const uintptr_t cancel = REBASE(0x435d290);
        const uintptr_t defer = REBASE(0x435c440);
        const uintptr_t spawn = REBASE(0x435c920);
        const uintptr_t wait = REBASE(0x435cfb0);
    } // namespace Task

    namespace Actor
    {
        inline constexpr uintptr_t ParallelFlag = 0x53d;
        inline constexpr uintptr_t Parent = 0x60;
        inline constexpr uintptr_t WriteLock = 0x6d0;
        const uintptr_t desynchronize = REBASE(0x435b700);
        const uintptr_t synchronize = REBASE(0x435b180);
    } // namespace Actor

    namespace Signals
    {
        const uintptr_t FireAllClients = REBASE(0x34ab510);
        const uintptr_t FireServer = REBASE(0x34ab170);
        const uintptr_t FireTouchInterest = REBASE(0x2a33650);
        const uintptr_t FireLeftMouseClick = REBASE(0x3c6daf0);
        const uintptr_t FireRightMouseClick = REBASE(0x3c6dc90);
        const uintptr_t FireMouseHoverEnter = REBASE(0x3c6f060);
        const uintptr_t FireMouseHoverLeave = REBASE(0x3c6f200);
        const uintptr_t FireProximityPrompt = REBASE(0x30fd840);
        const uintptr_t InvokeClient = REBASE(0x35834c0);
        const uintptr_t InvokeServer = REBASE(0x3586ff0);
        const uintptr_t IsLegalSendEvent = REBASE(0x4a2ae10);
        const uintptr_t TouchInterest = REBASE(0xb15ef0);
    } // namespace Signals

    namespace coroutine
    {
        const uintptr_t create = REBASE(0x5a60fe0);
        const uintptr_t running = REBASE(0x5a618b0);
        const uintptr_t status = REBASE(0x5a5eb20);
        const uintptr_t wrap = REBASE(0x5a61580);
        const uintptr_t yield = REBASE(0x5a61850);
        const uintptr_t isyieldable = REBASE(0x5a61920);
        const uintptr_t finally = REBASE(0x5a640f0);
    } // namespace coroutine

    namespace table
    {
        const uintptr_t concat = REBASE(0x26aba60);
        const uintptr_t foreach = REBASE(0x26a7e30);
        const uintptr_t foreachi = REBASE(0x26a70f0);
        const uintptr_t getn = REBASE(0x26a9240);
        const uintptr_t maxn = REBASE(0x26a8f80);
        const uintptr_t insert = REBASE(0x26aa470);
        const uintptr_t remove = REBASE(0x26aa670);
        const uintptr_t sort = REBASE(0x26ae0a0);
        const uintptr_t pack = REBASE(0x26abd80);
        const uintptr_t unpack = REBASE(0x26aca40);
        const uintptr_t move = REBASE(0x26aa9e0);
        const uintptr_t create = REBASE(0x26ae220);
        const uintptr_t find = REBASE(0x26aead0);
        const uintptr_t clear = REBASE(0x26af160);
        const uintptr_t freeze = REBASE(0x26af1b0);
        const uintptr_t isfrozen = REBASE(0x26af300);
    } // namespace table

    namespace utf8
    {
        const uintptr_t offset = REBASE(0x5a394a0);
        const uintptr_t codepoint = REBASE(0x5a38410);
        const uintptr_t char = REBASE(0x5a387b0);
        const uintptr_t len = REBASE(0x5a38130);
        const uintptr_t codes = REBASE(0x5a399e0);
    } // namespace utf8

    namespace os
    {
        const uintptr_t clock = REBASE(0x5a3b0b0);
        const uintptr_t date = REBASE(0x5a3d9a0);
        const uintptr_t difftime = REBASE(0x5a3e410);
        const uintptr_t time = REBASE(0x5a3e110);
    } // namespace os

    namespace string
    {
        const uintptr_t byte = REBASE(0x5a40860);
        const uintptr_t char = REBASE(0x5a40af0);
        const uintptr_t find = REBASE(0x5a43170);
        const uintptr_t format = REBASE(0x5a45a30);
        const uintptr_t gmatch = REBASE(0x5a43540);
        const uintptr_t gsub = REBASE(0x5a45060);
        const uintptr_t len = REBASE(0x5a3e5c0);
        const uintptr_t lower = REBASE(0x5a3fbc0);
        const uintptr_t match = REBASE(0x5a43180);
        const uintptr_t rep = REBASE(0x5a3fe60);
        const uintptr_t reverse = REBASE(0x5a3fa80);
        const uintptr_t sub = REBASE(0x5a3e670);
        const uintptr_t upper = REBASE(0x5a3fd10);
        const uintptr_t split = REBASE(0x5a46060);
        const uintptr_t pack = REBASE(0x5a4aad0);
        const uintptr_t packsize = REBASE(0x5a4b430);
        const uintptr_t unpack = REBASE(0x5a4b7a0);
    } // namespace string

    namespace vector
    {
        const uintptr_t create = REBASE(0x5a4f270);
        const uintptr_t magnitude = REBASE(0x5a4f420);
        const uintptr_t normalize = REBASE(0x5a4f510);
        const uintptr_t cross = REBASE(0x5a4f5f0);
        const uintptr_t dot = REBASE(0x5a4f6c0);
        const uintptr_t angle = REBASE(0x5a4f7c0);
        const uintptr_t floor = REBASE(0x5a4fa50);
        const uintptr_t ceil = REBASE(0x5a4faf0);
        const uintptr_t abs = REBASE(0x5a4fb90);
        const uintptr_t sign = REBASE(0x5a4fc00);
        const uintptr_t clamp = REBASE(0x5a4fcc0);
        const uintptr_t max = REBASE(0x5a4ff50);
        const uintptr_t min = REBASE(0x5a4fe30);
        const uintptr_t lerp = REBASE(0x5a50200);
    } // namespace vector

    namespace debug
    {
        const uintptr_t info = REBASE(0x5a5c6e0);
        const uintptr_t traceback = REBASE(0x5a5e930);
    } // namespace debug

    const uintptr_t OpcodeLookupTable = REBASE(0x735b280);
    const uintptr_t OpcodeDecodeTable = REBASE(0x735b380);
    const uintptr_t FLogHookPtr = REBASE(0x858a928);
    const uintptr_t CrashPadPtr = REBASE(0x8554148);
    const uintptr_t CrashPtr = REBASE(0x85911d8);
    const uintptr_t WebSocketServiceEnableClientCreation = REBASE(0x74b6430);
    const uintptr_t LockViolationInstanceCrash = REBASE(0x753f820);
    const uintptr_t LockViolationScriptCrash = REBASE(0x74c1328);
    const uintptr_t LuaStepIntervalMsOverrideEnabled = REBASE(0x74c4e50);
    const uintptr_t WndProcessCheck = REBASE(0x7221128);
    const uintptr_t RobloxLogCrash = REBASE(0x4af8a40);
    const uintptr_t Register = REBASE(0x3e25900);
    const uintptr_t ConnectionDisconnect = REBASE(0x4239210);
    const uintptr_t CastArgs = REBASE(0x41cb820);
} // namespace Offsets
