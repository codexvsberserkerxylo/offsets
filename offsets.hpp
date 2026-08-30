// dumped by nick
// date: 2026-08-29 13:03:44
// took 20.4s
// success rate: 64.8%

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
    inline constexpr const char* LiveChannel = "version-f5a60436d48947d3";

    namespace Hyperion
    {
        const uintptr_t BitMap = HREBASE(0x1473148);
        const uintptr_t ControlFlowGuard = HREBASE(0x800590);

        inline constexpr uint8_t ByteShift = 15;
        inline constexpr uint8_t PageShift = 12;
        inline constexpr uint32_t PageSize = 0x1000;
        inline constexpr uint32_t PageMask = 0xfff;
        inline constexpr uint8_t BitMask = 7;

        // other
        static const uint64_t patcheb[] = {
            0x238e4, 0x4e9e1, 0x704d0, 0x707ac, 0x832a4, 
            0x92be0, 0xa43e8, 0x10a60ec, 0xa984e67
        };
    } // namespace Hyperion

    namespace DataModel
    {
        const uintptr_t DataModelDeleterPointer = REBASE(0x1c82228);
        const uintptr_t FakeDataModelPointer = REBASE(0x883f048);
        inline constexpr uintptr_t FakeToRealDataModel = 0x1f8;
        inline constexpr uintptr_t GameLoaded = 0x5d0;
        inline constexpr uintptr_t JobId = 0x118;
        inline constexpr uintptr_t PlaceId = 0x190;
        inline constexpr uintptr_t ScriptContext = 0x440;
        inline constexpr uintptr_t Children = 0x70;
    } // namespace DataModel

    namespace TaskScheduler
    {
        const uintptr_t RawScheduler = REBASE(0x7afe900);
        const uintptr_t Pointer = REBASE(0x8a44d68);
        inline constexpr uintptr_t MaxFPS = 0xb0;
        inline constexpr uintptr_t JobStart = 0xc8;
        inline constexpr uintptr_t JobEnd = 0xd0;
        inline constexpr uintptr_t JobName = 0x18;
        const uintptr_t TargetFps = REBASE(0x8a44e18);
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
        inline constexpr uintptr_t RequireBypass = 0xa00;
        const uintptr_t Resume = REBASE(0x40cbd40);
        const uintptr_t TaskQueue = REBASE(0x4177fd0);
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
        const uintptr_t IdentityPtr = REBASE(0x8051178);
        const uintptr_t GetIdentityStruct = REBASE(0x34cdc60);
        const uintptr_t GetTlsPointer = REBASE(0x1420);
        const uintptr_t GetTlsPointer_wrapper = REBASE(0x4170);
        const uintptr_t Impersonator = REBASE(0x7a02a0);
        const uintptr_t rbxSpawn = REBASE(0x40d3520);
    } // namespace RobloxThread

    namespace Instance
    {
        const uintptr_t GetModuleFromVMStateMap = REBASE(0x40d9da0);
        const uintptr_t GetPropDescriptor = REBASE(0x49a20d0);
        const uintptr_t GetProperty = REBASE(0x479ce50);
        const uintptr_t GetPropertyData = REBASE(0x2aad770);
        inline constexpr uintptr_t getter = 0x18;
        const uintptr_t GetValues = REBASE(0x3f91310);
        inline constexpr uintptr_t scriptable = 0x90;
        const uintptr_t SetParent = REBASE(0x1cb14a0);
        inline constexpr uintptr_t ttype = 0x68;
        inline constexpr uintptr_t ttype_number = 0x30;
        const uintptr_t WaitForChild = REBASE(0x1612bd0);
        inline constexpr uintptr_t PropertyMap = 0x250;
    } // namespace Instance

    namespace Property
    {
        const uintptr_t KTable = REBASE(0x6d6de18);
    } // namespace Property

    namespace Raknet
    {
    } // namespace Raknet

    namespace Luau
    {
        const uintptr_t ClientOnRecieve = REBASE(0x4585cd0);
        const uintptr_t f_luaopen = REBASE(0x26a0500);
        const uintptr_t GetLuaState = REBASE(0x405a360);
        const uintptr_t lua_checkstack = REBASE(0x26a5c10);
        const uintptr_t lua_createtable = REBASE(0x1612110);
        const uintptr_t lua_exception = REBASE(0x26ad940);
        const uintptr_t lua_newstate = REBASE(0x26aec60);
        const uintptr_t lua_pushvfstring = REBASE(0x269d080);
        const uintptr_t luaB_assert = REBASE(0x26ebb40);
        const uintptr_t luaB_getmetatable = REBASE(0x54e4b90);
        const uintptr_t luaC_step = REBASE(0x26bc760);
        const uintptr_t luaD_rawrunprotected = REBASE(0x4781da0);
        const uintptr_t luaD_throw = REBASE(0x26789e0);
        const uintptr_t luaF_freeproto = REBASE(0x26e1420);
        const uintptr_t luaL_tostring = REBASE(0x26a6700);
        const uintptr_t luaM_visitgco = REBASE(0x26e5be0);
        const uintptr_t luaO_nilobject = REBASE(0x62f7418);
        const uintptr_t luaopen_base = REBASE(0x26edd90);
        const uintptr_t luaopen_bit32 = REBASE(0x5506710);
        const uintptr_t luaopen_os = REBASE(0x59cb650);
        const uintptr_t luau_load = REBASE(0x26fb850);
        const uintptr_t newclasspage = REBASE(0x26e57a0);
        const uintptr_t newpage = REBASE(0x26e56f0);
        const uintptr_t RaiseErr = REBASE(0x479ce50);
    } // namespace Luau

    namespace Task
    {
        const uintptr_t desynchronize = REBASE(0x4185db0);
        const uintptr_t synchronize = REBASE(0x41859a0);
        const uintptr_t wait = REBASE(0x4187480);
    } // namespace Task

    namespace Coroutine
    {
        const uintptr_t close = REBASE(0x5504330);
        const uintptr_t create = REBASE(0x55039b0);
        const uintptr_t isyieldable = REBASE(0x55042b0);
        const uintptr_t running = REBASE(0x5504240);
        const uintptr_t status = REBASE(0x5502340);
        const uintptr_t wrap = REBASE(0x5503f60);
        const uintptr_t yield = REBASE(0x55041e0);
    } // namespace Coroutine

    namespace Signals
    {
        const uintptr_t FireAllClients = REBASE(0x33efc30);
        const uintptr_t FireRightMouseClick = REBASE(0x479bb30);
        const uintptr_t FireServer = REBASE(0x33ef8b0);
        const uintptr_t FireTouchInterest = REBASE(0xbacb60);
        const uintptr_t InvokeClient = REBASE(0x34522d0);
        const uintptr_t InvokeServer = REBASE(0x3453720);
        const uintptr_t TouchInterest = REBASE(0xcb1650);
    } // namespace Signals

    // other
    const uintptr_t CastArgs = REBASE(0x17628e0);
    const uintptr_t ConnectionDisconnect = REBASE(0x3ff6360);
    const uintptr_t EnableLoadModule = REBASE(0x8386858);
    const uintptr_t GetCapabilities = REBASE(0x1ca46d0);
    const uintptr_t GetLuaStateForInstance = REBASE(0x10eab70);
    const uintptr_t LockViolationInstanceCrash = REBASE(0x6f013f8);
    const uintptr_t LockViolationScriptCrash = REBASE(0x6e8e098);
    const uintptr_t LuaStepIntervalMsOverrideEnabled = REBASE(0x6e91718);
    const uintptr_t PhysicsSenderMaxBandwidthBps = REBASE(0x6ecaef8);
    const uintptr_t Register = REBASE(0x3c22250);
    const uintptr_t WebSocketServiceEnableClientCreation = REBASE(0x6e83b48);
    const uintptr_t WndProcessCheck = REBASE(0x6c18d20);
} // namespace Offsets
