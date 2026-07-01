// dumped by nick
// date: 2026-06-24 15:59:24
// took 16.2s
// success rate: 97.5%

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
    inline constexpr const char* LiveChannel = "version-1a951716f19e4638";

    namespace Hyperion
    {
        const uintptr_t BitMap = HREBASE(0x14593d8);
        const uintptr_t ControlFlowGuard = HREBASE(0x7837d0);

        inline constexpr uint8_t ByteShift = 15;
        inline constexpr uint8_t PageShift = 12;
        inline constexpr uint32_t PageSize = 0x1000;
        inline constexpr uint32_t PageMask = 0xfff;
        inline constexpr uint8_t BitMask = 7;

        // other
        static const uint64_t patcheb[] = {
            0x3028c8, 0x566db0, 0x5686e4, 0x5af020, 0xa0dd80, 
            0x10c13e4, 0x10d9c0c, 0x12fc17c
        };
    } // namespace Hyperion

    namespace DataModel
    {
        const uintptr_t DataModelDeleterPointer = REBASE(0x7e9226);
        const uintptr_t FakeDataModelPointer = REBASE(0x7be9278);
    } // namespace DataModel

    namespace ScriptContext
    {
        inline constexpr uintptr_t RequireBypass = 0x198;
        const uintptr_t Resume = REBASE(0x1dbd460);
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
        const uintptr_t GetIdentityStruct = REBASE(0x4ae72d0);
        const uintptr_t GetTlsPointer = REBASE(0x1ce80e0);
        const uintptr_t Impersonator = REBASE(0x640dd0);
    } // namespace RobloxThread

    namespace TaskScheduler
    {
        inline constexpr uintptr_t JobName = 0x18;
        inline constexpr uintptr_t JobsEnd = 0x1b0;
        inline constexpr uintptr_t JobsStart = 0xc8;
        inline constexpr uintptr_t MaxFps = 0x1d0;
        const uintptr_t RawScheduler = REBASE(0x77b41b0);
        const uintptr_t TaskSchedulerTargetFps = REBASE(0x6973b88);
    } // namespace TaskScheduler

    namespace Instance
    {
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        const uintptr_t GetProperty = REBASE(0xc88a20);
        const uintptr_t Push = REBASE(0x1ce0cc0);
    } // namespace Instance

    namespace Property
    {
        const uintptr_t HashTableLookup = REBASE(0x1ca15b0);
        const uintptr_t KTable = REBASE(0x817a980);
    } // namespace Property

    namespace Raknet
    {
        const uintptr_t HandleConnectionState = REBASE(0xa55ad0);
        const uintptr_t ProcessNetworkPacket = REBASE(0x3154120);
        const uintptr_t ReportNetworkError = REBASE(0xa4aab0);
        const uintptr_t Send = REBASE(0x3099ce0);
    } // namespace Raknet

    namespace Luau
    {
        const uintptr_t currfuncname = REBASE(0x1cba420);
        const uintptr_t f_luaopen = REBASE(0x46b6290);
        const uintptr_t lua_break = REBASE(0x46b6340);
        const uintptr_t lua_clock = REBASE(0x46bacba);
        const uintptr_t lua_exception = REBASE(0x46b5320);
        const uintptr_t lua_getfield = REBASE(0x46b8640);
        const uintptr_t lua_newstate = REBASE(0x46b4380);
        const uintptr_t lua_pushfstringL = REBASE(0x46b14e0);
        const uintptr_t lua_pushstring = REBASE(0x46b1840);
        const uintptr_t lua_pushvfstring = REBASE(0x46b1be0);
        const uintptr_t lua_resetthread = REBASE(0x46b51f0);
        const uintptr_t lua_setfield = REBASE(0x170c102);
        const uintptr_t lua_yield = REBASE(0x46b65a0);
        const uintptr_t luaB_assert = REBASE(0x46cb560);
        const uintptr_t luaB_error = REBASE(0x46cb020);
        const uintptr_t luaB_gcinfo = REBASE(0x46cb450);
        const uintptr_t luaB_getfenv = REBASE(0x46cb1b0);
        const uintptr_t luaB_getmetatable = REBASE(0x1d0f280);
        const uintptr_t luaB_newproxy = REBASE(0x46cb680);
        const uintptr_t luaB_next = REBASE(0x46cb500);
        const uintptr_t luaB_pcall = REBASE(0x46b0650);
        const uintptr_t luaB_pcallrun = REBASE(0x46b13b0);
        const uintptr_t luaB_print = REBASE(0x46cae00);
        const uintptr_t luaB_rawequal = REBASE(0x2639d60);
        const uintptr_t luaB_rawget = REBASE(0x46cb340);
        const uintptr_t luaB_rawlen = REBASE(0x46cb3f0);
        const uintptr_t luaB_rawset = REBASE(0x46cb390);
        const uintptr_t luaB_setfenv = REBASE(0x1e07a90);
        const uintptr_t luaB_setmetatable = REBASE(0x46cb0f0);
        const uintptr_t luaB_tonumber = REBASE(0x46caee0);
        const uintptr_t luaB_tostring = REBASE(0x46cb680);
        const uintptr_t luaB_type = REBASE(0x46cb480);
        const uintptr_t luaB_typeof = REBASE(0x46cb4c0);
        const uintptr_t luaC_step = REBASE(0x46bac60);
        const uintptr_t luaD_rawrunprotected = REBASE(0x46b6850);
        const uintptr_t luaF_freeproto = REBASE(0x46e10b0);
        const uintptr_t luaF_newlclosure = REBASE(0x46e1370);
        const uintptr_t luaF_newproto = REBASE(0x46e1420);
        const uintptr_t luaG_runerror = REBASE(0x1e1c930);
        const uintptr_t luaG_runerrorl = REBASE(0x46b9400);
        const uintptr_t luaH_dummynode = REBASE(0x46c95a0);
        const uintptr_t luaH_new = REBASE(0x46d9e80);
        const uintptr_t luaL_argerrorl = REBASE(0x46b70c0);
        const uintptr_t luaL_checkstring = REBASE(0x46b8640);
        const uintptr_t luaL_checktype = REBASE(0x46b7710);
        const uintptr_t luaL_error = REBASE(0x46b7710);
        const uintptr_t luaL_errorl = REBASE(0x46b7710);
        const uintptr_t luaL_findtable = REBASE(0x46b7760);
        const uintptr_t luaL_getmetafield = REBASE(0x1d041f0);
        const uintptr_t luaL_register = REBASE(0x46b7de0);
        const uintptr_t luaL_testudata = REBASE(0x46e2cf0);
        const uintptr_t luaL_tostring = REBASE(0x1cba420);
        const uintptr_t luaL_typeerrorL = REBASE(0x46b8640);
        const uintptr_t luaM_free = REBASE(0x46d79e0);
        const uintptr_t luaM_freegco = REBASE(0x46d7f20);
        const uintptr_t luaM_toobig = REBASE(0x46b93a0);
        const uintptr_t luaM_visitgco = REBASE(0x46d7880);
        const uintptr_t luaO_chunkid = REBASE(0x46e7380);
        const uintptr_t luaO_nilobject = REBASE(0x46afc74);
        const uintptr_t luaopen_base = REBASE(0x46cbc30);
        const uintptr_t luaopen_math = REBASE(0x170bdc1);
        const uintptr_t luaT_eventnames = REBASE(0x6933508);
        const uintptr_t luaT_init = REBASE(0x46d8300);
        const uintptr_t luaT_typenames = REBASE(0x5d80060);
        const uintptr_t luaV_gettable = REBASE(0x46e3000);
        const uintptr_t luaV_settable = REBASE(0x46e3510);
        const uintptr_t luaVM_load = REBASE(0x3a82580);
        const uintptr_t newgcoblock = REBASE(0x46d7ff0);
        const uintptr_t print = REBASE(0x1e6b8e0);
        const uintptr_t pseudo2addr = REBASE(0x4b17480);
        const uintptr_t pusherror = REBASE(0x46b3df0);
    } // namespace Luau

    namespace Task
    {
        const uintptr_t cancel = REBASE(0x1e2d110);
        const uintptr_t defer = REBASE(0x1e2d420);
        const uintptr_t desynchronize = REBASE(0x1e2da60);
        const uintptr_t spawn = REBASE(0x1e2e300);
        const uintptr_t synchronize = REBASE(0x1e2e480);
        const uintptr_t wait = REBASE(0x1e2e680);
    } // namespace Task

    namespace Coroutine
    {
        const uintptr_t close = REBASE(0x46cc060);
        const uintptr_t create = REBASE(0x46cbf40);
    } // namespace Coroutine

    namespace Signals
    {
        const uintptr_t FireLeftMouseClick = REBASE(0x2611d70);
        const uintptr_t FireMouseHoverEnter = REBASE(0x2611f80);
        const uintptr_t FireMouseHoverLeave = REBASE(0x2612170);
        const uintptr_t FireTouchInterest = REBASE(0x2a6ca60);
    } // namespace Signals

    namespace IsParallel
    {
        const uintptr_t ActorRequired_Call = REBASE(0x1cd9d10);
        const uintptr_t ActorRequired_Prop = REBASE(0x1cd9f30);
        const uintptr_t Connection_Disconnect = REBASE(0x1cf54a0);
        const uintptr_t Event_Connect = REBASE(0x1cf4340);
        const uintptr_t Event_ConnectParallel = REBASE(0x1cf4770);
        const uintptr_t Event_Once = REBASE(0x1cf7eb0);
        const uintptr_t EventAccess = REBASE(0x1cd5c20);
        const uintptr_t FilterDescendants = REBASE(0x1d56480);
        const uintptr_t FunctionCall = REBASE(0x1cd9d10);
        const uintptr_t Instance_fromExisting = REBASE(0x1d9d5f0);
        const uintptr_t LocalSafe_Call = REBASE(0x1cd9d10);
        const uintptr_t LocalSafe_Write = REBASE(0x1cd9f30);
        const uintptr_t PropertyRead = REBASE(0x1cd5c20);
        const uintptr_t PropertyWrite = REBASE(0x1cd9f30);
        const uintptr_t ScriptConnect = REBASE(0x1cf4770);
    } // namespace IsParallel

    // other
    const uintptr_t AttachRobloxExtraSpace = REBASE(0x1d1cb30);
    const uintptr_t CastArgs = REBASE(0x3a931a0);
    const uintptr_t closestate = REBASE(0x46b3d30);
    const uintptr_t ConnectionDisconnect = REBASE(0x4b02dd0);
    const uintptr_t EnableLoadModule = REBASE(0x1e074c0);
    const uintptr_t GetCapabilities = REBASE(0x4716af0);
    const uintptr_t GetContextObject = REBASE(0x1cfe420);
    const uintptr_t GetCurrentThreadId = REBASE(0x4ae72d0);
    const uintptr_t GetFFlag = REBASE(0x2c7e70);
    const uintptr_t GetGlobalState = REBASE(0x1cfe420);
    const uintptr_t GetGlobalStateForInstance = REBASE(0x1cea130);
    const uintptr_t loadsafe = REBASE(0x46bc6a0);
    const uintptr_t LockViolationInstanceCrash = REBASE(0x5e674b8);
    const uintptr_t LockViolationScriptCrash = REBASE(0x5e6d898);
    const uintptr_t LuaStepIntervalMsOverrideEnabled = REBASE(0x5e7d230);
    const uintptr_t markroot = REBASE(0x46bb150);
    const uintptr_t OpcodeLookupTable = REBASE(0x3392000);
    const uintptr_t PhysicsSenderMaxBandwidthBps = REBASE(0x5d22750);
    const uintptr_t Register = REBASE(0x2bd2ee0);
    const uintptr_t RobloxLogCrash = REBASE(0x4afdf00);
    const uintptr_t SetFFlag = REBASE(0x4b2a6c0);
    const uintptr_t traversetable = REBASE(0x46bc020);
    const uintptr_t WebSocketServiceEnableClientCreation = REBASE(0x61c6df0);
    const uintptr_t WndProcessCheck = REBASE(0x5c86000);
} // namespace Offsets

namespace Structs
{
    inline constexpr uintptr_t L_global = 0x60;
    inline constexpr uintptr_t g_gcstate = 0x1;
    inline constexpr uintptr_t g_freepages = 0x1a8;
    inline constexpr uintptr_t Proto_code = 0x68;
    inline constexpr uintptr_t Proto_p = 0x20;
    inline constexpr uintptr_t Proto_k = 0x60;
    inline constexpr uintptr_t Proto_lineinfo = 0x58;
    inline constexpr uintptr_t Proto_locvars = 0x70;
    inline constexpr uintptr_t Proto_upvalues = 0x50;
    inline constexpr uintptr_t Proto_debuginsn = 0x50;
} // namespace Structs