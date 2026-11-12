// dumped by nick (@skiddingonthescene)
// date: 2026-11-10 13:02:14
// took 144.4s
// success rate: 88.3%

#include <cstdint>
#include <Windows.h>

static const uintptr_t roblox_base = reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr));
static const uintptr_t hyperion_base = reinterpret_cast<uintptr_t>(GetModuleHandleA("RobloxPlayerBeta.dll"));

#define REBASE(x) ((x) + roblox_base)
#define HREBASE(x) ((x) + hyperion_base)

namespace Offsets
{
    inline constexpr const char* LiveChannel = "0.747.0.7471481";
    inline constexpr const char* LiveHash = "version-4ea8e85481e34f46";

    namespace Hyperion
    {
        enum cfg {
            static constexpr uintptr_t address = HREBASE(0x583290);
            static constexpr uintptr_t bitmap = HREBASE(0x118dad8);
            static constexpr uintptr_t fallback = HREBASE(0x583210);
            static constexpr uintptr_t handler = HREBASE(0x3bfd70);

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
        inline constexpr uintptr_t RequireBypass = 0xc30;
        inline constexpr uintptr_t ToResume = 0xa28;
        const uintptr_t Resume = REBASE(0x4379900);
        const uintptr_t ResumeParallelWaitingScripts = REBASE(0x43fb520);
        const uintptr_t TaskQueue = REBASE(0x44474a0);
        const uintptr_t whjs_step = REBASE(0x43b00a0);
    } // namespace ScriptContext

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
        const uintptr_t GetCapabilities = REBASE(0x1d18c30);
        const uintptr_t GetLuaStateForInstance = REBASE(0x148e350);
        const uintptr_t GetTssSlot = REBASE(0xc700);
        const uintptr_t IdentityPtr = REBASE(0x862ac48);
        const uintptr_t rbxSpawn = REBASE(0x4381b40);
    } // namespace RobloxThread

    namespace BasePart
    {
        inline constexpr uintptr_t Primitive = 0x178;
        inline constexpr uintptr_t Overlap = 0x200;
    } // namespace BasePart

    namespace Instance
    {
        inline constexpr uintptr_t BucketIndices = 0x10;
        inline constexpr uintptr_t BucketMask = 0x38;
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        inline constexpr uintptr_t HashLookup = 0xac;
        inline constexpr uintptr_t PropertyTable = 0x18;
        const uintptr_t GetModuleFromVMStateMap = REBASE(0x4389ca0);
        const uintptr_t GetValues = REBASE(0x4227fe0);
        const uintptr_t SetParent = REBASE(0x1d277e0);
        const uintptr_t WaitForChild = REBASE(0x14b2220);
    } // namespace Instance

    namespace RbxTransport
    {
        const uintptr_t Decrypt = REBASE(0x2268ef0);
        const uintptr_t Encrypt = REBASE(0x2268be0);
        const uintptr_t FailureFallback = REBASE(0x8274a50);
        const uintptr_t Use = REBASE(0x825c600);
        namespace App
        {
            const uintptr_t Destructor = REBASE(0x2187c80);
            const uintptr_t RTTI = REBASE(0x78c98e0);
            const uintptr_t Receive = REBASE(0x2182840);
            const uintptr_t ReceiveMaxBytes = REBASE(0x2183180);
            const uintptr_t Send = REBASE(0x21824d0);
            const uintptr_t VTable = REBASE(0x7193940);
        } // namespace App

        namespace Client
        {
            const uintptr_t ChannelConfig = REBASE(0x3b526e0);
            const uintptr_t Destructor = REBASE(0x3b528e0);
            const uintptr_t RTTI = REBASE(0x7940758);
            const uintptr_t Receive = REBASE(0x3b42ae0);
            const uintptr_t Send = REBASE(0x3b52a00);
            const uintptr_t VTable = REBASE(0x7206440);
        } // namespace Client

        namespace Stream
        {
            const uintptr_t Create = REBASE(0x5459d50);
            const uintptr_t Destroy = REBASE(0x214a680);
        } // namespace Stream

    } // namespace RbxTransport

    namespace Raknet
    {
        const uintptr_t HandleConnectionState = REBASE(0x4a0c8c0);
        const uintptr_t ProcessNetworkPacket = REBASE(0x28a3140);
        const uintptr_t Receive = REBASE(0x28ba830);
        const uintptr_t RecvFromLoop = REBASE(0x28a3cd0);
        const uintptr_t ReportNetworkError = REBASE(0x4a09b00);
        const uintptr_t Send = REBASE(0x2896c80);
        const uintptr_t UpdateNetworkLoop = REBASE(0x28885a0);
        const uintptr_t convertItemEnumToString = REBASE(0x496d630);
        namespace RakPeer
        {
            const uintptr_t OnOpenConnectionReply1 = REBASE(0x28a5df0);
            const uintptr_t Receive = REBASE(0x288e180);
            const uintptr_t SendPacketsToSelf = REBASE(0x288c670);
            const uintptr_t VTable = REBASE(0x71a0638);
            const uintptr_t setServerMachineAddress = REBASE(0x28abef0);
        } // namespace RakPeer

    } // namespace Raknet

    namespace FFlags
    {
        const uintptr_t BooleanType = REBASE(0x7297cd0);
        const uintptr_t BooleanValueType = REBASE(0x7298130);
        const uintptr_t FFlagPointer = REBASE(0x82216b0);
        const uintptr_t GetFFlag = REBASE(0x4b69fb0);
        const uintptr_t IntegerType = REBASE(0x7298248);
        const uintptr_t IntegerValueType = REBASE(0x7298018);
        const uintptr_t SetFFlag = REBASE(0x4b694b0);
    } // namespace FFlags

    namespace vft
    {
        const uintptr_t vftFuncScriptSlot0 = REBASE(0x7268e28);
        const uintptr_t vftFuncScriptSlot1 = REBASE(0x7268ee0);
        const uintptr_t vftMessageScriptSlot = REBASE(0x7268c90);
        const uintptr_t vftNetworkStream = REBASE(0x71883b0);
        const uintptr_t vftWaitScriptSlot = REBASE(0x7268ba8);
    } // namespace vft

    namespace Luau
    {
        const uintptr_t ClientOnRecieve = REBASE(0x490b000);
        const uintptr_t call_binTM = REBASE(0x26888e0);
        const uintptr_t currfuncname = REBASE(0x2672fa0);
        const uintptr_t dumpgco = REBASE(0x26a5300);
        const uintptr_t f_luaopen = REBASE(0x2670a90);
        const uintptr_t freeblock = REBASE(0x26c37f0);
        const uintptr_t freechunk = REBASE(0x26c32a0);
        const uintptr_t getfunc = REBASE(0x43831b0);
        const uintptr_t index2addr = REBASE(0x2664200);
        const uintptr_t loadsafe = REBASE(0x2691bd0);
        const uintptr_t luaVM_load = REBASE(0x42c8020);
        const uintptr_t luaB_assert = REBASE(0x5aae900);
        const uintptr_t luaB_error = REBASE(0x5aa9350);
        const uintptr_t luaB_gcinfo = REBASE(0x5aac780);
        const uintptr_t luaB_getfenv = REBASE(0x5aaae00);
        const uintptr_t luaB_getmetatable = REBASE(0x5aaa290);
        const uintptr_t luaB_newproxy = REBASE(0x5aaf4f0);
        const uintptr_t luaB_next = REBASE(0x5aade60);
        const uintptr_t luaB_print = REBASE(0x5aa8f00);
        const uintptr_t luaB_rawequal = REBASE(0x5aab0f0);
        const uintptr_t luaB_rawget = REBASE(0x5aab200);
        const uintptr_t luaB_rawlen = REBASE(0x5aac6e0);
        const uintptr_t luaB_rawset = REBASE(0x5aabb70);
        const uintptr_t luaB_select = REBASE(0x5aae9b0);
        const uintptr_t luaB_setfenv = REBASE(0x5aaaec0);
        const uintptr_t luaB_setmetatable = REBASE(0x5aaa420);
        const uintptr_t luaB_tonumber = REBASE(0x5aa8fc0);
        const uintptr_t luaB_tostring = REBASE(0x5aaf490);
        const uintptr_t luaB_type = REBASE(0x5aac7a0);
        const uintptr_t luaB_typeof = REBASE(0x5aad300);
        const uintptr_t luaD_growstack = REBASE(0x2664720);
        const uintptr_t luaD_preparefinalize = REBASE(0x266bf80);
        const uintptr_t luaD_rawrunprotected = REBASE(0x266a440);
        const uintptr_t luaD_reallocstack = REBASE(0x26643b0);
        const uintptr_t luaD_runfinalizers = REBASE(0x266c010);
        const uintptr_t luaD_throw = REBASE(0x266a470);
        const uintptr_t luaF_freeproto = REBASE(0x26a2fc0);
        const uintptr_t luaF_newproto = REBASE(0x26a2000);
        const uintptr_t luaG_aritherror = REBASE(0x26a09b0);
        const uintptr_t luaG_concaterror = REBASE(0x26a0960);
        const uintptr_t luaG_indexerror = REBASE(0x26a0ad0);
        const uintptr_t luaG_methoderror = REBASE(0x26a0bd0);
        const uintptr_t luaG_missingmembererror = REBASE(0x26a0b60);
        const uintptr_t luaG_ordererror = REBASE(0x26a0a50);
        const uintptr_t luaG_pusherror = REBASE(0x26a0c40);
        const uintptr_t luaG_readonlyerror = REBASE(0x26a0c10);
        const uintptr_t luaG_runerrorL = REBASE(0x26a17a0);
        const uintptr_t luaG_typeerrorL = REBASE(0x26a08e0);
        const uintptr_t luaH_clone = REBASE(0x269d780);
        const uintptr_t luaH_dummynode = REBASE(0x69767a8);
        const uintptr_t luaL_addlstring = REBASE(0x267e330);
        const uintptr_t luaL_addvalue = REBASE(0x267e390);
        const uintptr_t luaL_error = REBASE(0x2674070);
        const uintptr_t luaL_prepbuffsize = REBASE(0x267df50);
        const uintptr_t luaL_requiref = REBASE(0x26789b0);
        const uintptr_t luaL_tolstring = REBASE(0x267fc10);
        const uintptr_t luaL_typeerrorL = REBASE(0x26730a0);
        const uintptr_t luaL_typename = REBASE(0x267d470);
        const uintptr_t luaM_freearray = REBASE(0x26c3350);
        const uintptr_t luaM_toobig = REBASE(0x26c3270);
        const uintptr_t luaO_nilobject = REBASE(0x69919c8);
        const uintptr_t luaR_defaultcreateobject = REBASE(0x26ca640);
        const uintptr_t luaT_eventname = REBASE(0x6991a50);
        const uintptr_t luaT_objtypename = REBASE(0x26a4830);
        const uintptr_t luaT_typenames = REBASE(0x69919e0);
        const uintptr_t luaV_doarithimpl_TM_ADD = REBASE(0x268b030);
        const uintptr_t luaV_doarithimpl_TM_DIV = REBASE(0x268b670);
        const uintptr_t luaV_doarithimpl_TM_IDIV = REBASE(0x268b8f0);
        const uintptr_t luaV_doarithimpl_TM_MOD = REBASE(0x268bbf0);
        const uintptr_t luaV_doarithimpl_TM_MUL = REBASE(0x268b3f0);
        const uintptr_t luaV_doarithimpl_TM_POW = REBASE(0x268bda0);
        const uintptr_t luaV_doarithimpl_TM_SUB = REBASE(0x268b210);
        const uintptr_t luaV_doarithimpl_TM_UNM = REBASE(0x268bf50);
        const uintptr_t luaV_gettable = REBASE(0x2685a40);
        const uintptr_t luaV_prepareFORN = REBASE(0x268a6f0);
        const uintptr_t luaV_settable = REBASE(0x2687470);
        const uintptr_t luaV_tonumber = REBASE(0x269f550);
        const uintptr_t luaV_tostring = REBASE(0x26827c0);
        const uintptr_t lua_createtable = REBASE(0x14b1640);
        const uintptr_t luaL_getmetafield = REBASE(0x2676b50);
        const uintptr_t lua_exception = REBASE(0x266a2e0);
        const uintptr_t lua_pushthread = REBASE(0x26642e0);
        const uintptr_t lua_setthreadfinalizer = REBASE(0x2667f00);
        const uintptr_t luau_execute = REBASE(0x26a91b0);
        const uintptr_t luau_execute_false = REBASE(0x26a99b0);
        const uintptr_t luau_execute_true = REBASE(0x26b6520);
        const uintptr_t newclasspage = REBASE(0x26c41a0);
        const uintptr_t lua_newstate = REBASE(0x2672aa0);
        const uintptr_t newpage = REBASE(0x26c3910);
        const uintptr_t printf = REBASE(0x1cd77f0);
        const uintptr_t pushfstring_nocheck = REBASE(0x2673020);
        const uintptr_t raiseerror = REBASE(0x4b52950);
        const uintptr_t tag_error = REBASE(0x2673190);
    } // namespace Luau

    namespace Task
    {
        const uintptr_t cancel = REBASE(0x43bbaa0);
        const uintptr_t defer = REBASE(0x43baad0);
        const uintptr_t spawn = REBASE(0x43bafb0);
        const uintptr_t wait = REBASE(0x43bb7c0);
    } // namespace Task

    namespace Actor
    {
        inline constexpr uintptr_t ParallelFlag = 0x55d;
        inline constexpr uintptr_t Parent = 0x60;
        inline constexpr uintptr_t WriteLock = 0x700;
        const uintptr_t desynchronize = REBASE(0x43b9d90);
        const uintptr_t synchronize = REBASE(0x43b9810);
    } // namespace Actor

    namespace Signals
    {
        const uintptr_t FireAllClients = REBASE(0x34e04e0);
        const uintptr_t FireLeftMouseClick = REBASE(0x3cc86d0);
        const uintptr_t FireMouseClick = REBASE(0x3cc8870);
        const uintptr_t FireProximityPrompt = REBASE(0x312a6f0);
        const uintptr_t FireServer = REBASE(0x34e0140);
        const uintptr_t FireTouchInterest = REBASE(0x14d0000);
        const uintptr_t InvokeClient = REBASE(0x35b9c80);
        const uintptr_t InvokeServer = REBASE(0x35bd7a0);
        const uintptr_t IsLegalSendEvent = REBASE(0x4a80920);
        const uintptr_t TouchInterest = REBASE(0xb20340);
    } // namespace Signals

    namespace coroutine
    {
        const uintptr_t create = REBASE(0x5addf70);
        const uintptr_t running = REBASE(0x5ade830);
        const uintptr_t status = REBASE(0x5adbaa0);
        const uintptr_t wrap = REBASE(0x5ade510);
        const uintptr_t yield = REBASE(0x5ade7d0);
        const uintptr_t isyieldable = REBASE(0x5ade8a0);
        const uintptr_t finally = REBASE(0x5ae10b0);
    } // namespace coroutine

    namespace bit32
    {
        const uintptr_t arshift = REBASE(0x5ae5280);
        const uintptr_t band = REBASE(0x5ae4cf0);
        const uintptr_t bnot = REBASE(0x5ae4fa0);
        const uintptr_t bor = REBASE(0x5ae4da0);
        const uintptr_t bxor = REBASE(0x5ae4ea0);
        const uintptr_t btest = REBASE(0x5ae4d20);
        const uintptr_t extract = REBASE(0x5ae5640);
        const uintptr_t lrotate = REBASE(0x5ae5470);
        const uintptr_t lshift = REBASE(0x5ae5030);
        const uintptr_t replace = REBASE(0x5ae5700);
        const uintptr_t rrotate = REBASE(0x5ae54f0);
        const uintptr_t rshift = REBASE(0x5ae5150);
        const uintptr_t countlz = REBASE(0x5ae5840);
        const uintptr_t countrz = REBASE(0x5ae5990);
        const uintptr_t byteswap = REBASE(0x5ae5ae0);
    } // namespace bit32

    namespace table
    {
        const uintptr_t concat = REBASE(0x26cf060);
        const uintptr_t foreach = REBASE(0x26cb930);
        const uintptr_t foreachi = REBASE(0x26cac00);
        const uintptr_t getn = REBASE(0x26ccd30);
        const uintptr_t maxn = REBASE(0x26cca70);
        const uintptr_t insert = REBASE(0x26cdf10);
        const uintptr_t remove = REBASE(0x26ce110);
        const uintptr_t sort = REBASE(0x26d1650);
        const uintptr_t pack = REBASE(0x26cf380);
        const uintptr_t unpack = REBASE(0x26cffe0);
        const uintptr_t move = REBASE(0x26ce480);
        const uintptr_t create = REBASE(0x26d17d0);
        const uintptr_t find = REBASE(0x26d1fb0);
        const uintptr_t clear = REBASE(0x26d2640);
        const uintptr_t freeze = REBASE(0x26d2690);
        const uintptr_t isfrozen = REBASE(0x26d27e0);
    } // namespace table

    namespace utf8
    {
        const uintptr_t offset = REBASE(0x5ab6210);
        const uintptr_t codepoint = REBASE(0x5ab5170);
        const uintptr_t char = REBASE(0x5ab5510);
        const uintptr_t len = REBASE(0x5ab4e90);
        const uintptr_t codes = REBASE(0x5ab6760);
    } // namespace utf8

    namespace buffer
    {
        const uintptr_t create = REBASE(0x5ad58b0);
        const uintptr_t fromstring = REBASE(0x5ad5960);
        const uintptr_t tostring = REBASE(0x5ad5a30);
        const uintptr_t readi8 = REBASE(0x5ad7f00);
        const uintptr_t readu8 = REBASE(0x5ad8060);
        const uintptr_t readi16 = REBASE(0x5ad81c0);
        const uintptr_t readu16 = REBASE(0x5ad8320);
        const uintptr_t readi32 = REBASE(0x5ad8480);
        const uintptr_t readu32 = REBASE(0x5ad85e0);
        const uintptr_t readf32 = REBASE(0x5ad8740);
        const uintptr_t readf64 = REBASE(0x5ad88b0);
        const uintptr_t writei8 = REBASE(0x5ad8a10);
        const uintptr_t writeu8 = REBASE(0x5ad8a10);
        const uintptr_t writei16 = REBASE(0x5ad8b90);
        const uintptr_t writeu16 = REBASE(0x5ad8b90);
        const uintptr_t writei32 = REBASE(0x5ad8d10);
        const uintptr_t writeu32 = REBASE(0x5ad8d10);
        const uintptr_t writef32 = REBASE(0x5ad8e90);
        const uintptr_t writef64 = REBASE(0x5ad9020);
        const uintptr_t readstring = REBASE(0x5ad64c0);
        const uintptr_t writestring = REBASE(0x5ad70e0);
        const uintptr_t len = REBASE(0x5ad7380);
        const uintptr_t copy = REBASE(0x5ad7430);
        const uintptr_t fill = REBASE(0x5ad7720);
        const uintptr_t readbits = REBASE(0x5ad7970);
        const uintptr_t writebits = REBASE(0x5ad7bb0);
    } // namespace buffer

    namespace os
    {
        const uintptr_t clock = REBASE(0x5ab7e70);
        const uintptr_t date = REBASE(0x5aba780);
        const uintptr_t difftime = REBASE(0x5abb190);
        const uintptr_t time = REBASE(0x5abae90);
    } // namespace os

    namespace string
    {
        const uintptr_t byte = REBASE(0x5abd610);
        const uintptr_t char = REBASE(0x5abd8a0);
        const uintptr_t find = REBASE(0x5abff30);
        const uintptr_t format = REBASE(0x5ac2800);
        const uintptr_t gmatch = REBASE(0x5ac0320);
        const uintptr_t gsub = REBASE(0x5ac1e30);
        const uintptr_t len = REBASE(0x5abb340);
        const uintptr_t lower = REBASE(0x5abc960);
        const uintptr_t match = REBASE(0x5abff40);
        const uintptr_t rep = REBASE(0x5abcc00);
        const uintptr_t reverse = REBASE(0x5abc810);
        const uintptr_t sub = REBASE(0x5abb3f0);
        const uintptr_t upper = REBASE(0x5abcab0);
        const uintptr_t split = REBASE(0x5ac2d90);
        const uintptr_t pack = REBASE(0x5ac7810);
        const uintptr_t packsize = REBASE(0x5ac8180);
        const uintptr_t unpack = REBASE(0x5ac84f0);
    } // namespace string

    namespace vector
    {
        const uintptr_t create = REBASE(0x5acbf70);
        const uintptr_t magnitude = REBASE(0x5acc120);
        const uintptr_t normalize = REBASE(0x5acc210);
        const uintptr_t cross = REBASE(0x5acc2f0);
        const uintptr_t dot = REBASE(0x5acc3c0);
        const uintptr_t angle = REBASE(0x5acc4c0);
        const uintptr_t floor = REBASE(0x5acc750);
        const uintptr_t ceil = REBASE(0x5acc7f0);
        const uintptr_t abs = REBASE(0x5acc890);
        const uintptr_t sign = REBASE(0x5acc900);
        const uintptr_t clamp = REBASE(0x5acc9c0);
        const uintptr_t max = REBASE(0x5accc50);
        const uintptr_t min = REBASE(0x5accb30);
        const uintptr_t lerp = REBASE(0x5accf00);
    } // namespace vector

    namespace debug
    {
        const uintptr_t info = REBASE(0x5ad96d0);
        const uintptr_t traceback = REBASE(0x5adb8b0);
    } // namespace debug

    const uintptr_t OpcodeLookupTable = REBASE(0x7419400);
    const uintptr_t FLogHookPtr = REBASE(0x8658d48);
    const uintptr_t CrashPadPtr = REBASE(0x8621ee8);
    const uintptr_t CrashPtr = REBASE(0x8660068);
    const uintptr_t RobloxLogCrash = REBASE(0x4b4f960);
    const uintptr_t ConnectionDisconnect = REBASE(0x4297720);
    const uintptr_t CastArgs = REBASE(0x422a710);
} // namespace Offsets
