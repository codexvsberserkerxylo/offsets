// dumped by nick
// date: 2026-07-16 16:56:03
// took 12.5s
// success rate: 98.2%

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
    inline constexpr const char* LiveChannel = "version-ddf02245bdbb428c";

    namespace Hyperion
    {
        const uintptr_t BitMap = HREBASE(0x165a8);
        const uintptr_t ControlFlowGuard = HREBASE(0x56dfd0);

        inline constexpr uint8_t ByteShift = 15;
        inline constexpr uint8_t PageShift = 12;
        inline constexpr uint32_t PageSize = 0x1000;
        inline constexpr uint32_t PageMask = 0xfff;
        inline constexpr uint8_t BitMask = 7;

        // other
        static const uint64_t patcheb[] = {
            0x1391a4, 0x13bbf8, 0x157608, 0x877d48, 0xc64c1c, 
            0xc6634f, 0xce2154, 0xd7bb1c
        };
    } // namespace Hyperion

    namespace DataModel
    {
        const uintptr_t DataModelDeleterPointer = REBASE(0x7f4426);
        const uintptr_t FakeDataModelPointer = REBASE(0x7d28508);
    } // namespace DataModel

    namespace ScriptContext
    {
        inline constexpr uintptr_t RequireBypass = 0x198;
        inline constexpr uintptr_t ToResume = 0x7D8; // verified in ida
        const uintptr_t Resume = REBASE(0x1e067f0);
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
        inline constexpr uintptr_t ModuleScriptByteCode = 0x138;
        inline constexpr uintptr_t ScriptByteCode = 0x190;
    } // namespace ByteCode

    namespace RobloxThread
    {
        // got these 3 from ida because they were wrong
        const uintptr_t GetIdentityStruct = REBASE(0x47EFFE0);
        const uintptr_t GetTlsPointer = REBASE(0xA120); // why are people saying its 7ee0 ???
        const uintptr_t IdentityPtr = REBASE(0x82AB098);
        const uintptr_t Impersonator = REBASE(0x64a6e0);
    } // namespace RobloxThread

    namespace TaskScheduler
    {
        inline constexpr uintptr_t JobsEnd = 0x1b0;
        inline constexpr uintptr_t MaxFps = 0x1d0;
        const uintptr_t TaskSchedulerTargetFps = REBASE(0x6a8deb8);
    } // namespace TaskScheduler

    namespace Instance
    {
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        inline constexpr uintptr_t PropertyMap = 0x250; // verified in ida
        const uintptr_t GetProperty = REBASE(0xc9d2a0);
        const uintptr_t Push = REBASE(0x1d29c40);
    } // namespace Instance

    namespace Property
    {
        const uintptr_t HashTableLookup = REBASE(0x1ce88b0);
        const uintptr_t KTable = REBASE(0x82bb920);
    } // namespace Property

    namespace Raknet // verified too
    {
        const uintptr_t HandleConnectionState = REBASE(0xa600b0);
        const uintptr_t ProcessNetworkPacket = REBASE(0x31e13c0);
        const uintptr_t Receive = REBASE(0x31e5fb0);
        const uintptr_t ReportNetworkError = REBASE(0xa54a60);
        const uintptr_t Send = REBASE(0x31e19f0);
    } // namespace Raknet

    namespace Luau
    {
        const uintptr_t currfuncname = REBASE(0x1d033b0);
        const uintptr_t f_luaopen = REBASE(0x478f620);
        const uintptr_t lua_break = REBASE(0x478f6d0);
        const uintptr_t lua_clock = REBASE(0x4793efa);
        const uintptr_t lua_exception = REBASE(0x478e690);
        const uintptr_t lua_getfield = REBASE(0x47919e0);
        const uintptr_t lua_newstate = REBASE(0x478d6f0);
        const uintptr_t lua_pushfstringL = REBASE(0x478a860);
        const uintptr_t lua_pushstring = REBASE(0x478abd0);
        const uintptr_t lua_pushvfstring = REBASE(0x478af70);
        const uintptr_t lua_resetthread = REBASE(0x478e560);
        const uintptr_t lua_setfield = REBASE(0x174e332);
        const uintptr_t lua_yield = REBASE(0x478f930);
        const uintptr_t luaB_assert = REBASE(0x47a48e0);
        const uintptr_t luaB_error = REBASE(0x47a43a0);
        const uintptr_t luaB_gcinfo = REBASE(0x47a47d0);
        const uintptr_t luaB_getfenv = REBASE(0x47a4530);
        const uintptr_t luaB_getmetatable = REBASE(0x1d584d7);
        const uintptr_t luaB_newproxy = REBASE(0x47a4a00);
        const uintptr_t luaB_next = REBASE(0x47a4880);
        const uintptr_t luaB_pcall = REBASE(0x47899d0);
        const uintptr_t luaB_pcallrun = REBASE(0x478a720);
        const uintptr_t luaB_print = REBASE(0x47a4180);
        const uintptr_t luaB_rawequal = REBASE(0x2694420);
        const uintptr_t luaB_rawget = REBASE(0x47a46c0);
        const uintptr_t luaB_rawlen = REBASE(0x47a4770);
        const uintptr_t luaB_rawset = REBASE(0x47a4710);
        const uintptr_t luaB_setfenv = REBASE(0x1e56040);
        const uintptr_t luaB_setmetatable = REBASE(0x47a4470);
        const uintptr_t luaB_tonumber = REBASE(0x47a4260);
        const uintptr_t luaB_tostring = REBASE(0x47a4a00);
        const uintptr_t luaB_type = REBASE(0x47a4800);
        const uintptr_t luaB_typeof = REBASE(0x47a4840);
        const uintptr_t luaC_step = REBASE(0x4793ea0);
        const uintptr_t luaD_rawrunprotected = REBASE(0x478fbf0);
        const uintptr_t luaF_newlclosure = REBASE(0x47ba720);
        const uintptr_t luaF_newproto = REBASE(0x47ba7d0);
        const uintptr_t luaF_freeproto = REBASE(0x47BA460); // verified in ida
        const uintptr_t luaG_runerror = REBASE(0x1e6ae90);
        const uintptr_t luaG_runerrorl = REBASE(0x4792780);
        const uintptr_t luaH_dummynode = REBASE(0x47a2980);
        const uintptr_t luaH_new = REBASE(0x47b31f0);
        const uintptr_t luaL_argerrorl = REBASE(0x4790450);
        const uintptr_t luaL_checkstring = REBASE(0x47919e0);
        const uintptr_t luaL_checktype = REBASE(0x4790aa0);
        const uintptr_t luaL_error = REBASE(0x4790aa0);
        const uintptr_t luaL_errorl = REBASE(0x4790aa0);
        const uintptr_t luaL_findtable = REBASE(0x4790af0);
        const uintptr_t luaL_getmetafield = REBASE(0x740d30);
        const uintptr_t luaL_register = REBASE(0x47911a7);
        const uintptr_t luaL_testudata = REBASE(0x47bc0a0);
        const uintptr_t luaL_tostring = REBASE(0x1d033b0);
        const uintptr_t luaL_typeerrorL = REBASE(0x47919e0);
        const uintptr_t luaM_free = REBASE(0x47b0d50);
        const uintptr_t luaM_freegco = REBASE(0x47b1280);
        const uintptr_t luaM_toobig = REBASE(0x4792720);
        const uintptr_t luaM_visitgco = REBASE(0x47b0bf0);
        const uintptr_t luaO_chunkid = REBASE(0x47c0770);
        const uintptr_t luaO_nilobject = REBASE(0x4788ff4);
        const uintptr_t luaopen_base = REBASE(0x47a4fb0);
        const uintptr_t luaopen_math = REBASE(0x174c5c0);
        const uintptr_t luaT_eventnames = REBASE(0x6a4d3e8);
        const uintptr_t luaT_init = REBASE(0x47b1660);
        const uintptr_t luaT_typenames = REBASE(0x5e9a240);
        const uintptr_t luau_execute = REBASE(0x47a1e30); // verified in ida
        const uintptr_t luaV_gettable = REBASE(0x47bc3b0);
        const uintptr_t luaV_settable = REBASE(0x47bc8b0);
        const uintptr_t luaVM_load = REBASE(0x463fd18);
        const uintptr_t newgcoblock = REBASE(0x47b1350);
        const uintptr_t print = REBASE(0x470c4e0);
        const uintptr_t pseudo2addr = REBASE(0x4b0ecb0);
        const uintptr_t pusherror = REBASE(0x478d160);
    } // namespace Luau

    namespace Task
    {
        const uintptr_t cancel = REBASE(0x1e7b660);
        const uintptr_t defer = REBASE(0x1e7b970);
        const uintptr_t desynchronize = REBASE(0x1e7bfb0);
        const uintptr_t spawn = REBASE(0x1e7c850);
        const uintptr_t synchronize = REBASE(0x1e7c9d0);
        const uintptr_t wait = REBASE(0x1e7cbd0);
    } // namespace Task

    namespace Coroutine // verified in ida
    {
        const uintptr_t close = REBASE(0x47a53e0);
        const uintptr_t create = REBASE(0x47a52c0);
        const uintptr_t isyieldable = REBASE(0x47a53b0);
        const uintptr_t resume = REBASE(0x47a5510);
        const uintptr_t running = REBASE(0x47a5380);
        const uintptr_t status = REBASE(0x47a5250);
        const uintptr_t wrap = REBASE(0x47a5300);
        const uintptr_t yield = REBASE(0x47a5360);
    } // namespace Coroutine

    namespace Signals // verified in ida
    {
        const uintptr_t FireLeftMouseClick = REBASE(0x266d770);
        const uintptr_t FireMouseHoverEnter = REBASE(0x266d980);
        const uintptr_t FireMouseHoverLeave = REBASE(0x266db70);
        const uintptr_t FireProximityPrompt = REBASE(0x26ade00);
        const uintptr_t FireRightMouseClick = REBASE(0x266dde0);
        const uintptr_t FireTouchInterest = REBASE(0x2ACAF00); // verified in ida
    } // namespace Signals

    namespace IsParallel
    {
        const uintptr_t ActorRequired_Call = REBASE(0x1d22cc6);
        const uintptr_t ActorRequired_Prop = REBASE(0x1d22ec0);
        const uintptr_t Connection_Disconnect = REBASE(0x1d3e370);
        const uintptr_t Event_Connect = REBASE(0x1d3d220);
        const uintptr_t Event_ConnectParallel = REBASE(0x1d3d650);
        const uintptr_t Event_Once = REBASE(0x1d40d80);
        const uintptr_t EventAccess = REBASE(0x1d1ebd7);
        const uintptr_t FilterDescendants = REBASE(0x1da02d0);
        const uintptr_t FunctionCall = REBASE(0x1d22cc6);
        const uintptr_t Instance_fromExisting = REBASE(0x1de6950);
        const uintptr_t LocalSafe_Call = REBASE(0x1d22cc6);
        const uintptr_t LocalSafe_Write = REBASE(0x1d22ec0);
        const uintptr_t PropertyRead = REBASE(0x1d1ebd7);
        const uintptr_t PropertyWrite = REBASE(0x1d22ec0);
        const uintptr_t ScriptConnect = REBASE(0x1d3d650);
    } // namespace IsParallel

    // other
    const uintptr_t AttachRobloxExtraSpace = REBASE(0x1d65bd0);
    const uintptr_t CastArgs = REBASE(0x3b26850);
    const uintptr_t closestate = REBASE(0x478d0a0);
    const uintptr_t ConnectionDisconnect = REBASE(0x4afa5f0);
    const uintptr_t EnableLoadModule = REBASE(0x1e55a70);
    const uintptr_t GetCapabilities = REBASE(0x47f0430);
    const uintptr_t GetContextObject = REBASE(0x1d47450);
    const uintptr_t GetCurrentThreadId = REBASE(0x4ade9f0);
    const uintptr_t GetFFlag = REBASE(0x2c7d90);
    const uintptr_t GetGlobalState = REBASE(0x9cf3b0);
    const uintptr_t GetGlobalStateForInstance = REBASE(0x1d33080);
    const uintptr_t loadsafe = REBASE(0x4795b20);
    const uintptr_t LockViolationInstanceCrash = REBASE(0x5f78f58);
    const uintptr_t LockViolationScriptCrash = REBASE(0x5f7f3d0);
    const uintptr_t LuaStepIntervalMsOverrideEnabled = REBASE(0x5f8ec10);
    const uintptr_t OpcodeLookupTable = REBASE(0x34255d0);
    const uintptr_t PhysicsSenderMaxBandwidthBps = REBASE(0x5e30e50);
    const uintptr_t Register = REBASE(0x2c4b120);
    const uintptr_t RobloxLogCrash = REBASE(0x4af5610);
    const uintptr_t SetFFlag = REBASE(0x4b22560);
    const uintptr_t WebSocketServiceEnableClientCreation = REBASE(0x5e85968);
    const uintptr_t WndProcessCheck = REBASE(0x5d94080);
} // namespace Offsets