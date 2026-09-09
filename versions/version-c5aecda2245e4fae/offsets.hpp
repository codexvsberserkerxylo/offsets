// dumped by nick
// date: 2026-09-09 23:46:55
// took 13.5s
// success rate: 89.6%

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
        const uintptr_t BitMap = HREBASE(0x28678);
        const uintptr_t ControlFlowGuard = HREBASE(0x6f7fc0);

        inline constexpr uint8_t ByteShift = 15;
        inline constexpr uint8_t PageShift = 12;
        inline constexpr uint32_t PageSize = 0x1000;
        inline constexpr uint32_t PageMask = 0xfff;
        inline constexpr uint8_t BitMask = 7;

        // other
        static const uint64_t patcheb[] = {
            0x25a150, 0x293fb8, 0x2cad8d, 0x69b900, 0xcaf24c, 
            0x1047098, 0x104c214, 0x104ca80
        };
    } // namespace Hyperion

    namespace DataModel
    {
        const uintptr_t DataModelDeleterPointer = REBASE(0x4ba5fac);
        const uintptr_t FakeDataModelPointer = REBASE(0x894f978);
        inline constexpr uintptr_t FakeToRealDataModel = 0x1f8;
        inline constexpr uintptr_t GameLoaded = 0x5d8;
        inline constexpr uintptr_t JobId = 0x118;
        inline constexpr uintptr_t PlaceId = 0x190;
        inline constexpr uintptr_t ScriptContext = 0x440;
        inline constexpr uintptr_t Children = 0x70;
    } // namespace DataModel

    namespace TaskScheduler
    {
        const uintptr_t RawScheduler = REBASE(0x7bff6f0);
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
        inline constexpr uintptr_t RequireBypass = 0xbb4;
        const uintptr_t Resume = REBASE(0x4260f50);
        const uintptr_t TaskQueue = REBASE(0x430b280);
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
        const uintptr_t IdentityPtr = REBASE(0x815e708);
        const uintptr_t GetIdentityStruct = REBASE(0x1ce65c0);
        const uintptr_t GetTlsPointer = REBASE(0x1a40);
        const uintptr_t GetTlsPointer_wrapper = REBASE(0x4250);
        const uintptr_t Impersonator = REBASE(0x7ae3a0);
        const uintptr_t rbxSpawn = REBASE(0x4268790);
    } // namespace RobloxThread

    namespace Instance
    {
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        const uintptr_t GetModuleFromVMStateMap = REBASE(0x426f150);
        const uintptr_t GetPropDescriptor = REBASE(0x4a68880);
        const uintptr_t GetProperty = REBASE(0x4924110);
        const uintptr_t GetPropertyData = REBASE(0xb43550);
        inline constexpr uintptr_t getter = 0x18;
        const uintptr_t GetValues = REBASE(0x4122410);
        inline constexpr uintptr_t scriptable = 0x90;
        const uintptr_t SetParent = REBASE(0x1cf33d0);
        inline constexpr uintptr_t ttype = 0x68;
        inline constexpr uintptr_t ttype_number = 0x30;
        const uintptr_t WaitForChild = REBASE(0x163c5e0);
        inline constexpr uintptr_t PropertyMap = 0x250;
    } // namespace Instance

    namespace Property
    {
        const uintptr_t KTable = REBASE(0x6e4f23c); // prob wrong
        const uintptr_t HashTableLookup = REBASE(0x10a0aa0);
    } // namespace Property

    namespace Raknet
    {
        const uintptr_t HandleConnectionState = REBASE(0x4719602);
        const uintptr_t ProcessNetworkPacket = REBASE(0x2901bc0);
        const uintptr_t Receive = REBASE(0x28ecb80);
        const uintptr_t ReportNetworkError = REBASE(0x47076e0);
    } // namespace Raknet

    namespace Luau
    {
        const uintptr_t ClientOnRecieve = REBASE(0x4717980);
        const uintptr_t currfuncname = REBASE(0x26ff170);
        const uintptr_t f_luaopen = REBASE(0x26fc420);
        const uintptr_t GetLuaState = REBASE(0x41ec990);
        const uintptr_t lua_break = REBASE(0x270e1f0);
        const uintptr_t lua_checkstack = REBASE(0x2701a50);
        const uintptr_t lua_createtable = REBASE(0x163bb50);
        const uintptr_t lua_exception = REBASE(0x2709590);
        const uintptr_t lua_newstate = REBASE(0x270a8b0);
        const uintptr_t lua_pushvfstring = REBASE(0x26f8d70);
        const uintptr_t lua_resume = REBASE(0x26ffe40);
        const uintptr_t lua_yield = REBASE(0x431a6b0);
        const uintptr_t luaB_assert = REBASE(0x27486d0);
        const uintptr_t luaB_error = REBASE(0x26ffe40);
        const uintptr_t luaB_getmetatable = REBASE(0x5607360);
        const uintptr_t luaB_newproxy = REBASE(0x2749a6e);
        const uintptr_t luaB_next = REBASE(0x274816c);
        const uintptr_t luaB_rawlen = REBASE(0x2746f80);
        const uintptr_t luaB_rawset = REBASE(0x9e6730);
        const uintptr_t luaB_select = REBASE(0x2748780);
        const uintptr_t luaB_setfenv = REBASE(0x2744b20);
        const uintptr_t luaB_setmetatable = REBASE(0x2744010);
        const uintptr_t luaB_tonumber = REBASE(0x27430f0);
        const uintptr_t luaC_step = REBASE(0x2719020);
        const uintptr_t luaD_rawrunprotected = REBASE(0x490a140);
        const uintptr_t luaD_throw = REBASE(0x26d2c30);
        const uintptr_t luaF_freeproto = REBASE(0x27241e0);
        const uintptr_t luaG_aritherror = REBASE(0x2722ad0);
        const uintptr_t luaG_readonlyerror = REBASE(0x2722d30);
        const uintptr_t luaG_runerror = REBASE(0x2723350);
        const uintptr_t luaG_runerrorl = REBASE(0x2723350);
        const uintptr_t luaH_dummynode = REBASE(0x63cab08);
        const uintptr_t luaL_argerrorl = REBASE(0x26ff1f0);
        const uintptr_t luaL_error = REBASE(0x26ffe40);
        const uintptr_t luaL_register = REBASE(0x2702fb0);
        const uintptr_t luaL_tostring = REBASE(0x2702530);
        const uintptr_t luaL_typerrorL = REBASE(0x26ff270);
        const uintptr_t luaM_visitgco = REBASE(0x2728b70);
        const uintptr_t luaO_nilobject = REBASE(0x63cdf48);
        const uintptr_t luaO_str2d = REBASE(0x26ffe40);
        const uintptr_t luaopen_bit32 = REBASE(0x562b7d0);
        const uintptr_t luaopen_os = REBASE(0x5a997c0);
        const uintptr_t luau_execute = REBASE(0x2736e10);
        const uintptr_t luau_load = REBASE(0x41b3170);
        const uintptr_t luaV_gettable = REBASE(0x27100e0);
        const uintptr_t luaV_settable = REBASE(0x2710f70);
        const uintptr_t luaVM_load = REBASE(0x41b3b50);
        const uintptr_t newclasspage = REBASE(0x2728c80);
        const uintptr_t newpage = REBASE(0x2728d90);
        const uintptr_t print = REBASE(0x1cab4b0);
        const uintptr_t RaiseErr = REBASE(0x4924110);
    } // namespace Luau

    namespace Task
    {
        const uintptr_t cancel = REBASE(0x431a920);
        const uintptr_t defer = REBASE(0x4319b60);
        const uintptr_t desynchronize = REBASE(0x4318f70);
        const uintptr_t spawn = REBASE(0x431a020);
        const uintptr_t synchronize = REBASE(0x4318b60);
        const uintptr_t wait = REBASE(0x431a6b0);
    } // namespace Task

    namespace Coroutine
    {
    } // namespace Coroutine

    namespace Signals
    {
        const uintptr_t FireAllClients = REBASE(0x3474980);
        const uintptr_t FireMouseClick = REBASE(0x3b4d9f0);
        const uintptr_t FireMouseHoverEnter = REBASE(0x3b4efe0);
        const uintptr_t FireMouseHoverLeave = REBASE(0x3b4f180);
        const uintptr_t FireProximityPrompt = REBASE(0x3102650);
        const uintptr_t FireServer = REBASE(0x3474600);
        const uintptr_t FireTouchInterest = REBASE(0xbc3b10);
        const uintptr_t InvokeClient = REBASE(0x34d7690);
        const uintptr_t InvokeServer = REBASE(0x34d8b00);
        const uintptr_t IsLegalSendEvent = REBASE(0x4848a90);
        const uintptr_t TouchInterest = REBASE(0xcc58c0);
    } // namespace Signals

    // other
    const uintptr_t CastArgs = REBASE(0x1791500);
    const uintptr_t ConnectionDisconnect = REBASE(0x4186a50);
    const uintptr_t EnableLoadModule = REBASE(0x8496288);
    const uintptr_t GetCapabilities = REBASE(0x1ce6760);
    const uintptr_t GetFFlag = REBASE(0x493af20);
    const uintptr_t GetLuaStateForInstance = REBASE(0x41bd590);
    const uintptr_t GetLuaStateForInstance = REBASE(0x110f620);
    const uintptr_t LockViolationInstanceCrash = REBASE(0x6fe8880);
    const uintptr_t LockViolationScriptCrash = REBASE(0x6f77560);
    const uintptr_t LuaStepIntervalMsOverrideEnabled = REBASE(0x6f7aae0);
    const uintptr_t PhysicsSenderMaxBandwidthBps = REBASE(0x6fb2d08);
    const uintptr_t Register = REBASE(0x3cbca70);
    const uintptr_t RobloxLogCrash = REBASE(0x4921fd0);
    const uintptr_t SetFFlag = REBASE(0x493a3a0);
    const uintptr_t WebSocketServiceEnableClientCreation = REBASE(0x6f6c470);
    const uintptr_t WndProcessCheck = REBASE(0x6cf6af8);
} // namespace Offsets
