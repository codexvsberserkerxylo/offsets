// dumped by nick
// date: 2026-08-06 16:31:54
// took 14.2s
// success rate: 64.3%
// ass dump sonnnnn
// fuck roblox

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
}; // enum ReflectionType

namespace Offsets
{
    inline constexpr const char* LiveChannel = "version-d584fb6c717a43d9";

    namespace Hyperion
    {
        const uintptr_t BitMap = HREBASE(0x161b338);
        const uintptr_t ControlFlowGuard = HREBASE(0x1364e20);

        inline constexpr uint8_t ByteShift = 15;
        inline constexpr uint8_t PageShift = 12;
        inline constexpr uint32_t PageSize = 0x1000;
        inline constexpr uint32_t PageMask = 0xfff;
        inline constexpr uint8_t BitMask = 7;

        // other
        static const uint64_t patcheb[] = {
            0x24142c, 0x32ca18, 0x65430c, 0x8b1428, 0xc546cf, 
            0x11774f0, 0x117c970, 0x13c3cf0
        };
    } // namespace Hyperion

    namespace DataModel
    {
        const uintptr_t DataModelDeleterPointer = REBASE(0x91b738);
        const uintptr_t FakeDataModelPointer = REBASE(0x8a5d748);
    } // namespace DataModel

    namespace ScriptContext
    {
        const uintptr_t Resume = REBASE(0x22fa7b0);
        inline constexpr uintptr_t ToResume = 0x7d0;
    } // namespace ScriptContext

    namespace BasePart
    {
        inline constexpr uintptr_t Primitive = 0x128;
        inline constexpr uintptr_t Overlap = 0x1f8; // or 0x1f0 ??
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
        inline constexpr uintptr_t ModuleScript = 0x138;
        inline constexpr uintptr_t Script = 0x190;
    } // namespace ByteCode

    namespace RobloxThread
    {
        const uintptr_t GetIdentityStruct = REBASE(0x8ead50);
        const uintptr_t GetTlsPointer = REBASE(0x4230); // 0x40e0
        const uintptr_t IdentityPtr = REBASE(0x83580f0); // idk
        const uintptr_t Impersonator = REBASE(0x78b6a0);
    } // namespace RobloxThread

    namespace TaskScheduler
    {
        inline constexpr uintptr_t JobName = 0x18;
        inline constexpr uintptr_t JobsEnd = 0xd0;
        inline constexpr uintptr_t JobsStart = 0xc8;
        inline constexpr uintptr_t MaxFps = 0xb0;
        const uintptr_t Pointer = REBASE(0x879a6e8);
        const uintptr_t TargetFps = REBASE(0x879a798);
    } // namespace TaskScheduler

    namespace Instance
    {
        const uintptr_t push = REBASE(0x1E51680); // idk
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        inline constexpr uintptr_t getter = 0x18;
        inline constexpr uintptr_t scriptable = 0x90;
        inline constexpr uintptr_t ttype = 0x68;
        inline constexpr uintptr_t ttype_number = 0x30;
    } // namespace Instance

    namespace Property
    {
        const uintptr_t HashTableLookup = REBASE(0xd65cd0);
        const uintptr_t KTable = REBASE(0x7E73AE0); // idk
    } // namespace Property

    namespace Raknet
    {
        const uintptr_t ProcessNetworkPacket = REBASE(0x4296e30);
        const uintptr_t Receive = REBASE(0x4281e50);
    } // namespace Raknet

    namespace Luau
    {
        const uintptr_t currfuncname = REBASE(0x93b760);
        const uintptr_t f_luaopen = REBASE(0x946650);
        const uintptr_t lua_break = REBASE(0x948f50);
        const uintptr_t lua_exception = REBASE(0x945bf0);
        const uintptr_t lua_getfield = REBASE(0x93b8c0);
        const uintptr_t lua_pushstring = REBASE(0x93e0c0);
        const uintptr_t lua_pushvfstring = REBASE(0x939060);
        const uintptr_t lua_yield = REBASE(0x868720);
        const uintptr_t luaB_setfenv = REBASE(0x24190c0);
        const uintptr_t luaD_throw = REBASE(0x945d80);
        const uintptr_t luaF_freeproto = REBASE(0x955d90);
        const uintptr_t luaG_runerror = REBASE(0x23f7ca0);
        const uintptr_t luaG_runerrorl = REBASE(0x978940);
        const uintptr_t luaH_dummynode = REBASE(0x610b760);
        const uintptr_t luaL_argerrorl = REBASE(0x93b840);
        const uintptr_t luaL_checkstring = REBASE(0x93b8c0);
        const uintptr_t luaL_checktype = REBASE(0x93c490);
        const uintptr_t luaL_error = REBASE(0x93c490);
        const uintptr_t luaL_errorl = REBASE(0x978940);
        const uintptr_t luaL_register = REBASE(0x93f570);
        const uintptr_t luaL_testudata = REBASE(0x95c3ee);
        const uintptr_t luaL_tostring = REBASE(0x93ebc0);
        const uintptr_t luaL_typeerrorL = REBASE(0x93b8c0);
        const uintptr_t luaM_free = REBASE(0x954790);
        const uintptr_t luaM_freegco = REBASE(0x954930);
        const uintptr_t luaM_toobig = REBASE(0x9782f0);
        const uintptr_t luaM_visitgco = REBASE(0x9546e0);
        const uintptr_t luaO_nilobject = REBASE(0x610b898);
        const uintptr_t luaT_eventnames = REBASE(0x610b808);
        const uintptr_t luaT_typenames = REBASE(0x61482c8);
        const uintptr_t luau_execute = REBASE(0x25049b0);
        const uintptr_t luaV_gettable = REBASE(0x957ce0);
        const uintptr_t luaV_settable = REBASE(0x958be0);
        const uintptr_t luaVM_load = REBASE(0x227cc60);
        const uintptr_t print = REBASE(0x91f9a0);
        const uintptr_t pseudo2addr = REBASE(0x2c9d040);
        const uintptr_t pusherror = REBASE(0x935340);
        const uintptr_t OpcodeLookupTable = REBASE(0x6358A60); // idk
    } // namespace Luau

    namespace Task
    {
        const uintptr_t cancel = REBASE(0x23f7630);
        const uintptr_t defer = REBASE(0x23f68e0);
        const uintptr_t desynchronize = REBASE(0x23f5c00);
        const uintptr_t spawn = REBASE(0x23f6d60);
        const uintptr_t synchronize = REBASE(0x23f5620);
        const uintptr_t wait = REBASE(0x23f73c0);
    } // namespace Task

    namespace Coroutine
    {
        const uintptr_t close = REBASE(0x4176480);
        const uintptr_t create = REBASE(0x4175B90);
        const uintptr_t isyieldable = REBASE(0x4176400);
        const uintptr_t resume = REBASE(0x4b7e960);
        const uintptr_t running = REBASE(0x4176390); // ??
        const uintptr_t status = REBASE(0x4b7e6a0);
        const uintptr_t wrap = REBASE(0x41760D0);
        const uintptr_t yield = REBASE(0x4176330);
        const uintptr_t idk = REBASE(0x4174500); // status or resume prob idk
    } // namespace Coroutine

    namespace Signals
    {
    } // namespace Signals

    namespace IsParallel
    {
        const uintptr_t ActorRequired_Call = REBASE(0x225fd30);
        const uintptr_t ActorRequired_Prop = REBASE(0x225fba0);
        const uintptr_t Connection_Disconnect = REBASE(0x2291cd0);
        const uintptr_t Event_Connect = REBASE(0x22907d0);
        const uintptr_t Event_ConnectParallel = REBASE(0x2290a60);
        const uintptr_t Event_Once = REBASE(0x2290e30);
        const uintptr_t EventAccess = REBASE(0x225fec0);
        const uintptr_t FilterDescendants = REBASE(0x22b4eb0);
        const uintptr_t FunctionCall = REBASE(0x225fd30);
        const uintptr_t Instance_fromExisting = REBASE(0x232d7d0);
        const uintptr_t LocalSafe_Call = REBASE(0x225fd30);
        const uintptr_t LocalSafe_Write = REBASE(0x225fba0);
        const uintptr_t PropertyRead = REBASE(0x2270940);
        const uintptr_t PropertyWrite = REBASE(0x225fba0);
        const uintptr_t ScriptConnect = REBASE(0x2290a60);
    } // namespace IsParallel

    // other
    const uintptr_t CastArgs = REBASE(0x8eec00);
    const uintptr_t closestate = REBASE(0x22a47f0);
    const uintptr_t EnableLoadModule = REBASE(0x610b898);
    const uintptr_t GetCapabilities = REBASE(0x8eb520);
    const uintptr_t GetContextObject = REBASE(0x2251160);
    const uintptr_t GetCurrentThreadId = REBASE(0x4290);
    const uintptr_t GetFFlag = REBASE(0x2ca72e0);
    const uintptr_t GetGlobalState = REBASE(0x276bd70);
    const uintptr_t LockViolationInstanceCrash = REBASE(0x6d638d0);
    const uintptr_t LockViolationScriptCrash = REBASE(0x6c9f1f0);
    const uintptr_t LuaStepIntervalMsOverrideEnabled = REBASE(0x6ca1850);
    const uintptr_t PhysicsSenderMaxBandwidthBps = REBASE(0x6ce61f8);
    const uintptr_t RobloxLogCrash = REBASE(0x2c9ad80);
    const uintptr_t SetFFlag = REBASE(0x2ca6760);
    const uintptr_t WebSocketServiceEnableClientCreation = REBASE(0x6c9b788);
    const uintptr_t WndProcessCheck = REBASE(0x6b46bb0);
} // namespace Offsets

namespace Structs
{
    inline constexpr uintptr_t CommonHeader_memcat = 0x2;
    inline constexpr uintptr_t Proto_code = 0x58;
    inline constexpr uintptr_t Proto_p = 0x18;
    inline constexpr uintptr_t Proto_k = 0x50;
    inline constexpr uintptr_t Proto_locvars = 0x68;
    inline constexpr uintptr_t Proto_upvalues = 0x20;
    inline constexpr uintptr_t Proto_debuginsn = 0x40;
} // namespace Structs
