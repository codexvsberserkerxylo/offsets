// dumped by nick
// date: 2026-07-07 19:09:08
// took 13.9s
// success rate: 96.3%

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
    inline constexpr const char* LiveChannel = "version-90f2fddd3b244ff6";

    namespace Hyperion
    {
        const uintptr_t BitMap = HREBASE(0x1512ca0);
        const uintptr_t ControlFlowGuard = HREBASE(0xf85bd0);

        inline constexpr uint8_t ByteShift = 15;
        inline constexpr uint8_t PageShift = 12;
        inline constexpr uint32_t PageSize = 0x1000;
        inline constexpr uint32_t PageMask = 0xfff;
        inline constexpr uint8_t BitMask = 7;

        // other
        static const uint64_t patcheb[] = {
            0x23b75c, 0x890f7c, 0xbf57c8, 0xedb3f8, 0xf6f6e4, 
            0xf73cf8, 0xfc1fb3, 0x1212fcc
        };
    } // namespace Hyperion

    namespace DataModel
    {
        const uintptr_t DataModelDeleterPointer = REBASE(0x7eed96);
        const uintptr_t FakeDataModelPointer = REBASE(0x7cb3d78);
    } // namespace DataModel

    namespace ScriptContext
    {
        inline constexpr uintptr_t RequireBypass = 0x198;
        const uintptr_t Resume = REBASE(0x1deadc0);
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
        const uintptr_t GetIdentityStruct = REBASE(0x4aa45d0);
        const uintptr_t GetTlsPointer = REBASE(0x1d15660);
        const uintptr_t Impersonator = REBASE(0x647200);
    } // namespace RobloxThread

    namespace TaskScheduler
    {
        inline constexpr uintptr_t JobName = 0x18;
        inline constexpr uintptr_t JobsEnd = 0x1b0;
        inline constexpr uintptr_t JobsStart = 0xb0;
        inline constexpr uintptr_t MaxFps = 0x1d0;
        const uintptr_t RawScheduler = REBASE(0x787d470);
        const uintptr_t TaskSchedulerTargetFps = REBASE(0x6a2ab30);
    } // namespace TaskScheduler

    namespace Instance
    {
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        const uintptr_t GetProperty = REBASE(0xc97040);
        const uintptr_t Push = REBASE(0x1d0e240);
    } // namespace Instance

    namespace Property
    {
        const uintptr_t HashTableLookup = REBASE(0x1ccee00);
        const uintptr_t KTable = REBASE(0x8245c20);
    } // namespace Property

    namespace Raknet
    {
        const uintptr_t HandleConnectionState = REBASE(0xa5b530);
        const uintptr_t ProcessNetworkPacket = REBASE(0x31b0e50);
        const uintptr_t ReportNetworkError = REBASE(0xa4fee0);
        const uintptr_t Send = REBASE(0x30f3db0);
    } // namespace Raknet

    namespace Luau
    {
        const uintptr_t currfuncname = REBASE(0x1ce79b0);
        const uintptr_t f_luaopen = REBASE(0x4756220);
        const uintptr_t lua_break = REBASE(0x47562d0);
        const uintptr_t lua_clock = REBASE(0x475ab1a);
        const uintptr_t lua_exception = REBASE(0x47552c0);
        const uintptr_t lua_getfield = REBASE(0x47585a0);
        const uintptr_t lua_newstate = REBASE(0x4754320);
        const uintptr_t lua_pushfstringL = REBASE(0x4751410);
        const uintptr_t lua_pushstring = REBASE(0x4751790);
        const uintptr_t lua_pushvfstring = REBASE(0x4751b30);
        const uintptr_t lua_resetthread = REBASE(0x4755190);
        const uintptr_t lua_setfield = REBASE(0x1735752);
        const uintptr_t lua_yield = REBASE(0x4756530);
        const uintptr_t luaB_assert = REBASE(0x476b590);
        const uintptr_t luaB_error = REBASE(0x476b050);
        const uintptr_t luaB_gcinfo = REBASE(0x476b480);
        const uintptr_t luaB_getfenv = REBASE(0x476b1e0);
        const uintptr_t luaB_getmetatable = REBASE(0x1d3c9a0);
        const uintptr_t luaB_newproxy = REBASE(0x476b6b0);
        const uintptr_t luaB_next = REBASE(0x476b530);
        const uintptr_t luaB_pcall = REBASE(0x4750590);
        const uintptr_t luaB_pcallrun = REBASE(0x47512e0);
        const uintptr_t luaB_print = REBASE(0x476ae30);
        const uintptr_t luaB_rawequal = REBASE(0x2672fd0);
        const uintptr_t luaB_rawget = REBASE(0x476b370);
        const uintptr_t luaB_rawlen = REBASE(0x476b420);
        const uintptr_t luaB_rawset = REBASE(0x476b3c0);
        const uintptr_t luaB_setfenv = REBASE(0x1e3a200);
        const uintptr_t luaB_setmetatable = REBASE(0x476b120);
        const uintptr_t luaB_tonumber = REBASE(0x476af10);
        const uintptr_t luaB_tostring = REBASE(0x476b6b0);
        const uintptr_t luaB_type = REBASE(0x476b4b0);
        const uintptr_t luaB_typeof = REBASE(0x476b4f0);
        const uintptr_t luaC_step = REBASE(0x475aac0);
        const uintptr_t luaD_rawrunprotected = REBASE(0x47567e0);
        const uintptr_t luaF_freeproto = REBASE(0x47810b0);
        const uintptr_t luaF_newlclosure = REBASE(0x4781380);
        const uintptr_t luaF_newproto = REBASE(0x4781430);
        const uintptr_t luaG_runerror = REBASE(0x1e4f090);
        const uintptr_t luaG_runerrorl = REBASE(0x4759350);
        const uintptr_t luaH_dummynode = REBASE(0x4769620);
        const uintptr_t luaH_new = REBASE(0x4779e80);
        const uintptr_t luaL_argerrorl = REBASE(0x4757020);
        const uintptr_t luaL_checkstring = REBASE(0x47585a0);
        const uintptr_t luaL_checktype = REBASE(0x4757670);
        const uintptr_t luaL_error = REBASE(0x4757670);
        const uintptr_t luaL_errorl = REBASE(0x4757670);
        const uintptr_t luaL_findtable = REBASE(0x47576c0);
        const uintptr_t luaL_getmetafield = REBASE(0x1d31880);
        const uintptr_t luaL_register = REBASE(0x4757d40);
        const uintptr_t luaL_testudata = REBASE(0x4782d16);
        const uintptr_t luaL_tostring = REBASE(0x1ce79b0);
        const uintptr_t luaL_typeerrorL = REBASE(0x47585a0);
        const uintptr_t luaM_free = REBASE(0x4777a10);
        const uintptr_t luaM_freegco = REBASE(0x4777f50);
        const uintptr_t luaM_toobig = REBASE(0x47592f0);
        const uintptr_t luaM_visitgco = REBASE(0x47778b0);
        const uintptr_t luaO_chunkid = REBASE(0x4787380);
        const uintptr_t luaO_nilobject = REBASE(0x474fbb4);
        const uintptr_t luaopen_base = REBASE(0x476bc60);
        const uintptr_t luaopen_math = REBASE(0x17353a0);
        const uintptr_t luaT_eventnames = REBASE(0x69ea408);
        const uintptr_t luaT_init = REBASE(0x4778330);
        const uintptr_t luaT_typenames = REBASE(0x5e3b6d0);
        const uintptr_t luaV_gettable = REBASE(0x4782e30);
        const uintptr_t luaV_settable = REBASE(0x4783500);
        const uintptr_t luaVM_load = REBASE(0x4615df0);
        const uintptr_t newgcoblock = REBASE(0x4778020);
        const uintptr_t print = REBASE(0x46d3410);
        const uintptr_t pseudo2addr = REBASE(0x4ad4890);
        const uintptr_t pusherror = REBASE(0x4753d60);
    } // namespace Luau

    namespace Task
    {
        const uintptr_t cancel = REBASE(0x1e5f870);
        const uintptr_t defer = REBASE(0x1e5fb80);
        const uintptr_t desynchronize = REBASE(0x1e601c0);
        const uintptr_t spawn = REBASE(0x1e60a60);
        const uintptr_t synchronize = REBASE(0x1e60be0);
        const uintptr_t wait = REBASE(0x1e60de0);
    } // namespace Task

    namespace Coroutine
    {
        const uintptr_t close = REBASE(0x476c090);
        const uintptr_t create = REBASE(0x476bf70);
    } // namespace Coroutine

    namespace Signals
    {
        const uintptr_t FireMouseHoverEnter = REBASE(0x264c530);
        const uintptr_t FireMouseHoverLeave = REBASE(0x264c720);
        const uintptr_t FireTouchInterest = REBASE(0x2abeb40);
    } // namespace Signals

    namespace IsParallel
    {
        const uintptr_t ActorRequired_Call = REBASE(0x1d072c6);
        const uintptr_t ActorRequired_Prop = REBASE(0x1d074c0);
        const uintptr_t Connection_Disconnect = REBASE(0x1d22990);
        const uintptr_t Event_Connect = REBASE(0x1d21830);
        const uintptr_t Event_ConnectParallel = REBASE(0x1d21c60);
        const uintptr_t Event_Once = REBASE(0x1d253b0);
        const uintptr_t EventAccess = REBASE(0x1d031b0);
        const uintptr_t FilterDescendants = REBASE(0x1d8a7e0);
        const uintptr_t FunctionCall = REBASE(0x1d072c6);
        const uintptr_t Instance_fromExisting = REBASE(0x1dcaf00);
        const uintptr_t LocalSafe_Call = REBASE(0x1d072c6);
        const uintptr_t LocalSafe_Write = REBASE(0x1d074c0);
        const uintptr_t PropertyRead = REBASE(0x1d031b0);
        const uintptr_t PropertyWrite = REBASE(0x1d074c0);
        const uintptr_t ScriptConnect = REBASE(0x1d21c60);
    } // namespace IsParallel

    // other
    const uintptr_t AttachRobloxExtraSpace = REBASE(0x1d4a2c0);
    const uintptr_t CastArgs = REBASE(0x3afe900);
    const uintptr_t closestate = REBASE(0x4753ca0);
    const uintptr_t ConnectionDisconnect = REBASE(0x4ac01d0);
    const uintptr_t EnableLoadModule = REBASE(0x1e39c30);
    const uintptr_t GetCapabilities = REBASE(0x47b6b40);
    const uintptr_t GetContextObject = REBASE(0x4ad4515a);
    const uintptr_t GetCurrentThreadId = REBASE(0x4aa45d0);
    const uintptr_t GetFFlag = REBASE(0x2c6db0);
    const uintptr_t GetGlobalState = REBASE(0x1d2bab0);
    const uintptr_t GetGlobalStateForInstance = REBASE(0x1d17690);
    const uintptr_t loadsafe = REBASE(0x475c630);
    const uintptr_t LockViolationInstanceCrash = REBASE(0x5f19758);
    const uintptr_t LockViolationScriptCrash = REBASE(0x5f1faa8);
    const uintptr_t LuaStepIntervalMsOverrideEnabled = REBASE(0x5f2f370);
    const uintptr_t markroot = REBASE(0x475afc0);
    const uintptr_t OpcodeLookupTable = REBASE(0x33f4850);
    const uintptr_t PhysicsSenderMaxBandwidthBps = REBASE(0x5dd28b0);
    const uintptr_t Register = REBASE(0x2c219d0);
    const uintptr_t RobloxLogCrash = REBASE(0x4abb1f0);
    const uintptr_t SetFFlag = REBASE(0x4ae8140);
    const uintptr_t traversetable = REBASE(0x475bfb0);
    const uintptr_t WebSocketServiceEnableClientCreation = REBASE(0x5e26e18);
    const uintptr_t WndProcessCheck = REBASE(0x5d36090);
} // namespace Offsets

namespace Structs
{
    inline constexpr uintptr_t g_gcstate = 0x41;
    inline constexpr uintptr_t g_freepages = 0x1d0;
    inline constexpr uintptr_t Proto_code = 0x68;
    inline constexpr uintptr_t Proto_p = 0x70;
    inline constexpr uintptr_t Proto_k = 0x60;
    inline constexpr uintptr_t Proto_lineinfo = 0x40;
    inline constexpr uintptr_t Proto_locvars = 0x48;
    inline constexpr uintptr_t Proto_upvalues = 0x48;
    inline constexpr uintptr_t Proto_debuginsn = 0x58;
} // namespace Structs
