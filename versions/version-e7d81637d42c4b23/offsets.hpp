// dumped by nick
// date: 2026-09-06 16:13:43
// took 29.2s
// success rate: 61.3%

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
    inline constexpr const char* LiveChannel = "version-e7d81637d42c4b23";

    namespace Hyperion
    {
        const uintptr_t BitMap = HREBASE(0x2f070);
        const uintptr_t ControlFlowGuard = HREBASE(0x2b1990);

        inline constexpr uint8_t ByteShift = 15;
        inline constexpr uint8_t PageShift = 12;
        inline constexpr uint32_t PageSize = 0x1000;
        inline constexpr uint32_t PageMask = 0xfff;
        inline constexpr uint8_t BitMask = 7;

        // other
        static const uint64_t patcheb[] = {
            0x884ef8, 0x911934, 0x9a926c, 0xb39bc8, 0x1097fa4, 
            0x109a1b8, 0x13ce968, 0x14449d8
        };
    } // namespace Hyperion

    namespace DataModel
    {
        const uintptr_t DataModelDeleterPointer = REBASE(0x1ca32a8);
        const uintptr_t FakeDataModelPointer = REBASE(0x88b11c8);
        inline constexpr uintptr_t FakeToRealDataModel = 0x1f8;
        inline constexpr uintptr_t GameLoaded = 0x5d8;
        inline constexpr uintptr_t JobId = 0x118;
        inline constexpr uintptr_t PlaceId = 0x190;
        inline constexpr uintptr_t ScriptContext = 0x440;
        inline constexpr uintptr_t Children = 0x70;
    } // namespace DataModel

    namespace TaskScheduler
    {
        const uintptr_t RawScheduler = REBASE(0x7b696e0);
        const uintptr_t Pointer = REBASE(0x8abd728);
        inline constexpr uintptr_t MaxFPS = 0xb0;
        inline constexpr uintptr_t JobStart = 0xc8;
        inline constexpr uintptr_t JobEnd = 0xd0;
        inline constexpr uintptr_t JobName = 0x18;
        const uintptr_t TargetFps = REBASE(0x8abd7d8);
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
        inline constexpr uintptr_t RequireBypass = 0xb01;
        const uintptr_t Resume = REBASE(0x4115130);
        inline constexpr uintptr_t ToResume = 0x7cc;
        inline constexpr uintptr_t userdata = 0x58;
    } // namespace ScriptContext

    namespace BasePart
    {
        inline constexpr uintptr_t Overlap = 0x1f8;
    } // namespace BasePart
f
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
        const uintptr_t IdentityPtr = REBASE(0x80c10c8);
        const uintptr_t GetIdentityStruct = REBASE(0x3511380);
        const uintptr_t GetTlsPointer = REBASE(0x15a0);
        const uintptr_t GetTlsPointer_wrapper = REBASE(0x39a0);
        const uintptr_t Impersonator = REBASE(0x7a6340);
        const uintptr_t rbxSpawn = REBASE(0x411c970);
    } // namespace RobloxThread

    namespace Instance
    {
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        const uintptr_t GetModuleFromVMStateMap = REBASE(0x4123230);
        const uintptr_t GetProperty = REBASE(-0x35875212); // 100% true
        const uintptr_t GetPropertyData = REBASE(0x2ad9b40);
        const uintptr_t GetValues = REBASE(0x3fdb430);
        const uintptr_t SetParent = REBASE(0x1cd25e0);
        const uintptr_t WaitForChild = REBASE(0x162a5b0);
        inline constexpr uintptr_t PropertyMap = 0x250;
    } // namespace Instance

    namespace Property
    {
        const uintptr_t KTable = REBASE(0x6dcaaa0);
    } // namespace Property

    namespace Raknet
    {
    } // namespace Raknet

    namespace Luau
    {
        const uintptr_t luaT_eventnames = REBASE(0x636da08);
        const uintptr_t ClientOnRecieve = REBASE(0x45ccef0);
        const uintptr_t currfuncname = REBASE(0x26c9e90);
        const uintptr_t f_luaopen = REBASE(0x26c6d30);
        const uintptr_t GetLuaState = REBASE(0x40a6cb0);
        const uintptr_t lua_checkstack = REBASE(0x26cc8e0);
        const uintptr_t lua_createtable = REBASE(0x1629b00);
        const uintptr_t lua_exception = REBASE(0x26d4500);
        const uintptr_t lua_newstate = REBASE(0x26d5820);
        const uintptr_t lua_pushvfstring = REBASE(0x26c3fe0);
        const uintptr_t luaB_assert = REBASE(0x2712890);
        const uintptr_t luaB_getmetatable = REBASE(0x553bc90);
        const uintptr_t luaC_step = REBASE(0x26e3260);
        const uintptr_t luaD_rawrunprotected = REBASE(0x47cec90);
        const uintptr_t luaD_throw = REBASE(0x269dbb0);
        const uintptr_t luaH_dummynode = REBASE(0x6351188);
        const uintptr_t luaL_tostring = REBASE(0x26cd3c0);
        const uintptr_t luaM_visitgco = REBASE(0x270ca90);
        const uintptr_t luaO_nilobject = REBASE(0x63516d8);
        const uintptr_t luaopen_os = REBASE(0x5a20db0);
        const uintptr_t newclasspage = REBASE(0x270c650);
        const uintptr_t newpage = REBASE(0x270c5a0);
        const uintptr_t print = REBASE(0x1c8a050);
        const uintptr_t RaiseErr = REBASE(0x47e8c60);
    } // namespace Luau

    namespace Task
    {
        const uintptr_t desynchronize = REBASE(0x41d2d90);
        const uintptr_t synchronize = REBASE(0x41d2980);
        const uintptr_t wait = REBASE(0x41d4460);
    } // namespace Task

    namespace Coroutine
    {
        const uintptr_t close = REBASE(0x555b4b0);
        const uintptr_t create = REBASE(0x555ab30);
        const uintptr_t isyieldable = REBASE(0x555b420);
        const uintptr_t running = REBASE(0x555b3b0);
        const uintptr_t status = REBASE(0x55594c0);
        const uintptr_t wrap = REBASE(0x555b0e0);
        const uintptr_t yield = REBASE(0x555b350);
    } // namespace Coroutine

    namespace Signals
    {
        const uintptr_t FireAllClients = REBASE(0x3432030);
        const uintptr_t FireRightMouseClick = REBASE(0x4360440);
        const uintptr_t FireServer = REBASE(0x3431cb0);
        const uintptr_t FireTouchInterest = REBASE(0xbb6170);
        const uintptr_t InvokeClient = REBASE(0x3494cb0);
        const uintptr_t InvokeServer = REBASE(0x3496100);
        const uintptr_t IsLegalSendEvent = REBASE(0x46f64d0);
        const uintptr_t TouchInterest = REBASE(0xcb7e40);
    } // namespace Signals

    // other
    const uintptr_t CastArgs = REBASE(0x177d7f0);
    const uintptr_t ConnectionDisconnect = REBASE(0x40410a0);
    const uintptr_t EnableLoadModule = REBASE(0x83f7bf8);
    const uintptr_t GetCapabilities = REBASE(0x1cc5820);
    const uintptr_t GetLuaStateForInstance = REBASE(0x10fb290);
    const uintptr_t LockViolationInstanceCrash = REBASE(0x6f62c08);
    const uintptr_t LockViolationScriptCrash = REBASE(0x6eeed38);
    const uintptr_t LuaStepIntervalMsOverrideEnabled = REBASE(0x6ef24a8);
    const uintptr_t PhysicsSenderMaxBandwidthBps = REBASE(0x6f2b968);
    const uintptr_t WebSocketServiceEnableClientCreation = REBASE(0x6ee42e8);
    const uintptr_t WndProcessCheck = REBASE(0x6c75d28);
} // namespace Offsets
