// dumped by nick
// date: 2026-08-21 05:50:26
// took 11.4s
// success rate: 97.2%

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
    inline constexpr const char* LiveChannel = "version-ce0bcd0fbd484804";

    namespace Hyperion
    {
        const uintptr_t BitMap = HREBASE(0x210420);
        const uintptr_t ControlFlowGuard = HREBASE(0x8298c0);

        inline constexpr uint8_t ByteShift = 15;
        inline constexpr uint8_t PageShift = 12;
        inline constexpr uint32_t PageSize = 0x1000;
        inline constexpr uint32_t PageMask = 0xfff;
        inline constexpr uint8_t BitMask = 7;

        // other
        static const uint64_t patcheb[] = {
            0x339804, 0x7ec930, 0x84421c, 0x845a5b, 0x918c04, 
            0xb35fb4, 0x15803c0, 0x15d2228
        };
    } // namespace Hyperion

    namespace DataModel
    {
        const uintptr_t DataModelDeleterPointer = REBASE(0x1c4a008);
        const uintptr_t FakeDataModelPointer = REBASE(0x87d73e8);
        inline constexpr uintptr_t FakeToRealDataModel = 0x1d8;
        inline constexpr uintptr_t GameLoaded = 0x5c0;
        inline constexpr uintptr_t JobId = 0x118;
        inline constexpr uintptr_t PlaceId = 0x188;
        inline constexpr uintptr_t ScriptContext = 0x440;
        inline constexpr uintptr_t Children = 0x70;
    } // namespace DataModel

    namespace TaskScheduler
    {
        const uintptr_t RawScheduler = REBASE(0x7a9bb40);
        const uintptr_t Pointer = REBASE(0x89dd108);
        inline constexpr uintptr_t MaxFPS = 0xb0;
        inline constexpr uintptr_t JobStart = 0xc8;
        inline constexpr uintptr_t JobEnd = 0xd0;
        inline constexpr uintptr_t JobName = 0x18;
        const uintptr_t TargetFps = REBASE(0x89dd1b8);
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
        const uintptr_t Resume = REBASE(0x40ca400);
        const uintptr_t TaskQueue = REBASE(0x41749c0);
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
        const uintptr_t IdentityPtr = REBASE(0x7fe8828);
        const uintptr_t GetIdentityStruct = REBASE(0x1c1f160);
        const uintptr_t GetTlsPointer = REBASE(0x1420);
        const uintptr_t GetTlsPointer_wrapper = REBASE(0x4170);
        const uintptr_t Impersonator = REBASE(0x79c790);
        const uintptr_t rbxSpawn = REBASE(0x40d1bd0);
    } // namespace RobloxThread

    namespace Instance
    {
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        const uintptr_t GetModuleFromVMStateMap = REBASE(0x40d8240);
        const uintptr_t GetPropDescriptor = REBASE(0x4993b10);
        const uintptr_t GetProperty = REBASE(0x478f420);
        const uintptr_t GetPropertyData = REBASE(0x2acd6e0);
        inline constexpr uintptr_t getter = 0x18;
        const uintptr_t GetValues = REBASE(0x3f91a80);
        inline constexpr uintptr_t scriptable = 0x90;
        const uintptr_t SetParent = REBASE(0x1bf5ec0);
        inline constexpr uintptr_t ttype = 0x68;
        inline constexpr uintptr_t ttype_number = 0x30;
        const uintptr_t WaitForChild = REBASE(0x15f2670);
        inline constexpr uintptr_t PropertyMap = 0x250;
    } // namespace Instance

    namespace Property
    {
        const uintptr_t KTable = REBASE(0x6d1e608);
        const uintptr_t HashTableLookup = REBASE(0x106ceb0);
    } // namespace Property

    namespace Raknet
    {
        const uintptr_t HandleConnectionState = REBASE(0x458521b);
        const uintptr_t ProcessNetworkPacket = REBASE(0x28df870);
        const uintptr_t Receive = REBASE(0x28ca8b0);
        const uintptr_t ReportNetworkError = REBASE(0x4572860);
    } // namespace Raknet

    namespace Luau
    {
        const uintptr_t luaT_eventnames = REBASE(0x62bab28);
        const uintptr_t ClientOnRecieve = REBASE(0x45833f0);
        const uintptr_t currfuncname = REBASE(0x268f830);
        const uintptr_t f_luaopen = REBASE(0x268cf20);
        const uintptr_t GetLuaState = REBASE(0x4059610);
        const uintptr_t lua_break = REBASE(0x269d940);
        const uintptr_t lua_checkstack = REBASE(0x2692270);
        const uintptr_t lua_createtable = REBASE(0x15f1c30);
        const uintptr_t lua_exception = REBASE(0x2699de0);
        const uintptr_t lua_getfield = REBASE(0x268f990);
        const uintptr_t lua_newstate = REBASE(0x269afb0);
        const uintptr_t lua_pushvfstring = REBASE(0x2689b80);
        const uintptr_t lua_resume = REBASE(0x2690620);
        const uintptr_t lua_yield = REBASE(0x54f1ba0);
        const uintptr_t luaB_assert = REBASE(0x26d6270);
        const uintptr_t luaB_error = REBASE(0x2690620);
        const uintptr_t luaB_getmetatable = REBASE(0x54d2bd0);
        const uintptr_t luaB_newproxy = REBASE(0x26d753a);
        const uintptr_t luaB_next = REBASE(0x26d5d0b);
        const uintptr_t luaB_rawlen = REBASE(0x26d4af0);
        const uintptr_t luaB_rawset = REBASE(0x9cf930);
        const uintptr_t luaB_select = REBASE(0x26d6320);
        const uintptr_t luaB_setfenv = REBASE(0x26d27b0);
        const uintptr_t luaB_setmetatable = REBASE(0x26d1c90);
        const uintptr_t luaB_tonumber = REBASE(0x26d0d60);
        const uintptr_t luaC_step = REBASE(0x26a84d0);
        const uintptr_t luaD_rawrunprotected = REBASE(0x4774290);
        const uintptr_t luaD_throw = REBASE(0x2666d60);
        const uintptr_t luaF_freeproto = REBASE(0x26cbc40);
        const uintptr_t luaG_aritherror = REBASE(0x26ca500);
        const uintptr_t luaG_readonlyerror = REBASE(0x26ca760);
        const uintptr_t luaG_runerror = REBASE(0x26cada0);
        const uintptr_t luaG_runerrorl = REBASE(0x26cada0);
        const uintptr_t luaH_dummynode = REBASE(0x629a948);
        const uintptr_t luaL_argerrorl = REBASE(0x268f910);
        const uintptr_t luaL_checkstring = REBASE(0x268f990);
        const uintptr_t luaL_error = REBASE(0x2690620);
        const uintptr_t luaL_register = REBASE(0x2693760);
        const uintptr_t luaL_tostring = REBASE(0x2692d70);
        const uintptr_t luaL_typerrorL = REBASE(0x268f990);
        const uintptr_t luaM_free = REBASE(0x26d0310);
        const uintptr_t luaM_freegco = REBASE(0x26d0390);
        const uintptr_t luaM_visitgco = REBASE(0x26d04b0);
        const uintptr_t luaO_nilobject = REBASE(0x629dec8);
        const uintptr_t luaO_str2d = REBASE(0x2690620);
        const uintptr_t luaopen_base = REBASE(0x26d8380);
        const uintptr_t luaopen_bit32 = REBASE(0x54f4030);
        const uintptr_t luaopen_os = REBASE(0x598c4f0);
        const uintptr_t luau_execute = REBASE(0x424acf0);
        const uintptr_t luau_load = REBASE(0x26e58e0);
        const uintptr_t luaV_gettable = REBASE(0x269f690);
        const uintptr_t luaV_settable = REBASE(0x26a0520);
        const uintptr_t newclasspage = REBASE(0x26d00a0);
        const uintptr_t newpage = REBASE(0x26cfff0);
        const uintptr_t print = REBASE(0x1c68f60);
        const uintptr_t RaiseErr = REBASE(0x478f420);
    } // namespace Luau

    namespace Task
    {
        const uintptr_t cancel = REBASE(0x4184170);
        const uintptr_t defer = REBASE(0x4183400);
        const uintptr_t desynchronize = REBASE(0x4182870);
        const uintptr_t spawn = REBASE(0x4183890);
        const uintptr_t synchronize = REBASE(0x41823f0);
        const uintptr_t wait = REBASE(0x4183f00);
    } // namespace Task

    namespace Coroutine
    {
        const uintptr_t close = REBASE(0x54f1cf0);
        const uintptr_t create = REBASE(0x54f1400);
        const uintptr_t isyieldable = REBASE(0x54f1c70);
        const uintptr_t running = REBASE(0x54f1c00);
        const uintptr_t status = REBASE(0x54efd90);
        const uintptr_t wrap = REBASE(0x54f1940);
        const uintptr_t yield = REBASE(0x54f1ba0);
    } // namespace Coroutine

    namespace Signals
    {
        const uintptr_t FireAllClients = REBASE(0x34172f0);
        const uintptr_t FireMouseClick = REBASE(0x4db5e90);
        const uintptr_t FireProximityPrompt = REBASE(0x30bb3e0);
        const uintptr_t FireRightMouseClick = REBASE(0x1c1a3d0);
        const uintptr_t FireServer = REBASE(0x3416f70);
        const uintptr_t FireTouchInterest = REBASE(0xba42c0);
        const uintptr_t InvokeClient = REBASE(0x34796d0);
        const uintptr_t InvokeServer = REBASE(0x347ab20);
        const uintptr_t IsLegalSendEvent = REBASE(0x46a33b0);
        const uintptr_t TouchInterest = REBASE(0xca8810);
    } // namespace Signals

    // other
    const uintptr_t CastArgs = REBASE(0x173de30);
    const uintptr_t ConnectionDisconnect = REBASE(0x3ff63d0);
    const uintptr_t EnableLoadModule = REBASE(0x831da28);
    const uintptr_t GetCapabilities = REBASE(0x1c1f930);
    const uintptr_t GetFFlag = REBASE(0x479cb90);
    const uintptr_t GetGlobalState = REBASE(0x10da740);
    const uintptr_t LockViolationInstanceCrash = REBASE(0x6eb0498);
    const uintptr_t LockViolationScriptCrash = REBASE(0x6e3d4a0);
    const uintptr_t LuaStepIntervalMsOverrideEnabled = REBASE(0x6e40de0);
    const uintptr_t PhysicsSenderMaxBandwidthBps = REBASE(0x6e7a440);
    const uintptr_t Register = REBASE(0x3c32250);
    const uintptr_t RobloxLogCrash = REBASE(0x478d260);
    const uintptr_t SetFFlag = REBASE(0x479c010);
    const uintptr_t WebSocketServiceEnableClientCreation = REBASE(0x6e32b88);
    const uintptr_t WndProcessCheck = REBASE(0x6bbbd20);
} // namespace Offsets
