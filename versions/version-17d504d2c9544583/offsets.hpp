// dumped by nick
// date: 2026-08-27 18:20:48
// took 17.1s
// success rate: 69.7%

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
    ScopedInstanceIdentity = 0x68,
}; // enum ReflectionType

namespace Offsets
{
    inline constexpr const char* LiveChannel = "version-17d504d2c9544583";

    namespace Hyperion
    {
        const uintptr_t BitMap = HREBASE(0x1547a38);
        const uintptr_t ControlFlowGuard = HREBASE(0x13b5fb0);

        inline constexpr uint8_t ByteShift = 15;
        inline constexpr uint8_t PageShift = 12;
        inline constexpr uint32_t PageSize = 0x1000;
        inline constexpr uint32_t PageMask = 0xfff;
        inline constexpr uint8_t BitMask = 7;

        // other
        static const uint64_t patcheb[] = {
            0x23760c, 0x2a55d8, 0xe54c98, 0xf6c830, 0xf88d8c, 
            0xffde80, 0x13514a8, 0x14df398
        };
    } // namespace Hyperion

    namespace DataModel
    {
        const uintptr_t DataModelDeleterPointer = REBASE(0x1c4b438);
        const uintptr_t FakeDataModelPointer = REBASE(0x6d224c0);
        inline constexpr uintptr_t FakeToRealDataModel = 0x1d8;
        inline constexpr uintptr_t GameLoaded = 0x5c0;
        inline constexpr uintptr_t JobId = 0x118;
        inline constexpr uintptr_t PlaceId = 0x188;
        inline constexpr uintptr_t ScriptContext = 0x440;
        inline constexpr uintptr_t Children = 0x70;
    } // namespace DataModel

    namespace TaskScheduler
    {
        const uintptr_t RawScheduler = REBASE(0x7a9eb40);
        const uintptr_t Pointer = REBASE(0x89e0618);
        inline constexpr uintptr_t MaxFPS = 0xb0;
        inline constexpr uintptr_t JobStart = 0xc8;
        inline constexpr uintptr_t JobEnd = 0xd0;
        inline constexpr uintptr_t JobName = 0x18;
        const uintptr_t TargetFps = REBASE(0x89e06c8);
    } // namespace TaskScheduler

    namespace ByteCode
    {
        inline constexpr uintptr_t Pointer = 0x10;
        inline constexpr uintptr_t Size = 0x20;
        inline constexpr uintptr_t ModuleScript = 0x138;
        inline constexpr uintptr_t Script = 0x190;
    } // namespace ByteCode

    namespace ModuleScript
    {
        inline constexpr uintptr_t ByteCode = 0x138;
        inline constexpr uintptr_t GUID = 0xd0;
        inline constexpr uintptr_t Hash = 0x148;
    } // namespace ModuleScript

    namespace Script
    {
        inline constexpr uintptr_t ByteCode = 0x190;
        inline constexpr uintptr_t GUID = 0xd0;
        inline constexpr uintptr_t Hash = 0x1a0;
    } // namespace Script

    namespace ScriptContext
    {
        inline constexpr uintptr_t identity = 0x40;
        inline constexpr uintptr_t IsCoreScript = 0x168;
        inline constexpr uintptr_t RequireBypass = 0x9a0;
        const uintptr_t Resume = REBASE(0x40ce0b0);
        const uintptr_t TaskQueue = REBASE(0x4178670);
        inline constexpr uintptr_t userdata = 0x58;
    } // namespace ScriptContext

    namespace BasePart
    {
        inline constexpr uintptr_t Overlap = 0x1f8;
        inline constexpr uintptr_t Primitive = 0x188;
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

    namespace RobloxThread
    {
        const uintptr_t IdentityPtr = REBASE(0x7febd78);
        const uintptr_t GetIdentityStruct = REBASE(0x34f7520);
        const uintptr_t GetTlsPointer = REBASE(0x1420);
        const uintptr_t GetTlsPointer_wrapper = REBASE(0x4170);
        const uintptr_t Impersonator = REBASE(0x79d440);
        const uintptr_t rbxSpawn = REBASE(0x40d5880);
    } // namespace RobloxThread

    namespace Instance
    {
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        const uintptr_t GetModuleFromVMStateMap = REBASE(0x40dbef0);
        const uintptr_t GetPropDescriptor = REBASE(0x49977e0);
        const uintptr_t GetProperty = REBASE(0x47930f0);
        const uintptr_t GetPropertyData = REBASE(0x2ad1390);
        inline constexpr uintptr_t getter = 0x18;
        const uintptr_t GetValues = REBASE(0x3f95730);
        inline constexpr uintptr_t scriptable = 0x90;
        const uintptr_t SetParent = REBASE(0x1bf72f0);
        inline constexpr uintptr_t ttype = 0x68;
        inline constexpr uintptr_t ttype_number = 0x30;
        const uintptr_t WaitForChild = REBASE(0x15f3aa0);
        inline constexpr uintptr_t PropertyMap = 0x250;
    } // namespace Instance

    namespace Property
    {
        const uintptr_t KTable = REBASE(0x6d224b8);
    } // namespace Property

    namespace Raknet
    {
    } // namespace Raknet

    namespace Luau
    {
        const uintptr_t luaT_eventnames = REBASE(0x62bdb08);
        const uintptr_t ClientOnRecieve = REBASE(0x4587140);
        const uintptr_t currfuncname = REBASE(0x2690b70);
        const uintptr_t f_luaopen = REBASE(0x268e350);
        const uintptr_t GetLuaState = REBASE(0x405d2c0);
        const uintptr_t lua_checkstack = REBASE(0x26936a0);
        const uintptr_t lua_createtable = REBASE(0x15f3060);
        const uintptr_t lua_exception = REBASE(0x269b210);
        const uintptr_t lua_newstate = REBASE(0x269c3e0);
        const uintptr_t lua_pushvfstring = REBASE(0x268afb0);
        const uintptr_t luaB_assert = REBASE(0x26d76a0);
        const uintptr_t luaB_getmetatable = REBASE(0x54d68a0);
        const uintptr_t luaC_step = REBASE(0x26a9900);
        const uintptr_t luaD_rawrunprotected = REBASE(0x4777f60);
        const uintptr_t luaD_throw = REBASE(0x2668190);
        const uintptr_t luaF_freeproto = REBASE(0x26cd070);
        const uintptr_t luaH_dummynode = REBASE(0x62a0e58);
        const uintptr_t luaL_tostring = REBASE(0x26941a0);
        const uintptr_t luaM_free = REBASE(0x26d1740);
        const uintptr_t luaM_freegco = REBASE(0x26d17c0);
        const uintptr_t luaM_visitgco = REBASE(0x26d18e0);
        const uintptr_t luaO_nilobject = REBASE(0x62a1788);
        const uintptr_t luaopen_base = REBASE(0x26d97b0);
        const uintptr_t luaopen_bit32 = REBASE(0x54f7d00);
        const uintptr_t luaopen_os = REBASE(0x5990200);
        const uintptr_t luau_load = REBASE(0x26e6d10);
        const uintptr_t newclasspage = REBASE(0x26d14d0);
        const uintptr_t newpage = REBASE(0x26d1420);
        const uintptr_t RaiseErr = REBASE(0x47930f0);
    } // namespace Luau

    namespace Task
    {
        const uintptr_t desynchronize = REBASE(0x4186520);
        const uintptr_t synchronize = REBASE(0x41860a0);
        const uintptr_t wait = REBASE(0x4187bb0);
    } // namespace Task

    namespace Coroutine
    {
        const uintptr_t close = REBASE(0x54f59c0);
        const uintptr_t create = REBASE(0x54f50d0);
        const uintptr_t isyieldable = REBASE(0x54f5940);
        const uintptr_t running = REBASE(0x54f58d0);
        const uintptr_t status = REBASE(0x54f3a60);
        const uintptr_t wrap = REBASE(0x54f5610);
        const uintptr_t yield = REBASE(0x54f5870);
    } // namespace Coroutine

    namespace Signals
    {
        const uintptr_t FireAllClients = REBASE(0x341afa0);
        const uintptr_t FireRightMouseClick = REBASE(0x1c1b800);
        const uintptr_t FireServer = REBASE(0x341ac20);
        const uintptr_t FireTouchInterest = REBASE(0xba4f70);
        const uintptr_t InvokeClient = REBASE(0x347d380);
        const uintptr_t InvokeServer = REBASE(0x347e834);
        const uintptr_t IsLegalSendEvent = REBASE(0x46a7030);
        const uintptr_t TouchInterest = REBASE(0xca94c0);
    } // namespace Signals

    // other
    const uintptr_t CastArgs = REBASE(0x1c251a0);
    const uintptr_t ConnectionDisconnect = REBASE(0x3ffa080);
    const uintptr_t EnableLoadModule = REBASE(0x62a1788);
    const uintptr_t GetCapabilities = REBASE(0x7ab400);
    const uintptr_t GetLuaStateForInstance = REBASE(0x10db3f0);
    const uintptr_t LockViolationInstanceCrash = REBASE(0x6eb3d58);
    const uintptr_t LockViolationScriptCrash = REBASE(0x6e40d20);
    const uintptr_t LuaStepIntervalMsOverrideEnabled = REBASE(0x6e445d0);
    const uintptr_t PhysicsSenderMaxBandwidthBps = REBASE(0x6e7d058);
    const uintptr_t WebSocketServiceEnableClientCreation = REBASE(0x6e367d8);
    const uintptr_t WndProcessCheck = REBASE(0x6bbed60);
} // namespace Offsets
