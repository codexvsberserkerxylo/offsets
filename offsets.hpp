// dumped by nick
// date: 2026-08-25 09:12:03
// took 10.7s
// success rate: 95.8%

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
    inline constexpr const char* LiveChannel = "version-ddf602d9cfe44005";

    namespace Hyperion
    {
        const uintptr_t BitMap = HREBASE(0x145ba48);
        const uintptr_t ControlFlowGuard = HREBASE(0xc53000);

        inline constexpr uint8_t ByteShift = 15;
        inline constexpr uint8_t PageShift = 12;
        inline constexpr uint32_t PageSize = 0x1000;
        inline constexpr uint32_t PageMask = 0xfff;
        inline constexpr uint8_t BitMask = 7;

        // other
        static const uint64_t patcheb[] = {
            0x23aacc, 0x2c4aa0, 0x302a2c, 0x35bac1, 0x3e4b50, 
            0x3ec44c, 0x10653b4, 0x11845d8
        };
    } // namespace Hyperion

    namespace DataModel
    {
        const uintptr_t DataModelDeleterPointer = REBASE(0x928098);
        const uintptr_t FakeDataModelPointer = REBASE(0x6b9e834);
        inline constexpr uintptr_t FakeToRealDataModel = 0x1d8;
        inline constexpr uintptr_t GameLoaded = 0x570;
        inline constexpr uintptr_t JobId = 0x118;
        inline constexpr uintptr_t PlaceId = 0x188;
        inline constexpr uintptr_t ScriptContext = 0x440;
        inline constexpr uintptr_t Children = 0x70;
    } // namespace DataModel

    namespace TaskScheduler
    {
        const uintptr_t RawScheduler = REBASE(0x7a18900);
        const uintptr_t Pointer = REBASE(0x88b64c8);
        inline constexpr uintptr_t MaxFPS = 0xb0;
        inline constexpr uintptr_t JobStart = 0xc8;
        inline constexpr uintptr_t JobEnd = 0xd0;
        inline constexpr uintptr_t JobName = 0x18;
        const uintptr_t TargetFps = REBASE(0x88b6578);
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
        inline constexpr uintptr_t RequireBypass = 0x898;
        const uintptr_t Resume = REBASE(0x22bba10);
        const uintptr_t TaskQueue = REBASE(0x2331830);
        inline constexpr uintptr_t ToResume = 0x7e0;
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
        const uintptr_t IdentityPtr = REBASE(0x7eeb448);
        const uintptr_t GetIdentityStruct = REBASE(0x8f7800);
        const uintptr_t GetTlsPointer = REBASE(0x1420);
        const uintptr_t GetTlsPointer_wrapper = REBASE(0x4170);
        const uintptr_t Impersonator = REBASE(0x7970c0);
        const uintptr_t rbxSpawn = REBASE(0x23d6280);
    } // namespace RobloxThread

    namespace Instance
    {
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        const uintptr_t GetModuleFromVMStateMap = REBASE(0x22f5df0);
        const uintptr_t GetPropDescriptor = REBASE(0x3149490);
        const uintptr_t GetProperty = REBASE(0x2d1e6e0);
        const uintptr_t GetPropertyData = REBASE(0xd703b0);
        inline constexpr uintptr_t getter = 0x18;
        const uintptr_t GetValues = REBASE(0x21f2e80);
        inline constexpr uintptr_t scriptable = 0x90;
        const uintptr_t SetParent = REBASE(0x8c5170);
        inline constexpr uintptr_t ttype = 0x68;
        inline constexpr uintptr_t ttype_number = 0x30;
        const uintptr_t WaitForChild = REBASE(0x877120);
        inline constexpr uintptr_t PropertyMap = 0x250;
    } // namespace Instance

    namespace Property
    {
        const uintptr_t KTable = REBASE(0x7e8c7a0);
        const uintptr_t HashTableLookup = REBASE(0x52d9e90);
    } // namespace Property

    namespace Raknet
    {
        const uintptr_t HandleConnectionState = REBASE(0x291485b);
        const uintptr_t ProcessNetworkPacket = REBASE(0x499b730);
        const uintptr_t Receive = REBASE(0x4986890);
        const uintptr_t ReportNetworkError = REBASE(0x2901e40);
    } // namespace Raknet

    namespace Luau
    {
        const uintptr_t luaT_eventnames = REBASE(0x610ef68);
        const uintptr_t ClientOnRecieve = REBASE(0x2912a30);
        const uintptr_t currfuncname = REBASE(0xb365d0);
        const uintptr_t f_luaopen = REBASE(0xb30190);
        const uintptr_t lua_break = REBASE(0xb43de0);
        const uintptr_t lua_checkstack = REBASE(0xb32bf0);
        const uintptr_t lua_createtable = REBASE(0x8766e0);
        const uintptr_t lua_exception = REBASE(0xb40aa0);
        const uintptr_t lua_newstate = REBASE(0xb41500);
        const uintptr_t lua_pushvfstring = REBASE(0xb33ec0);
        const uintptr_t lua_resume = REBASE(0xb37340);
        const uintptr_t lua_yield = REBASE(0x4880060);
        const uintptr_t luaB_assert = REBASE(0x4860e60);
        const uintptr_t luaB_error = REBASE(0xb37340);
        const uintptr_t luaB_getmetatable = REBASE(0x485c6f0);
        const uintptr_t luaB_newproxy = REBASE(0x48619ec);
        const uintptr_t luaB_next = REBASE(0x12d4100);
        const uintptr_t luaB_rawlen = REBASE(0x485f6d0);
        const uintptr_t luaB_rawset = REBASE(0xb538f0);
        const uintptr_t luaB_select = REBASE(0x4857fca);
        const uintptr_t luaB_setfenv = REBASE(0x23d8270);
        const uintptr_t luaB_setmetatable = REBASE(0x485c870);
        const uintptr_t luaB_tonumber = REBASE(0x48590ac);
        const uintptr_t luaC_step = REBASE(0xb46cb0);
        const uintptr_t luaD_rawrunprotected = REBASE(0x2d03420);
        const uintptr_t luaD_throw = REBASE(0xb40c30);
        const uintptr_t luaF_freeproto = REBASE(0xb50ab0);
        const uintptr_t luaG_aritherror = REBASE(0xb72e30);
        const uintptr_t luaG_readonlyerror = REBASE(0xb73090);
        const uintptr_t luaG_runerror = REBASE(0xb736e0);
        const uintptr_t luaG_runerrorl = REBASE(0xb736e0);
        const uintptr_t luaH_dummynode = REBASE(0x610eeb8);
        const uintptr_t luaL_argerrorl = REBASE(0xb366b0);
        const uintptr_t luaL_error = REBASE(0xb37340);
        const uintptr_t luaL_register = REBASE(0xb3a440);
        const uintptr_t luaL_tostring = REBASE(0xb39a90);
        const uintptr_t luaL_typerrorL = REBASE(0xb36730);
        const uintptr_t luaM_free = REBASE(0xb4f4c0);
        const uintptr_t luaM_freegco = REBASE(0xb4f540);
        const uintptr_t luaM_visitgco = REBASE(0xb4f660);
        const uintptr_t luaO_nilobject = REBASE(0x610eff8);
        const uintptr_t luaO_str2d = REBASE(0xb37340);
        const uintptr_t luaopen_bit32 = REBASE(0x4882510);
        const uintptr_t luaopen_os = REBASE(0x592c396);
        const uintptr_t luau_execute = REBASE(0xb59570);
        const uintptr_t luau_load = REBASE(0xb7beb0);
        const uintptr_t luaV_gettable = REBASE(0xb52a20);
        const uintptr_t luaV_settable = REBASE(0xb538f0);
        const uintptr_t luaT_typenames = REBASE(0x610eee0);
        const uintptr_t newclasspage = REBASE(0xb4f270);
        const uintptr_t newpage = REBASE(0xb4f1c0);
        const uintptr_t print = REBASE(0x92c340);
        const uintptr_t RaiseErr = REBASE(0x2d1e6e0);
    } // namespace Luau

    namespace Task
    {
        const uintptr_t cancel = REBASE(0x23b66f0);
        const uintptr_t defer = REBASE(0x23b5980);
        const uintptr_t desynchronize = REBASE(0x23b4de0);
        const uintptr_t spawn = REBASE(0x23b5e10);
        const uintptr_t synchronize = REBASE(0x23b4960);
        const uintptr_t wait = REBASE(0x23b6480);
    } // namespace Task

    namespace Coroutine
    {
        const uintptr_t close = REBASE(0x48801c0);
        const uintptr_t create = REBASE(0x487f8b0);
        const uintptr_t isyieldable = REBASE(0x4880130);
        const uintptr_t running = REBASE(0x48800c0);
        const uintptr_t status = REBASE(0x487e240);
        const uintptr_t wrap = REBASE(0x487fe00);
        const uintptr_t yield = REBASE(0x4880060);
    } // namespace Coroutine

    namespace Signals
    {
        const uintptr_t FireAllClients = REBASE(0x5033590);
        const uintptr_t FireMouseClick = REBASE(0x35b2f60);
        const uintptr_t FireProximityPrompt = REBASE(0x4ec32b0);
        const uintptr_t FireRightMouseClick = REBASE(0x27a1a40);
        const uintptr_t FireServer = REBASE(0x5033210);
        const uintptr_t InvokeClient = REBASE(0x506aca0);
        const uintptr_t InvokeServer = REBASE(0x506c0f0);
        const uintptr_t IsLegalSendEvent = REBASE(0x2b7a7f0);
        const uintptr_t TouchInterest = REBASE(0x24e1760);
        const uintptr_t FireTouchInterest = REBASE(0x1e62820);
    } // namespace Signals

    // other
    const uintptr_t OpcodeLookupTable = REBASE(0x6b83740);
    const uintptr_t CastArgs = REBASE(0x8fb6b0);
    const uintptr_t ConnectionDisconnect = REBASE(0x2252430);
    const uintptr_t EnableLoadModule = REBASE(0x8192758);
    const uintptr_t GetCapabilities = REBASE(0x8f7fd0);
    const uintptr_t GetFFlag = REBASE(0x2d28980);
    const uintptr_t GetGlobalState = REBASE(0x2219d10);
    const uintptr_t LockViolationInstanceCrash = REBASE(0x6d68658);
    const uintptr_t LockViolationScriptCrash = REBASE(0x6ca2828);
    const uintptr_t LuaStepIntervalMsOverrideEnabled = REBASE(0x6ca4fd8);
    const uintptr_t PhysicsSenderMaxBandwidthBps = REBASE(0x6cf2320);
    const uintptr_t Register = REBASE(0x1a4c260);
    const uintptr_t RobloxLogCrash = REBASE(0x2d1c420);
    const uintptr_t SetFFlag = REBASE(0x2d27e00);
    const uintptr_t WebSocketServiceEnableClientCreation = REBASE(0x6c9eee8);
    const uintptr_t WndProcessCheck = REBASE(0x6b49f30);
} // namespace Offsets
