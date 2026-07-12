// dumped by nick
// date: 2026-07-09 03:00:53
// took 16.2s
// success rate: 96.9%

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
        const uintptr_t BitMap = HREBASE(0x1487b38);
        const uintptr_t ControlFlowGuard = HREBASE(0xadd50);

        inline constexpr uint8_t ByteShift = 15;
        inline constexpr uint8_t PageShift = 12;
        inline constexpr uint32_t PageSize = 0x1000;
        inline constexpr uint32_t PageMask = 0xfff;
        inline constexpr uint8_t BitMask = 7;

        // other
        static const uint64_t patcheb[] = {
            0x1e943, 0x85b44, 0xae088, 0x3a7b68, 0xcfa838, 
            0x122a46c, 0x123584c, 0x1259afc
        };
    } // namespace Hyperion

    namespace DataModel
    {
        const uintptr_t DataModelDeleterPointer = REBASE(0x7be6d0);
        const uintptr_t FakeDataModelPointer = REBASE(0x84a9e98);
    } // namespace DataModel

    namespace ScriptContext
    {
        inline constexpr uintptr_t RequireBypass = 0x198;
        const uintptr_t Resume = REBASE(0x1ecc7a0);
    } // namespace ScriptContext

    namespace BasePart
    {
        inline constexpr uintptr_t Overlap = 0x1f0;
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
        const uintptr_t GetIdentityStruct = REBASE(0x2784860);
        const uintptr_t GetTlsPointer = REBASE(0x1e608d0);
        const uintptr_t Impersonator = REBASE(0x654460);
    } // namespace RobloxThread

    namespace TaskScheduler
    {
        inline constexpr uintptr_t JobName = 0x38;
        inline constexpr uintptr_t JobsEnd = 0x1b0;
        inline constexpr uintptr_t JobsStart = 0x7eded9c;
        inline constexpr uintptr_t MaxFps = 0x1d0;
        const uintptr_t RawScheduler = REBASE(0x79bf648);
        const uintptr_t TaskSchedulerTargetFps = REBASE(0x5f81f40);
    } // namespace TaskScheduler

    namespace Instance
    {
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        const uintptr_t GetProperty = REBASE(0x1e4e450);
        const uintptr_t Push = REBASE(0x1e59750);
    } // namespace Instance

    namespace Property
    {
        const uintptr_t HashTableLookup = REBASE(0x2ca7b60);
        const uintptr_t KTable = REBASE(0x804ab10);
    } // namespace Property

    namespace Raknet
    {
        const uintptr_t HandleConnectionState = REBASE(0x24107b0);
        const uintptr_t ProcessNetworkPacket = REBASE(0x408e840);
        const uintptr_t ReportNetworkError = REBASE(0x24055b0);
        const uintptr_t Send = REBASE(0x3ebaf90);
    } // namespace Raknet

    namespace Luau
    {
        const uintptr_t currfuncname = REBASE(0x7e1620);
        const uintptr_t f_luaopen = REBASE(0x7e0ab0);
        const uintptr_t lua_break = REBASE(0x7e0b60);
        const uintptr_t lua_clock = REBASE(0x7ee18a);
        const uintptr_t lua_exception = REBASE(0x7dfb50);
        const uintptr_t lua_getfield = REBASE(0x7e2e30);
        const uintptr_t lua_newstate = REBASE(0x7da9a0);
        const uintptr_t lua_pushfstringL = REBASE(0x7dd240);
        const uintptr_t lua_pushstring = REBASE(0x7dd5c0);
        const uintptr_t lua_pushvfstring = REBASE(0x7dd960);
        const uintptr_t lua_resetthread = REBASE(0x7db810);
        const uintptr_t lua_setfield = REBASE(0x7de910);
        const uintptr_t lua_yield = REBASE(0x7e0dc0);
        const uintptr_t luaB_assert = REBASE(0x3e80840);
        const uintptr_t luaB_error = REBASE(0x3e80300);
        const uintptr_t luaB_gcinfo = REBASE(0x3e80730);
        const uintptr_t luaB_getfenv = REBASE(0x3e80490);
        const uintptr_t luaB_getmetatable = REBASE(0x1eda570);
        const uintptr_t luaB_newproxy = REBASE(0x3e80960);
        const uintptr_t luaB_next = REBASE(0x3e807e0);
        const uintptr_t luaB_pcall = REBASE(0x7dc3a0);
        const uintptr_t luaB_pcallrun = REBASE(0x7dd110);
        const uintptr_t luaB_print = REBASE(0x3e800e0);
        const uintptr_t luaB_rawequal = REBASE(0x3e805d0);
        const uintptr_t luaB_rawget = REBASE(0x3e80620);
        const uintptr_t luaB_rawlen = REBASE(0x3e806d0);
        const uintptr_t luaB_rawset = REBASE(0x3e80670);
        const uintptr_t luaB_setfenv = REBASE(0x1f90170);
        const uintptr_t luaB_setmetatable = REBASE(0x3e803d0);
        const uintptr_t luaB_tonumber = REBASE(0x3e801c0);
        const uintptr_t luaB_tostring = REBASE(0x3e80960);
        const uintptr_t luaB_type = REBASE(0x3e80760);
        const uintptr_t luaB_typeof = REBASE(0x3e807a0);
        const uintptr_t luaC_step = REBASE(0x7ee130);
        const uintptr_t luaD_rawrunprotected = REBASE(0x7e1070);
        const uintptr_t luaF_freeproto = REBASE(0x7ec650);
        const uintptr_t luaF_newlclosure = REBASE(0x7ec920);
        const uintptr_t luaF_newproto = REBASE(0x7ec9d0);
        const uintptr_t luaG_runerror = REBASE(0x1f7d400);
        const uintptr_t luaG_runerrorl = REBASE(0x7f0b70);
        const uintptr_t luaH_dummynode = REBASE(0x3e7e8d0);
        const uintptr_t luaH_new = REBASE(0x7e4c60);
        const uintptr_t luaL_argerrorl = REBASE(0x7e18b0);
        const uintptr_t luaL_checkstring = REBASE(0x7e2e30);
        const uintptr_t luaL_checktype = REBASE(0x7e1f00);
        const uintptr_t luaL_error = REBASE(0x7e1f00);
        const uintptr_t luaL_errorl = REBASE(0x7f0b70);
        const uintptr_t luaL_findtable = REBASE(0x7e1f50);
        const uintptr_t luaL_getmetafield = REBASE(0x1e619e0);
        const uintptr_t luaL_register = REBASE(0x7e25d0);
        const uintptr_t luaL_testudata = REBASE(0x7f2e86);
        const uintptr_t luaL_tostring = REBASE(0x7e2710);
        const uintptr_t luaL_typeerrorL = REBASE(0x7e2e30);
        const uintptr_t luaM_free = REBASE(0x7eccb0);
        const uintptr_t luaM_freegco = REBASE(0x7ed1f0);
        const uintptr_t luaM_toobig = REBASE(0x7f0b10);
        const uintptr_t luaM_visitgco = REBASE(0x7ecb50);
        const uintptr_t luaO_chunkid = REBASE(0x7ef800);
        const uintptr_t luaO_nilobject = REBASE(0x7db9c4);
        const uintptr_t luaopen_base = REBASE(0x3e80f10);
        const uintptr_t luaopen_math = REBASE(0x3e8a3f0);
        const uintptr_t luaT_eventnames = REBASE(0x5e47b58);
        const uintptr_t luaT_init = REBASE(0x7e3110);
        const uintptr_t luaT_typenames = REBASE(0x62e33a8);
        const uintptr_t luaV_gettable = REBASE(0x7f2fa0);
        const uintptr_t luaV_settable = REBASE(0x7f3670);
        const uintptr_t luaVM_load = REBASE(0x7da3b0);
        const uintptr_t newgcoblock = REBASE(0x7ed2c0);
        const uintptr_t print = REBASE(0x8273f0);
        const uintptr_t pseudo2addr = REBASE(0x27af270);
        const uintptr_t pusherror = REBASE(0x7da3b0);
    } // namespace Luau

    namespace Task
    {
        const uintptr_t cancel = REBASE(0x1f75f60);
        const uintptr_t defer = REBASE(0x1f76270);
        const uintptr_t desynchronize = REBASE(0x1f768b0);
        const uintptr_t spawn = REBASE(0x1f77150);
        const uintptr_t synchronize = REBASE(0x1f772d0);
        const uintptr_t wait = REBASE(0x1f774d0);
    } // namespace Task

    namespace Coroutine
    {
        const uintptr_t close = REBASE(0x3e81340);
        const uintptr_t create = REBASE(0x3e81220);
    } // namespace Coroutine

    namespace Signals
    {
        const uintptr_t FireMouseHoverEnter = REBASE(0x4e4e840);
        const uintptr_t FireMouseHoverLeave = REBASE(0x4e4ea30);
        const uintptr_t FireTouchInterest = REBASE(0x1b4a710);
    } // namespace Signals

    namespace IsParallel
    {
        const uintptr_t ActorRequired_Call = REBASE(0x1e527d6);
        const uintptr_t ActorRequired_Prop = REBASE(0x1e529d0);
        const uintptr_t Connection_Disconnect = REBASE(0x1e6c090);
        const uintptr_t Event_Connect = REBASE(0x1e6af30);
        const uintptr_t Event_ConnectParallel = REBASE(0x1e6b360);
        const uintptr_t Event_Once = REBASE(0x1e6eab0);
        const uintptr_t EventAccess = REBASE(0x1e4e630);
        const uintptr_t FilterDescendants = REBASE(0x1e7e590);
        const uintptr_t FunctionCall = REBASE(0x1e527d6);
        const uintptr_t Instance_fromExisting = REBASE(0x1ed1960);
        const uintptr_t LocalSafe_Call = REBASE(0x1e527d6);
        const uintptr_t LocalSafe_Write = REBASE(0x1e529d0);
        const uintptr_t PropertyRead = REBASE(0x1e4e630);
        const uintptr_t PropertyWrite = REBASE(0x1e529d0);
        const uintptr_t ScriptConnect = REBASE(0x1e6b360);
    } // namespace IsParallel

    // other
    const uintptr_t AttachRobloxExtraSpace = REBASE(0x1ee7cb0);
    const uintptr_t CastArgs = REBASE(0x207e0c0);
    const uintptr_t closestate = REBASE(0x7da2f0);
    const uintptr_t ConnectionDisconnect = REBASE(0x2793190);
    const uintptr_t EnableLoadModule = REBASE(0x1f8fba0);
    const uintptr_t GetCapabilities = REBASE(0x789c90);
    const uintptr_t GetContextObject = REBASE(0x1e4c7a0);
    const uintptr_t GetCurrentThreadId = REBASE(0x2784860);
    const uintptr_t GetFFlag = REBASE(0x2870a0);
    const uintptr_t GetGlobalState = REBASE(0x4ad1081f);
    const uintptr_t GetGlobalStateForInstance = REBASE(0x1e41a60);
    const uintptr_t loadsafe = REBASE(0x7ffec0);
    const uintptr_t LockViolationInstanceCrash = REBASE(0x62df838);
    const uintptr_t LockViolationScriptCrash = REBASE(0x6175048);
    const uintptr_t LuaStepIntervalMsOverrideEnabled = REBASE(0x6177dd0);
    const uintptr_t markroot = REBASE(0x7ee630);
    const uintptr_t OpcodeLookupTable = REBASE(0x1ffb012);
    const uintptr_t PhysicsSenderMaxBandwidthBps = REBASE(0x620df40);
    const uintptr_t Register = REBASE(0x177e390);
    const uintptr_t RobloxLogCrash = REBASE(0x278ccd0);
    const uintptr_t SetFFlag = REBASE(0x27b7ba0);
    const uintptr_t traversetable = REBASE(0x7ef620);
    const uintptr_t WebSocketServiceEnableClientCreation = REBASE(0x616acb0);
    const uintptr_t WndProcessCheck = REBASE(0x5e26780);
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
