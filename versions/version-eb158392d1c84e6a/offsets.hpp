// dumped by nick
// date: 2026-07-15 08:53:41
// took 11.9s
// success rate: 95.1%

#include <cstdint>
#include <Windows.h>

static const uintptr_t roblox_base = reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr));
static const uintptr_t hyperion_base = reinterpret_cast<uintptr_t>(GetModuleHandleA("RobloxPlayerBeta.dll"));

#define REBASE(x) ((x) + roblox_base)
#define HREBASE(x) ((x) + hyperion_base)

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
    Max = 0x68,
}; // enum ReflectionType

namespace Offsets
{
    inline constexpr const char* LiveChannel = "version-eb158392d1c84e6a";

    namespace Hyperion
    {
        const uintptr_t ControlFlowGuard = HREBASE(0x60cb40);

        // other
        static const uint64_t patcheb[] = {
            0x23bf8, 0x409a0, 0x561fc, 0xb49620, 0xc393b4, 
            0xcb991c, 0xf960dc, 0x119c06c
        };
    } // namespace Hyperion

    namespace DataModel
    {
        const uintptr_t DataModelDeleterPointer = REBASE(0x7c49a0);
        const uintptr_t FakeDataModelPointer = REBASE(0x851f568);
    } // namespace DataModel

    namespace ScriptContext
    {
        inline constexpr uintptr_t RequireBypass = 0x198;
        const uintptr_t Resume = REBASE(0x1ef2ce0);
    } // namespace ScriptContext

    namespace BasePart
    {
    } // namespace BasePart

    namespace Connection
    {
        inline constexpr uintptr_t enabled = 0x20;
        inline constexpr uintptr_t next = 0x10;
        inline constexpr uintptr_t slot_wrapper = 0x30;
        inline constexpr uintptr_t slot_wrapper_self = 0x38;
    } // namespace Connection

    namespace Threads
    {
        inline constexpr uintptr_t weak_thread_live = 0x20;
        inline constexpr uintptr_t weak_thread_live_thread = 0x8;
        inline constexpr uintptr_t weak_thread_node = 0x180;
        inline constexpr uintptr_t weak_thread_ref = 0x8;
    } // namespace Threads

    namespace ByteCode
    {
        inline constexpr uintptr_t ModuleScriptByteCode = 0x150;
        inline constexpr uintptr_t ScriptByteCode = 0x1a8;
    } // namespace ByteCode

    namespace RobloxThread
    {
        const uintptr_t GetIdentityStruct = REBASE(0x66fef0);
        const uintptr_t GetTlsPointer = REBASE(0x7a4340);
        const uintptr_t IdentityPtr = REBASE(0x5d94482);
        const uintptr_t Impersonator = REBASE(0x657940);
    } // namespace RobloxThread

    namespace TaskScheduler
    {
        inline constexpr uintptr_t JobName = 0x38;
        inline constexpr uintptr_t JobsEnd = 0x1b0;
        inline constexpr uintptr_t MaxFps = 0x1d0;
        const uintptr_t RawScheduler = REBASE(0x7a31478);
        const uintptr_t TaskSchedulerTargetFps = REBASE(0x5fe0f70);
    } // namespace TaskScheduler

    namespace Instance
    {
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        const uintptr_t GetProperty = REBASE(0x1e74c00);
        const uintptr_t Push = REBASE(0x1e7ff00);
    } // namespace Instance

    namespace Property
    {
        const uintptr_t HashTableLookup = REBASE(0x2cdc2e0);
        const uintptr_t KTable = REBASE(0x80c0070);
    } // namespace Property

    namespace Raknet
    {
        const uintptr_t HandleConnectionState = REBASE(0x2446eb0);
        const uintptr_t ProcessNetworkPacket = REBASE(0x40c2750);
        const uintptr_t ReportNetworkError = REBASE(0x243bcb0);
        const uintptr_t Send = REBASE(0x3eeda40);
    } // namespace Raknet

    namespace Luau
    {
        const uintptr_t currfuncname = REBASE(0x7e73e0);
        const uintptr_t f_luaopen = REBASE(0x7e6840);
        const uintptr_t lua_break = REBASE(0x7e68f0);
        const uintptr_t lua_clock = REBASE(0x7f3fba);
        const uintptr_t lua_exception = REBASE(0x7e58b0);
        const uintptr_t lua_getfield = REBASE(0x7e8c00);
        const uintptr_t lua_newstate = REBASE(0x7e0750);
        const uintptr_t lua_pushfstringL = REBASE(0x7e2ff0);
        const uintptr_t lua_pushstring = REBASE(0x7e3360);
        const uintptr_t lua_pushvfstring = REBASE(0x7e3700);
        const uintptr_t lua_resetthread = REBASE(0x7e15c0);
        const uintptr_t lua_setfield = REBASE(0x7e4690);
        const uintptr_t lua_yield = REBASE(0x7e6b50);
        const uintptr_t luaB_assert = REBASE(0x3eb3c00);
        const uintptr_t luaB_error = REBASE(0x3eb36c0);
        const uintptr_t luaB_gcinfo = REBASE(0x3eb3af0);
        const uintptr_t luaB_getfenv = REBASE(0x3eb3850);
        const uintptr_t luaB_getmetatable = REBASE(0x1f00d30);
        const uintptr_t luaB_newproxy = REBASE(0x3eb3d20);
        const uintptr_t luaB_next = REBASE(0x3eb3ba0);
        const uintptr_t luaB_pcall = REBASE(0x7e2150);
        const uintptr_t luaB_pcallrun = REBASE(0x7e2eb0);
        const uintptr_t luaB_print = REBASE(0x3eb34a0);
        const uintptr_t luaB_rawequal = REBASE(0x3eb3990);
        const uintptr_t luaB_rawget = REBASE(0x3eb39e0);
        const uintptr_t luaB_rawlen = REBASE(0x3eb3a90);
        const uintptr_t luaB_rawset = REBASE(0x3eb3a30);
        const uintptr_t luaB_setfenv = REBASE(0x1fb6790);
        const uintptr_t luaB_setmetatable = REBASE(0x3eb3790);
        const uintptr_t luaB_tonumber = REBASE(0x3eb3580);
        const uintptr_t luaB_tostring = REBASE(0x3eb3d20);
        const uintptr_t luaB_type = REBASE(0x3eb3b20);
        const uintptr_t luaB_typeof = REBASE(0x3eb3b60);
        const uintptr_t luaC_step = REBASE(0x7f3f60);
        const uintptr_t luaD_rawrunprotected = REBASE(0x7e6e10);
        const uintptr_t luaF_newlclosure = REBASE(0x7f2770);
        const uintptr_t luaF_newproto = REBASE(0x7f2820);
        const uintptr_t luaG_runerror = REBASE(0x1fa39b0);
        const uintptr_t luaG_runerrorl = REBASE(0x7f6aa0);
        const uintptr_t luaH_dummynode = REBASE(0x3eb1ca0);
        const uintptr_t luaH_new = REBASE(0x7eaa70);
        const uintptr_t luaL_argerrorl = REBASE(0x7e7670);
        const uintptr_t luaL_checkstring = REBASE(0x7e8c00);
        const uintptr_t luaL_checktype = REBASE(0x7e7cc0);
        const uintptr_t luaL_error = REBASE(0x7e7cc0);
        const uintptr_t luaL_errorl = REBASE(0x7f6aa0);
        const uintptr_t luaL_findtable = REBASE(0x7e7d10);
        const uintptr_t luaL_getmetafield = REBASE(0x7c8e80);
        const uintptr_t luaL_register = REBASE(0x7e83c7);
        const uintptr_t luaL_testudata = REBASE(0x7f8d86);
        const uintptr_t luaL_tostring = REBASE(0x7e84e0);
        const uintptr_t luaL_typeerrorL = REBASE(0x7e8c00);
        const uintptr_t luaM_free = REBASE(0x7f2b10);
        const uintptr_t luaM_freegco = REBASE(0x7f3040);
        const uintptr_t luaM_toobig = REBASE(0x7f6a40);
        const uintptr_t luaM_visitgco = REBASE(0x7f29b0);
        const uintptr_t luaO_chunkid = REBASE(0x7f5740);
        const uintptr_t luaO_nilobject = REBASE(0x7e1774);
        const uintptr_t luaopen_base = REBASE(0x3eb42d0);
        const uintptr_t luaopen_math = REBASE(0x3ebd7a0);
        const uintptr_t luaT_eventnames = REBASE(0x5ea73e8);
        const uintptr_t luaT_init = REBASE(0x7e8ee0);
        const uintptr_t luaT_typenames = REBASE(0x6345b08);
        const uintptr_t luaV_gettable = REBASE(0x7f9070);
        const uintptr_t luaV_settable = REBASE(0x7f9570);
        const uintptr_t luaVM_load = REBASE(0x7e0190);
        const uintptr_t newgcoblock = REBASE(0x7f3110);
        const uintptr_t print = REBASE(0x82d5b0);
        const uintptr_t pseudo2addr = REBASE(0x27d3fc0);
        const uintptr_t pusherror = REBASE(0x7e0190);
    } // namespace Luau

    namespace Task
    {
        const uintptr_t cancel = REBASE(0x1f9c520);
        const uintptr_t defer = REBASE(0x1f9c830);
        const uintptr_t desynchronize = REBASE(0x1f9ce70);
        const uintptr_t spawn = REBASE(0x1f9d710);
        const uintptr_t synchronize = REBASE(0x1f9d890);
        const uintptr_t wait = REBASE(0x1f9da90);
    } // namespace Task

    namespace Coroutine
    {
        const uintptr_t close = REBASE(0x3eb4700);
        const uintptr_t create = REBASE(0x3eb45e0);
        const uintptr_t resume = REBASE(0x3eb4830);
    } // namespace Coroutine

    namespace Signals
    {
        const uintptr_t FireMouseHoverEnter = REBASE(0x4ea2af0);
        const uintptr_t FireMouseHoverLeave = REBASE(0x4ea2ce0);
        const uintptr_t FireTouchInterest = REBASE(0x1b72870);
    } // namespace Signals

    namespace IsParallel
    {
        const uintptr_t ActorRequired_Call = REBASE(0x1e78f60);
        const uintptr_t ActorRequired_Prop = REBASE(0x1e79180);
        const uintptr_t Connection_Disconnect = REBASE(0x1e924e0);
        const uintptr_t Event_Connect = REBASE(0x1e91390);
        const uintptr_t Event_ConnectParallel = REBASE(0x1e917c0);
        const uintptr_t Event_Once = REBASE(0x1e94ef0);
        const uintptr_t EventAccess = REBASE(0x1e74de0);
        const uintptr_t FilterDescendants = REBASE(0x1e9ec40);
        const uintptr_t FunctionCall = REBASE(0x1e78f60);
        const uintptr_t Instance_fromExisting = REBASE(0x1ef7e90);
        const uintptr_t LocalSafe_Call = REBASE(0x1e78f60);
        const uintptr_t LocalSafe_Write = REBASE(0x1e79180);
        const uintptr_t PropertyRead = REBASE(0x1e74de0);
        const uintptr_t PropertyWrite = REBASE(0x1e79180);
        const uintptr_t ScriptConnect = REBASE(0x1e917c0);
    } // namespace IsParallel

    // other
    const uintptr_t AttachRobloxExtraSpace = REBASE(0x1f0e250);
    const uintptr_t CastArgs = REBASE(0x20a5aa0);
    const uintptr_t closestate = REBASE(0x7e00d0);
    const uintptr_t ConnectionDisconnect = REBASE(0x27b7ee0);
    const uintptr_t EnableLoadModule = REBASE(0x1fb61c0);
    const uintptr_t GetCapabilities = REBASE(0x78f8d0);
    const uintptr_t GetContextObject = REBASE(0x1e72f50);
    const uintptr_t GetCurrentThreadId = REBASE(0x27a95b0);
    const uintptr_t GetFFlag = REBASE(0x2885f0);
    const uintptr_t GetGlobalState = REBASE(0x1e72f50);
    const uintptr_t GetGlobalStateForInstance = REBASE(0x1e68150);
    const uintptr_t loadsafe = REBASE(0x805c60);
    const uintptr_t LockViolationInstanceCrash = REBASE(0x6341d78);
    const uintptr_t LockViolationScriptCrash = REBASE(0x61d6600);
    const uintptr_t LuaStepIntervalMsOverrideEnabled = REBASE(0x61d9278);
    const uintptr_t markroot = REBASE(0x7f4450);
    const uintptr_t OpcodeLookupTable = REBASE(0x2021560);
    const uintptr_t PhysicsSenderMaxBandwidthBps = REBASE(0x626f7c8);
    const uintptr_t Register = REBASE(0x17a1bd0);
    const uintptr_t RobloxLogCrash = REBASE(0x27b1a20);
    const uintptr_t SetFFlag = REBASE(0x27dc880);
    const uintptr_t traversetable = REBASE(0x7f5560);
    const uintptr_t WebSocketServiceEnableClientCreation = REBASE(0x61cc6e0);
    const uintptr_t WndProcessCheck = REBASE(0x5e856f0);
} // namespace Offsets

namespace Structs
{
    inline constexpr uintptr_t L_global = 0x60;
    inline constexpr uintptr_t g_gcstate = 0x45;
    inline constexpr uintptr_t g_freepages = 0x1e0;
} // namespace Structs
