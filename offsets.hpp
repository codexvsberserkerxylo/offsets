// dumped by nick (@skiddingonthescene)
// date: 2026-11-17 14:31:58
// took 107.8s
// success rate: 90.0%

#include <cstdint>
#include <Windows.h>

static const uintptr_t roblox_base = reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr));
static const uintptr_t hyperion_base = reinterpret_cast<uintptr_t>(GetModuleHandleA("RobloxPlayerBeta.dll"));

#define REBASE(x) ((x) + roblox_base)
#define HREBASE(x) ((x) + hyperion_base)

namespace Offsets
{
    inline constexpr const char* LiveChannel = "0.748.0.7481526";
    inline constexpr const char* LiveHash = "version-2c6fd5e09aaf4cfa";

    namespace Hyperion
    {
        enum cfg {
            static constexpr uintptr_t address = HREBASE(0xce3990);
            static constexpr uintptr_t bitmap = HREBASE(0x4f1c8);
            static constexpr uintptr_t fallback = HREBASE(0xce3910);
            static constexpr uintptr_t handler = HREBASE(0xe11e60);

            struct offsets {
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
        inline constexpr uintptr_t IsRobloxScript = 0x130;
        inline constexpr uintptr_t RequireBypass = 0xbc4;
        inline constexpr uintptr_t ToResume = 0x9e8;
        const uintptr_t Resume = REBASE(0x41d21d0);
        const uintptr_t ResumeParallelWaitingScripts = REBASE(0x42523c0);
        const uintptr_t TaskQueue = REBASE(0x429c840);
        const uintptr_t whjs_step = REBASE(0x4207740);
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
        inline constexpr uintptr_t Pointer = 0x18;
        inline constexpr uintptr_t Size = 0x28;
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
        inline constexpr uintptr_t Capabilities = 0x28;
        const uintptr_t GetCapabilities = REBASE(0x1c31460);
        const uintptr_t GetLuaStateForInstance = REBASE(0x412f350);
        const uintptr_t GetTssSlot = REBASE(0xc700);
        const uintptr_t IdentityPtr = REBASE(0x84aed78);
        const uintptr_t rbxSpawn = REBASE(0x41dac20);
    } // namespace RobloxThread

    namespace Instance
    {
        inline constexpr uintptr_t BucketIndices = 0x10;
        inline constexpr uintptr_t BucketMask = 0x38;
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        inline constexpr uintptr_t HashLookup = 0xac;
        inline constexpr uintptr_t PropertyTable = 0x18;
        const uintptr_t GetModuleFromVMStateMap = REBASE(0x41e2020);
        const uintptr_t GetValues = REBASE(0x40879a0);
        const uintptr_t SetParent = REBASE(0x1c3e5c0);
        const uintptr_t WaitForChild = REBASE(0x13d0ca0);
    } // namespace Instance

    namespace RbxTransport
    {
        const uintptr_t Decrypt = REBASE(0x2154960);
        const uintptr_t Encrypt = REBASE(0x2154650);
        const uintptr_t FailureFallback = REBASE(0x8135ab8);
        namespace App
        {
            const uintptr_t Destructor = REBASE(0x2077560);
            const uintptr_t RTTI = REBASE(0x777fa58);
            const uintptr_t Receive = REBASE(0x2071eb0);
            const uintptr_t ReceiveMaxBytes = REBASE(0x20727f0);
            const uintptr_t Send = REBASE(0x2071b40);
            const uintptr_t VTable = REBASE(0x70420d0);
        } // namespace App

        namespace Client
        {
            const uintptr_t ChannelConfig = REBASE(0x39ce100);
            const uintptr_t Destructor = REBASE(0x39ce300);
            const uintptr_t RTTI = REBASE(0x77f7380);
            const uintptr_t Receive = REBASE(0x39ceb80);
            const uintptr_t Send = REBASE(0x39ce420);
            const uintptr_t VTable = REBASE(0x70b4f38);
        } // namespace Client

        namespace Stream
        {
            const uintptr_t Create = REBASE(0x526ac40);
            const uintptr_t Destroy = REBASE(0x203a6b0);
        } // namespace Stream

    } // namespace RbxTransport

    namespace Raknet
    {
        const uintptr_t HandleConnectionState = REBASE(0x483e690);
        const uintptr_t ProcessNetworkPacket = REBASE(0x2774b20);
        const uintptr_t Receive = REBASE(0x278a600);
        const uintptr_t RecvFromLoop = REBASE(0x27756b0);
        const uintptr_t ReportNetworkError = REBASE(0x483b8d0);
        const uintptr_t Send = REBASE(0x2768720);
        const uintptr_t UpdateNetworkLoop = REBASE(0x275a050);
        const uintptr_t convertItemEnumToString = REBASE(0x47a4370);
        namespace RakPeer
        {
            const uintptr_t OnOpenConnectionReply1 = REBASE(0x27777d0);
            const uintptr_t Receive = REBASE(0x275fc20);
            const uintptr_t SendPacketsToSelf = REBASE(0x275e110);
            const uintptr_t VTable = REBASE(0x704ee60);
            const uintptr_t setServerMachineAddress = REBASE(0x277d860);
        } // namespace RakPeer

    } // namespace Raknet

    namespace FFlags
    {
        const uintptr_t BooleanType = REBASE(0x7147908);
        const uintptr_t BooleanValueType = REBASE(0x71477f0);
        const uintptr_t GetFFlag = REBASE(0x498a7c0);
        const uintptr_t IntegerType = REBASE(0x7147a20);
        const uintptr_t IntegerValueType = REBASE(0x7147b38);
        const uintptr_t SetFFlag = REBASE(0x4989cc0);
    } // namespace FFlags

    namespace vft
    {
        const uintptr_t vftFuncScriptSlot0 = REBASE(0x7117c68);
        const uintptr_t vftFuncScriptSlot1 = REBASE(0x7117df0);
        const uintptr_t vftMessageScriptSlot = REBASE(0x7117b80);
        const uintptr_t vftNetworkStream = REBASE(0x7036b08);
        const uintptr_t vftWaitScriptSlot = REBASE(0x7117bd8);
    } // namespace vft

    namespace Luau
    {
        const uintptr_t ClientOnRecieve = REBASE(0x4743770);
        const uintptr_t call_binTM = REBASE(0x256eb20);
        const uintptr_t currfuncname = REBASE(0x255a7b0);
        const uintptr_t dumpgco = REBASE(0x258a110);
        const uintptr_t f_luaopen = REBASE(0x25582e0);
        const uintptr_t freeblock = REBASE(0x25a8d20);
        const uintptr_t freechunk = REBASE(0x25a87c0);
        const uintptr_t getfunc = REBASE(0x41dc380);
        const uintptr_t index2addr = REBASE(0x254b840);
        const uintptr_t loadsafe = REBASE(0x25781d0);
        const uintptr_t luaB_assert = REBASE(0x58c7e80);
        const uintptr_t luaB_error = REBASE(0x58c2f50);
        const uintptr_t luaB_gcinfo = REBASE(0x58c5c90);
        const uintptr_t luaB_getfenv = REBASE(0x58c4a80);
        const uintptr_t luaB_getmetatable = REBASE(0x58c3ea0);
        const uintptr_t luaB_newproxy = REBASE(0x58c8ad0);
        const uintptr_t luaB_next = REBASE(0x58c7380);
        const uintptr_t luaB_print = REBASE(0x58c2af0);
        const uintptr_t luaB_rawequal = REBASE(0x58c4d90);
        const uintptr_t luaB_rawget = REBASE(0x58c4eb0);
        const uintptr_t luaB_rawlen = REBASE(0x58c5bf0);
        const uintptr_t luaB_rawset = REBASE(0x58c5440);
        const uintptr_t luaB_select = REBASE(0x58c7f30);
        const uintptr_t luaB_setfenv = REBASE(0x58c4b50);
        const uintptr_t luaB_setmetatable = REBASE(0x58c4040);
        const uintptr_t SaltFlag = REBASE(0x8167440);
        const uintptr_t luaS_resize = REBASE(0x25765b0);
        const uintptr_t luaB_tonumber = REBASE(0x58c2bb0);
        const uintptr_t luaB_tostring = REBASE(0x58c8a70);
        const uintptr_t luaB_type = REBASE(0x58c5cb0);
        const uintptr_t luaB_typeof = REBASE(0x58c6820);
        const uintptr_t luaD_growstack = REBASE(0x254bd80);
        const uintptr_t luaD_preparefinalize = REBASE(0x25536f0);
        const uintptr_t luaD_rawrunprotected = REBASE(0x2551b80);
        const uintptr_t luaD_reallocstack = REBASE(0x254ba00);
        const uintptr_t luaD_runfinalizers = REBASE(0x2553790);
        const uintptr_t luaD_throw = REBASE(0x2551bb0);
        const uintptr_t luaF_freeproto = REBASE(0x2587e10);
        const uintptr_t luaF_newproto = REBASE(0x2586e60);
        const uintptr_t luaG_aritherror = REBASE(0x2585820);
        const uintptr_t luaG_concaterror = REBASE(0x25857d0);
        const uintptr_t luaG_forerrorL = REBASE(0x2585790);
        const uintptr_t luaG_indexerror = REBASE(0x2585940);
        const uintptr_t luaG_methoderror = REBASE(0x2585a40);
        const uintptr_t luaG_missingmembererror = REBASE(0x25859d0);
        const uintptr_t luaG_ordererror = REBASE(0x25858c0);
        const uintptr_t luaG_pusherror = REBASE(0x2585ab0);
        const uintptr_t luaG_readonlyerror = REBASE(0x2585a80);
        const uintptr_t luaG_runerrorL = REBASE(0x2586610);
        const uintptr_t luaG_typeerrorL = REBASE(0x2585750);
        const uintptr_t luaH_clone = REBASE(0x25825e0);
        const uintptr_t luaH_dummynode = REBASE(0x67c4778);
        const uintptr_t luaL_addlstring = REBASE(0x25656b0);
        const uintptr_t luaL_addvalue = REBASE(0x2565710);
        const uintptr_t luaL_argerrorL = REBASE(0x255a830);
        const uintptr_t luaL_error = REBASE(0x255b8f0);
        const uintptr_t luaL_getmetafield = REBASE(0x255e420);
        const uintptr_t luaL_prepbuffsize = REBASE(0x25652a0);
        const uintptr_t luaL_requiref = REBASE(0x255ff60);
        const uintptr_t luaL_tolstring = REBASE(0x2566fd0);
        const uintptr_t luaL_typeerrorL = REBASE(0x255a8b0);
        const uintptr_t luaL_typename = REBASE(0x2564790);
        const uintptr_t luaM_free = REBASE(0x25a8870);
        const uintptr_t luaM_toobig = REBASE(0x25a8790);
        const uintptr_t luaO_nilobject = REBASE(0x67dbca8);
        const uintptr_t luaO_pushfstring = REBASE(0x254cdb0);
        const uintptr_t luaR_defaultcreateobject = REBASE(0x25afbb0);
        const uintptr_t luaT_eventname = REBASE(0x67dbd50);
        const uintptr_t luaT_objtypename = REBASE(0x2589650);
        const uintptr_t luaT_typenames = REBASE(0x67dbcd0);
        const uintptr_t luaV_doarithimpl_TM_ADD = REBASE(0x25712a0);
        const uintptr_t luaV_doarithimpl_TM_DIV = REBASE(0x25718e0);
        const uintptr_t luaV_doarithimpl_TM_IDIV = REBASE(0x2571b60);
        const uintptr_t luaV_doarithimpl_TM_MOD = REBASE(0x2571e60);
        const uintptr_t luaV_doarithimpl_TM_MUL = REBASE(0x2571660);
        const uintptr_t luaV_doarithimpl_TM_POW = REBASE(0x2572010);
        const uintptr_t luaV_doarithimpl_TM_SUB = REBASE(0x2571480);
        const uintptr_t luaV_doarithimpl_TM_UNM = REBASE(0x25721c0);
        const uintptr_t luaV_gettable = REBASE(0x256cf00);
        const uintptr_t luaV_prepareFORN = REBASE(0x2570930);
        const uintptr_t luaV_settable = REBASE(0x256de10);
        const uintptr_t luaV_tonumber = REBASE(0x25843b0);
        const uintptr_t luaV_tostring = REBASE(0x2569bb0);
        const uintptr_t lua_createtable = REBASE(0x13d0070);
        const uintptr_t lua_error = REBASE(0x254fc60);
        const uintptr_t lua_exception = REBASE(0x2551a10);
        const uintptr_t lua_newstate = REBASE(0x255a2d0);
        const uintptr_t lua_pushfstringL = REBASE(0x254cdb0);
        const uintptr_t lua_resume = REBASE(0x58fd450);
        const uintptr_t lua_setthreadfinalizer = REBASE(0x254f5f0);
        const uintptr_t luau_execute = REBASE(0x258e0c0);
        const uintptr_t luau_execute_false = REBASE(0x258e8d0);
        const uintptr_t luau_execute_true = REBASE(0x259b710);
        const uintptr_t newclasspage = REBASE(0x25a96d0);
        const uintptr_t newpage = REBASE(0x25a8e40);
        const uintptr_t printf = REBASE(0x1bf4f90);
        const uintptr_t pushfstring_nocheck = REBASE(0x25851a0);
        const uintptr_t raiseerror = REBASE(0x4973aa0);
        const uintptr_t tag_error = REBASE(0x255a9a0);
    } // namespace Luau

    namespace Task
    {
        const uintptr_t cancel = REBASE(0x4212da0);
        const uintptr_t defer = REBASE(0x4211e10);
        const uintptr_t spawn = REBASE(0x42122e0);
        const uintptr_t wait = REBASE(0x4212ad0);
    } // namespace Task

    namespace Actor
    {
        inline constexpr uintptr_t ParallelFlag = 0x55d;
        inline constexpr uintptr_t Parent = 0x60;
        inline constexpr uintptr_t WriteLock = 0x700;
        const uintptr_t desynchronize = REBASE(0x42110d0);
        const uintptr_t synchronize = REBASE(0x4210b70);
    } // namespace Actor

    namespace Signals
    {
        const uintptr_t FireAllClients = REBASE(0x3365510);
        const uintptr_t FireMouseClick = REBASE(0x3b3cac0);
        const uintptr_t FireRightMouseClick = REBASE(0x3b3cc60);
        const uintptr_t FireProximityPrompt = REBASE(0x2fc3d70);
        const uintptr_t FireMouseHoverEnter = REBASE(0x3b3e030);
        const uintptr_t FireMouseHoverLeave = REBASE(0x3b3e1d0);
        const uintptr_t FireTouchInterest = REBASE(0x13ede10);
        const uintptr_t FireServer = REBASE(0x3365150);
        const uintptr_t InvokeClient = REBASE(0x343a6d0);
        const uintptr_t InvokeServer = REBASE(0x343e240);
        const uintptr_t IsLegalSendEvent = REBASE(0x48abc50);
        const uintptr_t TouchInterest = REBASE(0xaaea60);
    } // namespace Signals

    namespace coroutine
    {
        const uintptr_t create = REBASE(0x58f7dc0);
        const uintptr_t running = REBASE(0x58f86b0);
        const uintptr_t status = REBASE(0x58f5860);
        const uintptr_t wrap = REBASE(0x58f8380);
        const uintptr_t yield = REBASE(0x58f8650);
        const uintptr_t isyieldable = REBASE(0x58f8730);
        const uintptr_t finally = REBASE(0x58fb060);
    } // namespace coroutine

    namespace bit32
    {
        const uintptr_t arshift = REBASE(0x58ff370);
        const uintptr_t band = REBASE(0x58feda0);
        const uintptr_t bnot = REBASE(0x58ff080);
        const uintptr_t bor = REBASE(0x58fee60);
        const uintptr_t bxor = REBASE(0x58fef70);
        const uintptr_t btest = REBASE(0x58fedd0);
        const uintptr_t extract = REBASE(0x58ff750);
        const uintptr_t lrotate = REBASE(0x58ff560);
        const uintptr_t lshift = REBASE(0x58ff110);
        const uintptr_t replace = REBASE(0x58ff810);
        const uintptr_t rrotate = REBASE(0x58ff5f0);
        const uintptr_t rshift = REBASE(0x58ff230);
        const uintptr_t countlz = REBASE(0x58ff960);
        const uintptr_t countrz = REBASE(0x58ffac0);
        const uintptr_t byteswap = REBASE(0x58ffc20);
    } // namespace bit32

    namespace utf8
    {
        const uintptr_t offset = REBASE(0x58cf970);
        const uintptr_t codepoint = REBASE(0x58ce8c0);
        const uintptr_t char = REBASE(0x58cec70);
        const uintptr_t len = REBASE(0x58ce5c0);
        const uintptr_t codes = REBASE(0x58cfee0);
    } // namespace utf8

    namespace buffer
    {
        const uintptr_t create = REBASE(0x58ef480);
        const uintptr_t fromstring = REBASE(0x58ef530);
        const uintptr_t tostring = REBASE(0x58ef600);
        const uintptr_t readi8 = REBASE(0x58f1b20);
        const uintptr_t readu8 = REBASE(0x58f1c90);
        const uintptr_t readi16 = REBASE(0x58f1e00);
        const uintptr_t readu16 = REBASE(0x58f1f70);
        const uintptr_t readi32 = REBASE(0x58f20e0);
        const uintptr_t readu32 = REBASE(0x58f2250);
        const uintptr_t readf32 = REBASE(0x58f23c0);
        const uintptr_t readf64 = REBASE(0x58f2530);
        const uintptr_t writei8 = REBASE(0x58f26a0);
        const uintptr_t writeu8 = REBASE(0x58f26a0);
        const uintptr_t writei16 = REBASE(0x58f2820);
        const uintptr_t writeu16 = REBASE(0x58f2820);
        const uintptr_t writei32 = REBASE(0x58f29a0);
        const uintptr_t writeu32 = REBASE(0x58f29a0);
        const uintptr_t writef32 = REBASE(0x58f2b20);
        const uintptr_t writef64 = REBASE(0x58f2cb0);
        const uintptr_t readstring = REBASE(0x58f0090);
        const uintptr_t writestring = REBASE(0x58f0cb0);
        const uintptr_t len = REBASE(0x58f0f60);
        const uintptr_t copy = REBASE(0x58f1020);
        const uintptr_t fill = REBASE(0x58f1320);
        const uintptr_t readbits = REBASE(0x58f1580);
        const uintptr_t writebits = REBASE(0x58f17c0);
    } // namespace buffer

    namespace os
    {
        const uintptr_t clock = REBASE(0x58d1620);
        const uintptr_t date = REBASE(0x58d3f70);
        const uintptr_t difftime = REBASE(0x58d49a0);
        const uintptr_t time = REBASE(0x58d4680);
    } // namespace os

    namespace string
    {
        const uintptr_t byte = REBASE(0x58d6e60);
        const uintptr_t char = REBASE(0x58d70f0);
        const uintptr_t find = REBASE(0x58d97a0);
        const uintptr_t format = REBASE(0x58dbff0);
        const uintptr_t gmatch = REBASE(0x58d9ad0);
        const uintptr_t gsub = REBASE(0x58db620);
        const uintptr_t len = REBASE(0x58d4b60);
        const uintptr_t lower = REBASE(0x58d6180);
        const uintptr_t match = REBASE(0x58d97b0);
        const uintptr_t rep = REBASE(0x58d6440);
        const uintptr_t reverse = REBASE(0x58d6030);
        const uintptr_t sub = REBASE(0x58d4c10);
        const uintptr_t upper = REBASE(0x58d62e0);
        const uintptr_t split = REBASE(0x58dc580);
        const uintptr_t pack = REBASE(0x58e1110);
        const uintptr_t packsize = REBASE(0x58e1a80);
        const uintptr_t unpack = REBASE(0x58e1df0);
    } // namespace string

    namespace vector
    {
        const uintptr_t create = REBASE(0x58e58e0);
        const uintptr_t magnitude = REBASE(0x58e5a90);
        const uintptr_t normalize = REBASE(0x58e5b90);
        const uintptr_t cross = REBASE(0x58e5c70);
        const uintptr_t dot = REBASE(0x58e5d40);
        const uintptr_t angle = REBASE(0x58e5e50);
        const uintptr_t floor = REBASE(0x58e60f0);
        const uintptr_t ceil = REBASE(0x58e6190);
        const uintptr_t abs = REBASE(0x58e6230);
        const uintptr_t sign = REBASE(0x58e62a0);
        const uintptr_t clamp = REBASE(0x58e6360);
        const uintptr_t max = REBASE(0x58e6600);
        const uintptr_t min = REBASE(0x58e64e0);
        const uintptr_t lerp = REBASE(0x58e68c0);
    } // namespace vector

    namespace debug
    {
        const uintptr_t info = REBASE(0x58f3380);
        const uintptr_t traceback = REBASE(0x58f5660);
    } // namespace debug

    const uintptr_t OpcodeLookupTable = REBASE(0x72c97b0);
    const uintptr_t OpcodeDecodeTable = REBASE(0x72c98b0);
    const uintptr_t FLogHookPtr = REBASE(0x84e4658);
    const uintptr_t CrashPadPtr = REBASE(0x84a68f0);
    const uintptr_t CrashPtr = REBASE(0x84e44b8);
    const uintptr_t RobloxLogCrash = REBASE(0x4971090);
    const uintptr_t ConnectionDisconnect = REBASE(0x40f6670);
    const uintptr_t CastArgs = REBASE(0x408a130);
} // namespace Offsets
