// dumped by nick (@skiddingonthescene)
// date: 2026-10-28 15:36:59
// took 187.9s
// success rate: 90.6%

// still in dev. check before using

#include <cstdint>
#include <Windows.h>

static const uintptr_t roblox_base = reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr));
static const uintptr_t hyperion_base = reinterpret_cast<uintptr_t>(GetModuleHandleA("RobloxPlayerBeta.dll"));

#define REBASE(x) ((x) + roblox_base)
#define HREBASE(x) ((x) + hyperion_base)

namespace Offsets
{
    inline constexpr const char* LiveChannel = "version-5a21b87bbc2641cf";

    // hyperion removed because it was wrong anyways

    namespace ScriptContext
    {
        inline constexpr uintptr_t IsRobloxScript = 0x150;
        inline constexpr uintptr_t RequireBypass = 0xb50;
        inline constexpr uintptr_t ToResume = 0xa50;
        const uintptr_t Resume = REBASE(0x4270490);
        const uintptr_t ResumeParallelWaitingScripts = REBASE(0x42dbe10);
        const uintptr_t TaskQueue = REBASE(0x431d860);
        const uintptr_t whjs_step = REBASE(0x42a1bc0);
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
        const uintptr_t GetCapabilities = REBASE(0x1c905d0);
        const uintptr_t GetLuaStateForInstance = REBASE(0x41d0080);
        const uintptr_t GetTlsPointer = REBASE(0xc700);
        const uintptr_t IdentityPtr = REBASE(0x83b6678);
        const uintptr_t rbxSpawn = REBASE(0x4278080);
    } // namespace RobloxThread

    namespace Instance
    {
        inline constexpr uintptr_t BucketIndices = 0x10;
        inline constexpr uintptr_t BucketMask = 0x38;
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        inline constexpr uintptr_t HashLookup = 0xac;
        inline constexpr uintptr_t PropertyMap = 0x0;
        inline constexpr uintptr_t PropertyTable = 0x18;
        const uintptr_t GetModuleFromVMStateMap = REBASE(0x427f9d0);
        const uintptr_t GetValues = REBASE(0x41322c0);
        const uintptr_t Push = REBASE(0x41b76c0);
        const uintptr_t SetParent = REBASE(0x1c9eea0);
        const uintptr_t WaitForChild = REBASE(0x147ae20);
    } // namespace Instance

    namespace RbxTransport
    {
        const uintptr_t AppDestructor = REBASE(0x2123bc0);
        const uintptr_t AppRTTI = REBASE(0x7674f18);
        const uintptr_t AppReceive = REBASE(0x211e890);
        const uintptr_t AppReceiveMaxBytes = REBASE(0x211f140);
        const uintptr_t AppSend = REBASE(0x211e520);
        const uintptr_t AppVTable = REBASE(0x6f525c0);
        const uintptr_t ClientChannelConfig = REBASE(0x3a99470);
        const uintptr_t ClientDestructor = REBASE(0x3a99670);
        const uintptr_t ClientReceive = REBASE(0x3a99da0);
        const uintptr_t ClientRtti = REBASE(0x76eacb8);
        const uintptr_t ClientSend = REBASE(0x3a99790);
        const uintptr_t ClientVTable = REBASE(0x6fc3b30);
        const uintptr_t FailureFallbackToRbxTransport = REBASE(0x8000a20);
        const uintptr_t RBXTransportDecrypt = REBASE(0x21fab00);
        const uintptr_t RBXTransportEncrypt = REBASE(0x21fa7f0);
        const uintptr_t StreamAppend = REBASE(0x2126160);
        const uintptr_t StreamCreate = REBASE(0x53260a0);
        const uintptr_t StreamDestroy = REBASE(0x20e91f0);
        const uintptr_t UseRbxTransportClient = REBASE(0x7fe8dd8);
    } // namespace RbxTransport

    namespace Raknet
    {
        const uintptr_t HandleConnectionState = REBASE(0x48e8fa0);
        const uintptr_t ProcessNetworkPacket = REBASE(0x282aca0);
        const uintptr_t RPOnOpenConnectionReply1 = REBASE(0x282dce0);
        const uintptr_t RPReceive = REBASE(0x2815ba0);
        const uintptr_t RPsetServerMachineAddress = REBASE(0x2833de0);
        const uintptr_t Receive = REBASE(0x28425a0);
        const uintptr_t RecvFromLoop = REBASE(0x282b830);
        const uintptr_t ReportNetworkError = REBASE(0x48e61e0);
        const uintptr_t Send = REBASE(0x281e710);
        const uintptr_t SendPacketsToSelf = REBASE(0x28140b0);
        const uintptr_t UpdateNetworkLoop = REBASE(0x280ffe0);
    } // namespace Raknet

    namespace FFlags
    {
        const uintptr_t BooleanType = REBASE(0x7054590);
        const uintptr_t BooleanValueType = REBASE(0x7054478);
        const uintptr_t FFlagPointer = REBASE(0x7fad6b0);
        const uintptr_t GetFFlag = REBASE(0x4a38860);
        const uintptr_t IntegerType = REBASE(0x70548d8);
        const uintptr_t IntegerValueType = REBASE(0x70547c0);
        const uintptr_t SetFFlag = REBASE(0x4a37d60);
    } // namespace FFlags

    namespace vft
    {
        const uintptr_t vftFuncScriptSlot0 = REBASE(0x7026040);
        const uintptr_t vftFuncScriptSlot1 = REBASE(0x70260f8);
        const uintptr_t vftMessageScriptSlot = REBASE(0x7025e98);
        const uintptr_t vftNetworkStream = REBASE(0x6f46c88);
        const uintptr_t vftWaitScriptSlot = REBASE(0x7025f48);
    } // namespace vft

    namespace Luau
    {
        const uintptr_t ClientOnRecieve = REBASE(0x4802140);
        const uintptr_t call_binTM = REBASE(0x260ed90);
        const uintptr_t currfuncname = REBASE(0x25fd7a0);
        const uintptr_t dumpgco = REBASE(0x261f1f0);
        const uintptr_t f_luaopen = REBASE(0x25fb960);
        const uintptr_t freeblock = REBASE(0x2645a90);
        const uintptr_t freechunk = REBASE(0x2645520);
        const uintptr_t getfunc = REBASE(0x263d9a0);
        const uintptr_t index2addr = REBASE(0x25f0820);
        const uintptr_t loadsafe = REBASE(0x265b4d0);
        const uintptr_t luaB_assert = REBASE(0x2641500);
        const uintptr_t luaB_error = REBASE(0x263cbe0);
        const uintptr_t luaB_gcinfo = REBASE(0x263fd70);
        const uintptr_t luaB_getfenv = REBASE(0x263e190);
        const uintptr_t luaB_getmetatable = REBASE(0x263d610);
        const uintptr_t luaB_newproxy = REBASE(0x2642110);
        const uintptr_t luaB_next = REBASE(0x2640a50);
        const uintptr_t luaB_print = REBASE(0x263c780);
        const uintptr_t luaB_rawequal = REBASE(0x263e470);
        const uintptr_t luaB_rawget = REBASE(0x263e580);
        const uintptr_t luaB_rawlen = REBASE(0x263fcd0);
        const uintptr_t luaB_rawset = REBASE(0x263f010);
        const uintptr_t luaB_select = REBASE(0x26415b0);
        const uintptr_t luaB_setfenv = REBASE(0x263e250);
        const uintptr_t luaB_setmetatable = REBASE(0x263d790);
        const uintptr_t luaB_tonumber = REBASE(0x263c850);
        const uintptr_t luaB_tostring = REBASE(0x26420b0);
        const uintptr_t luaB_type = REBASE(0x263fd90);
        const uintptr_t luaB_typeof = REBASE(0x2640400);
        const uintptr_t luaD_growstack = REBASE(0x25f0d60);
        const uintptr_t luaD_preparefinalize = REBASE(0x25f7fb0);
        const uintptr_t luaD_rawrunprotected = REBASE(0x25f6530);
        const uintptr_t luaD_reallocstack = REBASE(0x25f09d0);
        const uintptr_t luaD_runfinalizers = REBASE(0x25f8040);
        const uintptr_t luaD_throw = REBASE(0x25f6560);
        const uintptr_t luaG_aritherror = REBASE(0x261bdb0);
        const uintptr_t luaG_concaterror = REBASE(0x261bd60);
        const uintptr_t luaG_forerrorL = REBASE(0x261bd20);
        const uintptr_t luaG_indexerror = REBASE(0x261bed0);
        const uintptr_t luaG_methoderror = REBASE(0x261bfd0);
        const uintptr_t luaG_missingmembererror = REBASE(0x261bf60);
        const uintptr_t luaG_ordererror = REBASE(0x261be50);
        const uintptr_t luaG_pusherror = REBASE(0x261c040);
        const uintptr_t luaG_readonlyerror = REBASE(0x261c010);
        const uintptr_t luaG_runerrorL = REBASE(0x261c690);
        const uintptr_t luaG_typeerrorL = REBASE(0x261bce0);
        const uintptr_t luaH_clone = REBASE(0x2618530);
        const uintptr_t luaH_dummynode = REBASE(0x67352e8);
        const uintptr_t luaL_addlstring = REBASE(0x2605bf0);
        const uintptr_t luaL_addvalue = REBASE(0x2605c50);
        const uintptr_t luaL_argcheck = REBASE(0x26001c0);
        const uintptr_t luaL_argerrorL = REBASE(0x25fd820);
        const uintptr_t luaL_error = REBASE(0x25fe4d0);
        const uintptr_t luaL_getmetafield = REBASE(0x26001c0);
        const uintptr_t luaL_prepbuffsize = REBASE(0x2605810);
        const uintptr_t luaL_requiref = REBASE(0x2601cc0);
        const uintptr_t luaL_tolstring = REBASE(0x2606ba0);
        const uintptr_t luaL_typeerrorL = REBASE(0x25fd8a0);
        const uintptr_t luaL_typename = REBASE(0x2604d60);
        const uintptr_t luaM_free = REBASE(0x26455e0);
        const uintptr_t luaM_toobig = REBASE(0x26454f0);
        const uintptr_t luaO_nilobject = REBASE(0x6735848);
        const uintptr_t luaO_pushfstring = REBASE(0x25f1dd0);
        const uintptr_t luaO_str2d = REBASE(0x261aea0);
        const uintptr_t luaVM_load = REBASE(0x41c70f0);
        const uintptr_t luaR_defaultcreateobject = REBASE(0x264af70);
        const uintptr_t luaV_doarithimpl_TM_ADD = REBASE(0x261112e);
        const uintptr_t luaV_doarithimpl_TM_DIV = REBASE(0x26115c0);
        const uintptr_t luaV_doarithimpl_TM_IDIV = REBASE(0x2611840);
        const uintptr_t luaV_doarithimpl_TM_MOD = REBASE(0x2611b40);
        const uintptr_t luaV_doarithimpl_TM_MUL = REBASE(0x2611340);
        const uintptr_t luaV_doarithimpl_TM_POW = REBASE(0x2611cf0);
        const uintptr_t luaV_doarithimpl_TM_SUB = REBASE(0x261130e);
        const uintptr_t luaV_doarithimpl_TM_UNM = REBASE(0x2612003);
        const uintptr_t luaV_gettable = REBASE(0x260b910);
        const uintptr_t luaV_prepareFORN = REBASE(0x2610630);
        const uintptr_t luaV_settable = REBASE(0x260d690);
        const uintptr_t luaV_tostring = REBASE(0x2608a90);
        const uintptr_t lua_createtable = REBASE(0x147a170);
        const uintptr_t lua_error = REBASE(0x25f4870);
        const uintptr_t lua_exception = REBASE(0x25f63d0);
        const uintptr_t lua_pushfstringL = REBASE(0x25f1dd0);
        const uintptr_t lua_pushthread = REBASE(0x25f1ea0);
        const uintptr_t lua_resume = REBASE(0x5996a10);
        const uintptr_t lua_setfenv = REBASE(0x25f2060);
        const uintptr_t lua_setthreadfinalizer = REBASE(0x25f41d0);
        const uintptr_t luau_execute = REBASE(0x26228c0);
        const uintptr_t newclasspage = REBASE(0x2646460);
        const uintptr_t newpage = REBASE(0x2645bd0);
        const uintptr_t print = REBASE(0x1c50690);
        const uintptr_t pushfstring_nocheck = REBASE(0x261b7b0);
        const uintptr_t raiseerror = REBASE(0x4a21810);
        const uintptr_t tag_error = REBASE(0x25fd990);
    } // namespace Luau

    namespace Task
    {
        const uintptr_t cancel = REBASE(0x432f090);
        const uintptr_t defer = REBASE(0x432e240);
        const uintptr_t desynchronize = REBASE(0x432d500);
        const uintptr_t spawn = REBASE(0x432e720);
        const uintptr_t synchronize = REBASE(0x432cf80);
        const uintptr_t wait = REBASE(0x432edb0);
    } // namespace Task

    namespace Signals
    {
        const uintptr_t FireAllClients = REBASE(0x3451dd0);
        const uintptr_t FireMouseClick = REBASE(0x3c00500);
        const uintptr_t FireRightMouseClick = REBASE(0x3c006a0);
        const uintptr_t FireMouseHoverEnter = REBASE(0x3c01a70);
        const uintptr_t FireMouseHoverLeave = REBASE(0x3c01c10);
        const uintptr_t FireProximityPrompt = REBASE(0x30a8980);
        const uintptr_t FireTouchInterest = REBASE(0x1498fe0);
        const uintptr_t FireServer = REBASE(0x3451a30);
        const uintptr_t InvokeClient = REBASE(0x35228f0);
        const uintptr_t InvokeServer = REBASE(0x3526430);
        const uintptr_t IsLegalSendEvent = REBASE(0x4953440);
        const uintptr_t TouchInterest = REBASE(0xb04e10);
    } // namespace Signals

    namespace coroutine
    {
        const uintptr_t create = REBASE(0x59935d0);
        const uintptr_t running = REBASE(0x5993e90);
        const uintptr_t status = REBASE(0x5991b10);
        const uintptr_t wrap = REBASE(0x5993b70);
        const uintptr_t yield = REBASE(0x5993e30);
        const uintptr_t isyieldable = REBASE(0x5993f00);
        const uintptr_t finally = REBASE(0x5995670);
    } // namespace coroutine

    namespace table
    {
        const uintptr_t concat = REBASE(0x264fea0);
        const uintptr_t foreach = REBASE(0x264c280);
        const uintptr_t foreachi = REBASE(0x264b530);
        const uintptr_t getn = REBASE(0x264d690);
        const uintptr_t maxn = REBASE(0x264d3d0);
        const uintptr_t insert = REBASE(0x264e8b0);
        const uintptr_t remove = REBASE(0x264eab0);
        const uintptr_t sort = REBASE(0x2652100);
        const uintptr_t pack = REBASE(0x26501c0);
        const uintptr_t unpack = REBASE(0x2650a80);
        const uintptr_t move = REBASE(0x264ee20);
        const uintptr_t create = REBASE(0x2652280);
        const uintptr_t find = REBASE(0x2652b10);
        const uintptr_t clear = REBASE(0x26531a0);
        const uintptr_t freeze = REBASE(0x26531f0);
        const uintptr_t isfrozen = REBASE(0x2653340);
    } // namespace table

    namespace utf8
    {
        const uintptr_t offset = REBASE(0x5976480);
        const uintptr_t codepoint = REBASE(0x59758e0);
        const uintptr_t char = REBASE(0x5975c80);
        const uintptr_t len = REBASE(0x5975600);
        const uintptr_t codes = REBASE(0x59769c0);
    } // namespace utf8

    namespace os
    {
        const uintptr_t clock = REBASE(0x5977870);
        const uintptr_t date = REBASE(0x5978f30);
        const uintptr_t difftime = REBASE(0x5979990);
        const uintptr_t time = REBASE(0x5979690);
    } // namespace os

    namespace string
    {
        const uintptr_t byte = REBASE(0x597b140);
        const uintptr_t char = REBASE(0x597b3d0);
        const uintptr_t find = REBASE(0x597d090);
        const uintptr_t format = REBASE(0x597f470);
        const uintptr_t gmatch = REBASE(0x597d460);
        const uintptr_t gsub = REBASE(0x597eaa0);
        const uintptr_t len = REBASE(0x5979b40);
        const uintptr_t lower = REBASE(0x597a860);
        const uintptr_t match = REBASE(0x597d0a0);
        const uintptr_t rep = REBASE(0x597ab00);
        const uintptr_t reverse = REBASE(0x597a720);
        const uintptr_t sub = REBASE(0x5979bf0);
        const uintptr_t upper = REBASE(0x597a9b0);
        const uintptr_t split = REBASE(0x597faa0);
        const uintptr_t pack = REBASE(0x5982ba0);
        const uintptr_t packsize = REBASE(0x5983500);
        const uintptr_t unpack = REBASE(0x5983870);
    } // namespace string

    namespace vector
    {
        const uintptr_t create = REBASE(0x5985c40);
        const uintptr_t magnitude = REBASE(0x5985df0);
        const uintptr_t normalize = REBASE(0x5985ee0);
        const uintptr_t cross = REBASE(0x5985fc0);
        const uintptr_t dot = REBASE(0x5986090);
        const uintptr_t angle = REBASE(0x5986190);
        const uintptr_t floor = REBASE(0x5986420);
        const uintptr_t ceil = REBASE(0x59864c0);
        const uintptr_t abs = REBASE(0x5986560);
        const uintptr_t sign = REBASE(0x59865d0);
        const uintptr_t clamp = REBASE(0x5986690);
        const uintptr_t max = REBASE(0x5986920);
        const uintptr_t min = REBASE(0x5986800);
        const uintptr_t lerp = REBASE(0x5986bd0);
    } // namespace vector

    namespace debug
    {
        const uintptr_t info = REBASE(0x5990170);
        const uintptr_t traceback = REBASE(0x5991920);
    } // namespace debug

    const uintptr_t OpcodeLookupTable = REBASE(0x71cfba0);
    const uintptr_t WebSocketServiceEnableClientCreation = REBASE(0x7328ce8);
    const uintptr_t LockViolationInstanceCrash = REBASE(0x73b1fe8);
    const uintptr_t LockViolationScriptCrash = REBASE(0x7334218);
    const uintptr_t LuaStepIntervalMsOverrideEnabled = REBASE(0x73379c8);
    const uintptr_t WndProcessCheck = REBASE(0x7096698);
    const uintptr_t RobloxLogCrash = REBASE(0x4a1e8b0);
    const uintptr_t Register = REBASE(0x3da36a0);
    const uintptr_t ConnectionDisconnect = REBASE(0x419a260);
    const uintptr_t CastArgs = REBASE(0x4134690);
} // namespace Offsets

enum ReflectionType : uint32_t
{
    Void = 0x0,
    Bool = 0x1,
    Int = 0x2,
    Int64 = 0x3,
    Float = 0x4,
    Double = 0x5,
    String = 0x6,
    ProtectedString = 0x7,
    Instance = 0x8,
    Instances = 0x9,
    Ray = 0xa,
    Vector2 = 0xb,
    Vector3 = 0xc,
    Vector2Int16 = 0xd,
    Vector3Int16 = 0xe,
    Rect2d = 0xf,
    CoordinateFrame = 0x10,
    Color3 = 0x11,
    Color3uint8 = 0x12,
    UDim = 0x13,
    UDim2 = 0x14,
    Faces = 0x15,
    Axes = 0x16,
    Region3 = 0x17,
    Region3Int16 = 0x18,
    CellId = 0x19,
    GuidData = 0x1a,
    PhysicalProperties = 0x1b,
    BrickColor = 0x1c,
    SystemAddress = 0x1d,
    BinaryString = 0x1e,
    Surface = 0x1f,
    CollectionHandle = 0x20,
    Enum = 0x21,
    Property = 0x22,
    Tuple = 0x23,
    ValueArray = 0x24,
    ValueTable = 0x25,
    ValueMap = 0x26,
    Variant = 0x27,
    GenericFunction = 0x28,
    WeakFunctionRef = 0x29,
    ColorSequence = 0x2a,
    ColorSequenceKeypoint = 0x2b,
    NumberRange = 0x2c,
    NumberSequence = 0x2d,
    NumberSequenceKeypoint = 0x2e,
    InputObject = 0x2f,
    Connection = 0x30,
    ContentId = 0x31,
    DescribedBase = 0x32,
    RefType = 0x33,
    QFont = 0x34,
    QDir = 0x35,
    EventInstance = 0x36,
    TweenInfo = 0x37,
    DockWidgetPluginGuiInfo = 0x38,
    PluginDrag = 0x39,
    Random = 0x3a,
    PathWaypoint = 0x3b,
    FloatCurveKey = 0x3c,
    RotationCurveKey = 0x3d,
    ValueCurveKey = 0x3e,
    SharedString = 0x3f,
    DateTime = 0x40,
    RaycastParams = 0x41,
    RaycastResult = 0x42,
    OverlapParams = 0x43,
    LazyTable = 0x44,
    DebugTable = 0x45,
    CatalogSearchParams = 0x46,
    OptionalCoordinateFrame = 0x47,
    CSGPropertyData = 0x48,
    UniqueId = 0x49,
    Font = 0x4a,
    SharedTable = 0x4b,
    SharedTableIterator = 0x4c,
    AnimationMask = 0x4d,
    AnimationPose = 0x4e,
    ClipEvaluator = 0x4f,
    OpenCloudModel = 0x50,
    InstanceRef = 0x51,
    SecurityCapabilities = 0x52,
    ArticulatedJoint = 0x53,
    AnimationContext = 0x54,
    Secret = 0x55,
    Buffer = 0x56,
    Integer = 0x57,
    Path2DControlPoint = 0x58,
    ReplicationPV = 0x59,
    FacsReplicationData = 0x5a,
    AnimationMaskModifier = 0x5b,
    Content = 0x5c,
    NetAssetHandle = 0x5d,
    NetAssetRef = 0x5e,
    Object = 0x5f,
    AdReward = 0x60,
    AssetContentMap = 0x61,
    SlimReplicationData = 0x62,
    User = 0x63,
    WebViewParams = 0x64,
    AnimTrackPlayState = 0x65,
    AnimTrackMetadata = 0x66,
    AnimTrackWeight = 0x67,
    ScopedInstanceIdentity = 0x68,
}; // enum ReflectionType