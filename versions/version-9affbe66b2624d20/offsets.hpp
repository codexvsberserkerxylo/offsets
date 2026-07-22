// dumped by nick
// date: 2026-07-22 11:03:05
// took 14.5s
// success rate: 96.8%

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
    inline constexpr const char* LiveChannel = "version-9affbe66b2624d20";

    namespace Hyperion
    {
        const uintptr_t BitMap = HREBASE(0x2414c8);
        const uintptr_t ControlFlowGuard = HREBASE(0x1473320);

        inline constexpr uint8_t ByteShift = 15;
        inline constexpr uint8_t PageShift = 12;
        inline constexpr uint32_t PageSize = 0x1000;
        inline constexpr uint32_t PageMask = 0xfff;
        inline constexpr uint8_t BitMask = 7;

        // other
        static const uint64_t patcheb[] = {
            0x697d6d, 0x719b94, 0xac3d80, 0xac7550, 0xad0a6c, 
            0xad8270, 0xeaf428, 0x147cf64
        };
    } // namespace Hyperion

    namespace DataModel
    {
        const uintptr_t DataModelDeleterPointer = REBASE(0x7c9670);
        const uintptr_t FakeDataModelPointer = REBASE(0x85c6908);
    } // namespace DataModel

    namespace ScriptContext
    {
        inline constexpr uintptr_t RequireBypass = 0x198;
        const uintptr_t Resume = REBASE(0x1eff560);
    } // namespace ScriptContext

    namespace BasePart
    {
        inline constexpr uintptr_t Overlap = 0x1f0;
    } // namespace BasePart

    namespace RobloxThread
    {
        const uintptr_t GetIdentityStruct = REBASE(0x672910);
        const uintptr_t GetTlsPointer = REBASE(-0x163a0e74);
        const uintptr_t IdentityPtr = REBASE(0x5e06342);
        const uintptr_t Impersonator = REBASE(0x65a330);
    } // namespace RobloxThread

    namespace TaskScheduler
    {
        inline constexpr uintptr_t JobsEnd = 0x1b0;
        inline constexpr uintptr_t MaxFps = 0x1d0;
        const uintptr_t TaskSchedulerTargetFps = REBASE(0x6054f78);
    } // namespace TaskScheduler

    namespace Instance
    {
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        const uintptr_t GetProperty = REBASE(0x1e81e80);
        inline constexpr uintptr_t PropertyMap = 0x250;
        const uintptr_t Push = REBASE(0x1e8d180);
    } // namespace Instance

    namespace Property
    {
        const uintptr_t HashTableLookup = REBASE(0x2d0ba90);
        const uintptr_t KTable = REBASE(0x8166010);
    } // namespace Property

    namespace Raknet
    {
        const uintptr_t HandleConnectionState = REBASE(0x247d650);
        const uintptr_t ProcessNetworkPacket = REBASE(0x40b7ab0);
        const uintptr_t Receive = REBASE(0x40bc6a0);
        const uintptr_t ReportNetworkError = REBASE(0x2472480);
        const uintptr_t Send = REBASE(0x40b80e0);
    } // namespace Raknet

    namespace Luau
    {
        const uintptr_t currfuncname = REBASE(0x7ec4c0);
        const uintptr_t f_luaopen = REBASE(0x7eb910);
        const uintptr_t lua_break = REBASE(0x7eb9c0);
        const uintptr_t lua_clock = REBASE(0x7f914a);
        const uintptr_t lua_exception = REBASE(0x7ea990);
        const uintptr_t lua_getfield = REBASE(0x7edcd0);
        const uintptr_t lua_pushfstringL = REBASE(0x7e7f10);
        const uintptr_t lua_pushstring = REBASE(0x7e8270);
        const uintptr_t lua_pushvfstring = REBASE(0x7e8610);
        const uintptr_t lua_resetthread = REBASE(0x7e64c0);
        const uintptr_t lua_resume = REBASE(-0x7639401a);
        const uintptr_t lua_setfield = REBASE(-0x42128953);
        const uintptr_t lua_yield = REBASE(0x7ebc20);
        const uintptr_t luaB_assert = REBASE(0x3ea6eb0);
        const uintptr_t luaB_error = REBASE(0x3ea6970);
        const uintptr_t luaB_gcinfo = REBASE(0x3ea6da0);
        const uintptr_t luaB_getfenv = REBASE(0x3ea6b00);
        const uintptr_t luaB_getmetatable = REBASE(0x1f0d570);
        const uintptr_t luaB_newproxy = REBASE(0x3ea6fd0);
        const uintptr_t luaB_next = REBASE(0x3ea6e50);
        const uintptr_t luaB_pcall = REBASE(0x7e7060);
        const uintptr_t luaB_pcallrun = REBASE(0x7e7de0);
        const uintptr_t luaB_print = REBASE(0x3ea6750);
        const uintptr_t luaB_rawequal = REBASE(0x3ea6c40);
        const uintptr_t luaB_rawget = REBASE(0x3ea6c90);
        const uintptr_t luaB_rawlen = REBASE(0x3ea6d40);
        const uintptr_t luaB_rawset = REBASE(0x3ea6ce0);
        const uintptr_t luaB_setfenv = REBASE(0x1fc2e00);
        const uintptr_t luaB_setmetatable = REBASE(0x3ea6a40);
        const uintptr_t luaB_tonumber = REBASE(0x3ea6830);
        const uintptr_t luaB_tostring = REBASE(0x3ea6fd0);
        const uintptr_t luaB_type = REBASE(0x3ea6dd0);
        const uintptr_t luaB_typeof = REBASE(0x3ea6e10);
        const uintptr_t luaC_step = REBASE(0x7f90f0);
        const uintptr_t luaF_freeproto = REBASE(0x7f7520);
        const uintptr_t luaF_newlclosure = REBASE(0x7f77f0);
        const uintptr_t luaF_newproto = REBASE(0x7f78a0);
        const uintptr_t luaG_runerror = REBASE(0x1fb0550);
        const uintptr_t luaG_runerrorl = REBASE(0x7fbfd0);
        const uintptr_t luaH_dummynode = REBASE(0x7fd340);
        const uintptr_t luaH_new = REBASE(0x7efb10);
        const uintptr_t luaL_argerrorl = REBASE(0x7ec750);
        const uintptr_t luaL_checkstring = REBASE(0x7edcd0);
        const uintptr_t luaL_checktype = REBASE(0x7ecda0);
        const uintptr_t luaL_error = REBASE(0x7ecda0);
        const uintptr_t luaL_errorl = REBASE(0x7fbfd0);
        const uintptr_t luaL_findtable = REBASE(0x7ecdf0);
        const uintptr_t luaL_getmetafield = REBASE(0x7cdb50);
        const uintptr_t luaL_register = REBASE(0x7ed497);
        const uintptr_t luaL_testudata = REBASE(0x8002c6);
        const uintptr_t luaL_tostring = REBASE(0x7ed5b0);
        const uintptr_t luaL_typeerrorL = REBASE(0x7edcd0);
        const uintptr_t luaM_free = REBASE(0x7f7b70);
        const uintptr_t luaM_freegco = REBASE(0x7f80c0);
        const uintptr_t luaM_toobig = REBASE(0x7fbf70);
        const uintptr_t luaM_visitgco = REBASE(0x7f7a20);
        const uintptr_t luaO_chunkid = REBASE(0x7fac10);
        const uintptr_t luaO_nilobject = REBASE(0x7e6674);
        const uintptr_t luaopen_base = REBASE(0x3ea7580);
        const uintptr_t luaopen_math = REBASE(0x3eb0a60);
        const uintptr_t luaT_eventnames = REBASE(0x5f1a698);
        const uintptr_t luaT_init = REBASE(0x7edfb0);
        const uintptr_t luaT_typenames = REBASE(0x63bc808);
        const uintptr_t luaV_gettable = REBASE(0x8003e0);
        const uintptr_t luaV_settable = REBASE(0x800aa0);
        const uintptr_t luaVM_load = REBASE(0x7e4e20);
        const uintptr_t print = REBASE(0x834d90);
        const uintptr_t pseudo2addr = REBASE(0x27e5690);
        const uintptr_t pusherror = REBASE(0x7e4e20);
    } // namespace Luau

    namespace Task
    {
        const uintptr_t cancel = REBASE(0x1fa90c0);
        const uintptr_t defer = REBASE(0x1fa93d0);
        const uintptr_t desynchronize = REBASE(0x1fa9a10);
        const uintptr_t spawn = REBASE(0x1faa2b0);
        const uintptr_t synchronize = REBASE(0x1faa430);
        const uintptr_t wait = REBASE(0x1faa630);
    } // namespace Task

    namespace Coroutine
    {
        const uintptr_t close = REBASE(0x3ea79b0);
        const uintptr_t create = REBASE(0x3ea7890);
        const uintptr_t isyieldable = REBASE(0x3ea7980);
        const uintptr_t resume = REBASE(0x3ea7ae0);
        const uintptr_t running = REBASE(0x3ea7950);
        const uintptr_t status = REBASE(0x3ea7820);
        const uintptr_t wrap = REBASE(0x3ea78d0);
        const uintptr_t yield = REBASE(0x3ea7930);
    } // namespace Coroutine

    namespace Signals
    {
        const uintptr_t FireLeftMouseClick = REBASE(0x4ea6d90);
        const uintptr_t FireMouseHoverEnter = REBASE(0x4ea6930);
        const uintptr_t FireMouseHoverLeave = REBASE(0x4ea6b20);
        const uintptr_t FireProximityPrompt = REBASE(0x4b79320);
        const uintptr_t FireRightMouseClick = REBASE(0x4ea6720);
        const uintptr_t FireTouchInterest = REBASE(0x1b829c0);
    } // namespace Signals

    namespace IsParallel
    {
        const uintptr_t ActorRequired_Call = REBASE(0x1e861e0);
        const uintptr_t ActorRequired_Prop = REBASE(0x1e86400);
        const uintptr_t Connection_Disconnect = REBASE(0x1e9fed0);
        const uintptr_t Event_Connect = REBASE(0x1e9ed80);
        const uintptr_t Event_ConnectParallel = REBASE(0x1e9f1b0);
        const uintptr_t Event_Once = REBASE(0x1ea28f0);
        const uintptr_t EventAccess = REBASE(0x1e82060);
        const uintptr_t FilterDescendants = REBASE(0x1eb21f0);
        const uintptr_t FunctionCall = REBASE(0x1e861e0);
        const uintptr_t Instance_fromExisting = REBASE(0x1f04710);
        const uintptr_t LocalSafe_Call = REBASE(0x1e861e0);
        const uintptr_t LocalSafe_Write = REBASE(0x1e86400);
        const uintptr_t PropertyRead = REBASE(0x1e82060);
        const uintptr_t PropertyWrite = REBASE(0x1e86400);
        const uintptr_t ScriptConnect = REBASE(0x1e9f1b0);
    } // namespace IsParallel

    // other
    const uintptr_t AttachRobloxExtraSpace = REBASE(0x1f1aa90);
    const uintptr_t CastArgs = REBASE(0x20b20e0);
    const uintptr_t closestate = REBASE(0x7e4d60);
    const uintptr_t ConnectionDisconnect = REBASE(0x27c95b0);
    const uintptr_t EnableLoadModule = REBASE(0x1fc2830);
    const uintptr_t GetCapabilities = REBASE(0x793540);
    const uintptr_t GetContextObject = REBASE(0x4af159da);
    const uintptr_t GetCurrentThreadId = REBASE(0x27bac80);
    const uintptr_t GetFFlag = REBASE(0x28d5b0);
    const uintptr_t GetGlobalState = REBASE(0x702990);
    const uintptr_t GetGlobalStateForInstance = REBASE(0x1e753e0);
    const uintptr_t loadsafe = REBASE(0x80d420);
    const uintptr_t LockViolationInstanceCrash = REBASE(0x63b8a78);
    const uintptr_t LockViolationScriptCrash = REBASE(0x624b500);
    const uintptr_t LuaStepIntervalMsOverrideEnabled = REBASE(0x624e198);
    const uintptr_t OpcodeLookupTable = REBASE(0x202dbc0);
    const uintptr_t PhysicsSenderMaxBandwidthBps = REBASE(0x62e7600);
    const uintptr_t Register = REBASE(0x17aba40);
    const uintptr_t RobloxLogCrash = REBASE(0x27c30f0);
    const uintptr_t SetFFlag = REBASE(0x27edf50);
    const uintptr_t WebSocketServiceEnableClientCreation = REBASE(0x6241380);
    const uintptr_t WndProcessCheck = REBASE(0x5ef86f0);
} // namespace Offsets

namespace Structs
{
    inline constexpr uintptr_t L_global = 0x60;
    inline constexpr uintptr_t g_gcstate = 0x49;
    inline constexpr uintptr_t CommonHeader_memcat = 0x2;
    inline constexpr uintptr_t Proto_code = 0x28;
    inline constexpr uintptr_t Proto_p = 0x40;
    inline constexpr uintptr_t Proto_k = 0x20;
    inline constexpr uintptr_t Proto_lineinfo = 0x50;
    inline constexpr uintptr_t Proto_locvars = 0x38;
    inline constexpr uintptr_t Proto_upvalues = 0x38;
    inline constexpr uintptr_t Proto_debuginsn = 0x38;
} // namespace Structs
