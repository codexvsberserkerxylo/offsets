// dumped by nick
// date: 2026-07-26 19:35:21
// took 13.7s
// success rate: 97.1%

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
    inline constexpr const char* LiveChannel = "version-ed2b47b81f08484a";

    namespace Hyperion
    {
        const uintptr_t BitMap = HREBASE(0x12a6278);
        const uintptr_t ControlFlowGuard = HREBASE(0x75b4a0);

        inline constexpr uint8_t ByteShift = 15;
        inline constexpr uint8_t PageShift = 12;
        inline constexpr uint32_t PageSize = 0x1000;
        inline constexpr uint32_t PageMask = 0xfff;
        inline constexpr uint8_t BitMask = 7;

        // other
        static const uint64_t patcheb[] = {
            0x1df6c, 0x173df4, 0x184628, 0x1c821c, 0x336870, 
            0x336c10, 0x771640, 0x925958
        };
    } // namespace Hyperion

    namespace DataModel
    {
        const uintptr_t DataModelDeleterPointer = REBASE(0x7f6d06);
        const uintptr_t FakeDataModelPointer = REBASE(0x7dccd88);
    } // namespace DataModel

    namespace ScriptContext
    {
        inline constexpr uintptr_t RequireBypass = 0x198; // still broken
        const uintptr_t Resume = REBASE(0x1e2da8c);
    } // namespace ScriptContext

    namespace BasePart
    {
        inline constexpr uintptr_t Overlap = 0x1f0;
        inline constexpr uintptr_t Primitive = 0x128;
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
        inline constexpr uintptr_t ModuleScriptByteCode = 0x138;
        inline constexpr uintptr_t ScriptByteCode = 0x190;
    } // namespace 0x190

    namespace RobloxThread
    {
        const uintptr_t GetIdentityStruct = REBASE(0x1d595a0); // idk
        const uintptr_t GetTlsPointer = REBASE(0x7eb0);
        const uintptr_t IdentityPtr = REBASE(0x1e29c32); // idk 
        const uintptr_t Impersonator = REBASE(0x64d0d0); 
    } // namespace RobloxThread

    namespace TaskScheduler
    {
        inline constexpr uintptr_t JobName = 0x18;
        inline constexpr uintptr_t JobsEnd = 0xd0;
        inline constexpr uintptr_t JobsStart = 0xc8;
        inline constexpr uintptr_t MaxFps = 0x1d0;
        const uintptr_t Pointer = REBASE(0x85e2730);
        const uintptr_t TaskSchedulerTargetFps = REBASE(0x85e2900); // i think
    } // namespace TaskScheduler

    namespace Instance
    {
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        const uintptr_t GetProperty = REBASE(0xcab800);
        inline constexpr uintptr_t getter = 0x18;
        inline constexpr uintptr_t PropertyMap = 0x250;
        const uintptr_t Push = REBASE(0x1d51980);
        inline constexpr uintptr_t scriptable = 0x90;
        inline constexpr uintptr_t ttype = 0x68;
        inline constexpr uintptr_t ttype_number = 0x30;
    } // namespace Instance

    namespace Property
    {
        const uintptr_t HashTableLookup = REBASE(0x502edb0);
        const uintptr_t KTable = REBASE(0x836c500);
    } // namespace Property

    namespace Raknet
    {
        const uintptr_t HandleConnectionState = REBASE(0xa6d7c0);
        const uintptr_t ProcessNetworkPacket = REBASE(0x3235eb3);
        const uintptr_t Receive = REBASE(0x323a61c);
        const uintptr_t ReportNetworkError = REBASE(0xa628b1);
        const uintptr_t Send = REBASE(0x3235fc0);
    } // namespace Raknet

    namespace Luau
    {
        const uintptr_t currfuncname = REBASE(0x1d2b23e);
        const uintptr_t f_luaopen = REBASE(0x4b21040);
        const uintptr_t lua_break = REBASE(0x4b210f0);
        const uintptr_t lua_clock = REBASE(0x4b25b3a);
        const uintptr_t lua_exception = REBASE(0x4b200c0);
        const uintptr_t lua_getfield = REBASE(0x4b23405);
        const uintptr_t lua_pushfstringL = REBASE(0x4b1be70);
        const uintptr_t lua_pushstring = REBASE(0x4b1c1d0);
        const uintptr_t lua_pushvfstring = REBASE(0x4b1c570);
        const uintptr_t lua_resetthread = REBASE(0x4b1ff90);
        const uintptr_t lua_resume = REBASE(0x4b21600);
        const uintptr_t lua_setfield = REBASE(0x4ab1062);
        const uintptr_t lua_yield = REBASE(0x4b21350);
        const uintptr_t luaB_assert = REBASE(0x4b36b20);
        const uintptr_t luaB_error = REBASE(0x4b365e0);
        const uintptr_t luaB_gcinfo = REBASE(0x4b36a10);
        const uintptr_t luaB_getfenv = REBASE(0x4b36770);
        const uintptr_t luaB_getmetatable = REBASE(0x1db18ba);
        const uintptr_t luaB_newproxy = REBASE(0x4b36cc1);
        const uintptr_t luaB_next = REBASE(0x4b36ac0);
        const uintptr_t luaB_pcall = REBASE(0x4b1afc0);
        const uintptr_t luaB_pcallrun = REBASE(0x4b1bd40);
        const uintptr_t luaB_print = REBASE(0x4b363c0);
        const uintptr_t luaB_rawequal = REBASE(0x26c3c80);
        const uintptr_t luaB_rawget = REBASE(0x4b36900);
        const uintptr_t luaB_rawlen = REBASE(0x4b369b0);
        const uintptr_t luaB_rawset = REBASE(0x4b36950);
        const uintptr_t luaB_setfenv = REBASE(0x1e83c00);
        const uintptr_t luaB_setmetatable = REBASE(0x4b36749);
        const uintptr_t luaB_tonumber = REBASE(0x4b364a0);
        const uintptr_t luaB_tostring = REBASE(0x4b36cc1);
        const uintptr_t luaB_type = REBASE(0x4b36a40);
        const uintptr_t luaB_typeof = REBASE(0x4b36a80);
        const uintptr_t luaC_step = REBASE(0x4b25ae0);
        const uintptr_t luaD_throw = REBASE(0x4b210c0);
        const uintptr_t luaF_freeproto = REBASE(0x4b4c660);
        const uintptr_t luaF_newlclosure = REBASE(0x4b4c930);
        const uintptr_t luaF_newproto = REBASE(0x4b4c9e0);
        const uintptr_t luaG_runerror = REBASE(0x1e713a0);
        const uintptr_t luaG_runerrorl = REBASE(0x4b24200);
        const uintptr_t luaH_dummynode = REBASE(0x6b746d0);
        const uintptr_t luaH_new = REBASE(0x4b45410);
        const uintptr_t luaL_argerrorl = REBASE(0x4b22100);
        const uintptr_t luaL_checkstring = REBASE(0x4b23405);
        const uintptr_t luaL_checktype = REBASE(0x4b224d0);
        const uintptr_t luaL_error = REBASE(0x4b224d0);
        const uintptr_t luaL_errorl = REBASE(0x4b224d0);
        const uintptr_t luaL_findtable = REBASE(0x4b22520);
        const uintptr_t luaL_getmetafield = REBASE(0x7433d0);
        const uintptr_t luaL_register = REBASE(0x4b22ca4);
        const uintptr_t luaL_testudata = REBASE(0x4b4e2c6);
        const uintptr_t luaL_tostring = REBASE(0x1d2b205);
        const uintptr_t luaL_typeerrorL = REBASE(0x4b23405);
        const uintptr_t luaM_free = REBASE(0x4b42f90);
        const uintptr_t luaM_freegco = REBASE(0x4b434e0);
        const uintptr_t luaM_toobig = REBASE(0x4b241d0);
        const uintptr_t luaM_visitgco = REBASE(0x4b42e40);
        const uintptr_t luaO_chunkid = REBASE(0x4b52960);
        const uintptr_t luaO_nilobject = REBASE(0x6b76f08);
        const uintptr_t luau_execute = REBASE(0x4B34050);
        const uintptr_t luaopen_base = REBASE(0x4b37310);
        const uintptr_t luaopen_math = REBASE(0x4ab0f89);
        const uintptr_t luaT_eventnames = REBASE(0x6b76d08);
        const uintptr_t luaT_init = REBASE(0x4b438b0);
        const uintptr_t luaT_typenames = REBASE(0x5f0e840);
        const uintptr_t luaV_gettable = REBASE(0x4b4e750);
        const uintptr_t luaV_settable = REBASE(0x4b4ee0f);
        const uintptr_t luaVM_load = REBASE(0x4b07200);
        const uintptr_t print = REBASE(0x4be0790);
        const uintptr_t pseudo2addr = REBASE(0x5104320);
        const uintptr_t pusherror = REBASE(0x4b1eb06);
    } // namespace Luau

    namespace Task
    {
        const uintptr_t cancel = REBASE(0x1ea27e0);
        const uintptr_t defer = REBASE(0x1ea2dcf);
        const uintptr_t desynchronize = REBASE(0x1ea3267);
        const uintptr_t spawn = REBASE(0x1ea3940);
        const uintptr_t synchronize = REBASE(0x1ea3c87);
        const uintptr_t wait = REBASE(0x1ea3cda);
    } // namespace Task

    namespace Coroutine
    {
        const uintptr_t close = REBASE(0x4b3771e);
        const uintptr_t create = REBASE(0x4b37500);
        const uintptr_t isyieldable = REBASE(0x4b375f0);
        const uintptr_t resume = REBASE(0x4b37750);
        const uintptr_t running = REBASE(0x4b375c0);
        const uintptr_t status = REBASE(0x4b37490);
        const uintptr_t wrap = REBASE(0x4b37540);
        const uintptr_t yield = REBASE(0x4b375a0);
    } // namespace Coroutine

    namespace Signals
    {
        const uintptr_t FireMouseHoverEnter = REBASE(0x26a1c00);
        const uintptr_t FireMouseHoverLeave = REBASE(0x26a1df0);
        const uintptr_t FireProximityPrompt = REBASE(0x26ddd80);
        const uintptr_t FireRightMouseClick = REBASE(0x26a19f0);
        const uintptr_t FireTouchInterest = REBASE(0x2b10090);
    } // namespace Signals

    namespace IsParallel
    {
        const uintptr_t ActorRequired_Call = REBASE(0x1d4a9e0);
        const uintptr_t ActorRequired_Prop = REBASE(0x1d4ac26);
        const uintptr_t Connection_Disconnect = REBASE(0x1d66926);
        const uintptr_t Event_Connect = REBASE(0x1d65a8a);
        const uintptr_t Event_ConnectParallel = REBASE(0x1d66042);
        const uintptr_t Event_Once = REBASE(0x1d69303);
        const uintptr_t EventAccess = REBASE(0x1d46d0c);
        const uintptr_t FilterDescendants = REBASE(0x1d794a0);
        const uintptr_t FunctionCall = REBASE(0x1d4abc9);
        const uintptr_t Instance_fromExisting = REBASE(0x1e0da20);
        const uintptr_t LocalSafe_Call = REBASE(0x1d4aba1);
        const uintptr_t LocalSafe_Write = REBASE(0x1d4adc1);
        const uintptr_t PropertyRead = REBASE(0x1d468f0);
        const uintptr_t PropertyWrite = REBASE(0x1d4ade9);
        const uintptr_t ScriptConnect = REBASE(0x1d65ba0);
    } // namespace IsParallel

    // other
    const uintptr_t AttachRobloxExtraSpace = REBASE(0x1dbeee0);
    const uintptr_t CastArgs = REBASE(0x3b65f00);
    const uintptr_t closestate = REBASE(0x4b1e860);
    const uintptr_t ConnectionDisconnect = REBASE(0x50efc80);
    const uintptr_t EnableLoadModule = REBASE(0x1e83630);
    const uintptr_t GetCapabilities = REBASE(0x4be5d40);
    const uintptr_t GetContextObject = REBASE(0x1d6f9b0);
    const uintptr_t GetCurrentThreadId = REBASE(0x50d4080);
    const uintptr_t GetFFlag = REBASE(0x511c700);
    const uintptr_t GetGlobalState = REBASE(0x4adbf2cc);
    const uintptr_t GetLuaStateForInstance = REBASE(0x1d5f910); // or 0x1d5f230
    const uintptr_t loadsafe = REBASE(0x4b29078);
    const uintptr_t LockViolationInstanceCrash = REBASE(0x5febc58);
    const uintptr_t LockViolationScriptCrash = REBASE(0x5ff2148);
    const uintptr_t LuaStepIntervalMsOverrideEnabled = REBASE(0x60019c8);
    const uintptr_t OpcodeLookupTable = REBASE(0x6b74568); // or 0x6358a60
    const uintptr_t PhysicsSenderMaxBandwidthBps = REBASE(0x5ea5140);
    const uintptr_t Register = REBASE(0x2c93ace);
    const uintptr_t RobloxLogCrash = REBASE(0x50eaca0);
    const uintptr_t SetFFlag = REBASE(0x51221b0);
    const uintptr_t WebSocketServiceEnableClientCreation = REBASE(0x5ef9f28);
    const uintptr_t WndProcessCheck = REBASE(0x5e062a0);
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
