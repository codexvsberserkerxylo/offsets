// dumped by nick
// date: 2026-06-19 11:23:13
// took 14.6s

#include <cstdint>
#include <Windows.h>

static const uintptr_t roblox_base = reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr));
static const uintptr_t hyperion_base = reinterpret_cast<uintptr_t>(GetModuleHandleA("RobloxPlayerBeta.dll"));

#define REBASE(x) ((x) + roblox_base)
#define HYP_REBASE(x) ((x) + hyperion_base)

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
    inline constexpr const char* LiveChannel = "version-8884371d30284041";

    namespace Hyperion
    {
        const uintptr_t BitMap = HYP_REBASE(0x14afd40);
        const uintptr_t ControlFlowGuard = HYP_REBASE(0x2c820);

        inline constexpr uint8_t ByteShift = 15;
        inline constexpr uint8_t PageShift = 12;
        inline constexpr uint32_t PageSize = 0x1000;
        inline constexpr uint32_t PageMask = 0xfff;
        inline constexpr uint8_t BitMask = 7;

        // other
        static const uint64_t patcheb[] = {
            0x3f033c, 0x4512ab, 0x479d84, 0x48657c, 0x4cead0, 
            0xbccc28, 0xde6868, 0x119f480
        };
    } // namespace Hyperion

    namespace DataModel
    {
        inline constexpr uintptr_t Children = 0x78;
        const uintptr_t DataModelDeleterPointer = REBASE(0x7ddcd6);
        const uintptr_t FakeDataModelPointer = REBASE(0x7bcf6a8);
        inline constexpr uintptr_t FakeDataModelToDataModel = 0x1d8;
        inline constexpr uintptr_t GameId = 0x1a0;
        inline constexpr uintptr_t GameLoaded = 0x678;
        inline constexpr uintptr_t Name = 0xb0;
        inline constexpr uintptr_t PlaceId = 0x1a8;
        inline constexpr uintptr_t ScriptContext = 0x440;
        inline constexpr uintptr_t VisualEngine = 0x10;
    } // namespace DataModel

    namespace ScriptContext
    {
        inline constexpr uintptr_t RequireBypass = 0x1a8;
        inline constexpr uintptr_t RequireBypass = 0x851;
    } // namespace ScriptContext

    namespace BasePart
    {
        inline constexpr uintptr_t Overlap = 0x1f0;
        inline constexpr uintptr_t Primitive = 0x148;
    } // namespace BasePart

    namespace ExtraSpace
    {
        inline constexpr uintptr_t ScriptContextToResume = 0x7f8;
    } // namespace ExtraSpace

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
        const uintptr_t GetIdentityStruct = REBASE(0x4ac34c0);
        const uintptr_t GetTlsPointer = REBASE(0x1d56e80);
        const uintptr_t Impersonator = REBASE(0x63c2b0);
    } // namespace RobloxThread

    namespace Instance
    {
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        inline constexpr uintptr_t ClassName = 0x8;
        inline constexpr uintptr_t PropDescriptor = 0x28;
        inline constexpr uintptr_t PropertyDescriptorBitFlags = 0x88;
        const uintptr_t Push = REBASE(0x1d4fbb0);
        inline constexpr uintptr_t ScriptableMask = 0x10;
    } // namespace Instance

    namespace Property
    {
        const uintptr_t HashTableLookup = REBASE(0x1d11000);
        const uintptr_t KTable = REBASE(0x78203f8);
    } // namespace Property

    namespace Luau
    {
        const uintptr_t currfuncname = REBASE(0x1d291f0);
        const uintptr_t f_luaopen = REBASE(0x46719f0);
        const uintptr_t lua_exception = REBASE(0x4670a40);
        const uintptr_t lua_getfield = REBASE(0x4673dc0);
        const uintptr_t lua_pushfstringL = REBASE(0x466cbb0);
        const uintptr_t lua_pushvfstring = REBASE(0x466d2b0);
        const uintptr_t lua_resetthread = REBASE(0x46708f0);
        const uintptr_t lua_xmove = REBASE(0x4672e80);
        const uintptr_t luaA_toobject = REBASE(0x4673dc0);
        const uintptr_t luaB_assert = REBASE(0x46861e0);
        const uintptr_t luaB_error = REBASE(0x4685ca0);
        const uintptr_t luaB_gcinfo = REBASE(0x46860d0);
        const uintptr_t luaB_getfenv = REBASE(0x4685e30);
        const uintptr_t luaB_getmetatable = REBASE(0x1d7e450);
        const uintptr_t luaB_newproxy = REBASE(0x4686330);
        const uintptr_t luaB_next = REBASE(0x4686180);
        const uintptr_t luaB_pcall = REBASE(0x466bd20);
        const uintptr_t luaB_pcallrun = REBASE(0x466ca70);
        const uintptr_t luaB_print = REBASE(0x4685a80);
        const uintptr_t luaB_rawequal = REBASE(0x2698830);
        const uintptr_t luaB_rawget = REBASE(0x4685fc0);
        const uintptr_t luaB_rawlen = REBASE(0x4686070);
        const uintptr_t luaB_rawset = REBASE(0x4686010);
        const uintptr_t luaB_setfenv = REBASE(0x1e78500);
        const uintptr_t luaB_setmetatable = REBASE(0x4685d70);
        const uintptr_t luaB_tonumber = REBASE(0x4685b60);
        const uintptr_t luaB_tostring = REBASE(0x4686300);
        const uintptr_t luaB_type = REBASE(0x4686100);
        const uintptr_t luaB_typeof = REBASE(0x4686140);
        const uintptr_t luaC_step = REBASE(0x4676120);
        const uintptr_t luaD_rawrunprotected = REBASE(0x4671fc0);
        const uintptr_t luaF_freeproto = REBASE(0x469bd70);
        const uintptr_t luaF_newlclosure = REBASE(0x469c050);
        const uintptr_t luaF_newproto = REBASE(0x469c100);
        const uintptr_t luaG_runerror = REBASE(0x1e8d520);
        const uintptr_t luaG_runerrorl = REBASE(0x4674b10);
        const uintptr_t luaH_new = REBASE(0x4694b10);
        const uintptr_t luaL_argerrorl = REBASE(0x1e9e480);
        const uintptr_t luaL_checkstring = REBASE(0x4673dc0);
        const uintptr_t luaL_checktype = REBASE(0x4672e80);
        const uintptr_t luaL_error = REBASE(0x4672e80);
        const uintptr_t luaL_findtable = REBASE(0x4672ed0);
        const uintptr_t luaL_getmetafield = REBASE(0x72cb20);
        const uintptr_t luaL_register = REBASE(0x4673560);
        const uintptr_t luaL_testudata = REBASE(0x469d9d0);
        const uintptr_t luaM_free = REBASE(0x4692660);
        const uintptr_t luaM_freegco = REBASE(0x4692bb0);
        const uintptr_t luaM_visitgco = REBASE(0x4692500);
        const uintptr_t luaO_chunkid = REBASE(0x46a2050);
        const uintptr_t luaopen_math = REBASE(0x468fd90);
        const uintptr_t luaT_eventnames = REBASE(0x68fcb28);
        const uintptr_t luaT_init = REBASE(0x4692f90);
        const uintptr_t luaT_objtypename = REBASE(0x4673dc0);
        const uintptr_t luaT_typenames = REBASE(0x5d6b2c8);
        const uintptr_t luaV_gettable = REBASE(0x469dce0);
        const uintptr_t newgcoblock = REBASE(0x4692c80);
        const uintptr_t Print = REBASE(0x1edba40);
        const uintptr_t pseudo2addr = REBASE(0x4af2d80);
        const uintptr_t pusherror = REBASE(0x466f4c0);
    } // namespace Luau

    namespace Task
    {
        const uintptr_t cancel = REBASE(0x1e9d260);
        const uintptr_t defer = REBASE(0x1e9d570);
        const uintptr_t desynchronize = REBASE(0x1e9dc30);
        const uintptr_t spawn = REBASE(0x1e9e4e0);
        const uintptr_t synchronize = REBASE(0x1e9e660);
        const uintptr_t wait = REBASE(0x1e9e870);
    } // namespace Task

    namespace Coroutine
    {
        const uintptr_t close = REBASE(0x4686ce0);
        const uintptr_t create = REBASE(0x4686bc0);
    } // namespace Coroutine

    namespace Raknet
    {
        const uintptr_t send = REBASE(0x0) // failed
        const uintptr_t reportnetworkerror = REBASE(0x0) // failed
        const uintptr_t processnetworkpacket = REBASE(0x0) // failed
        const uintptr_t handleconnectionstate = REBASE(0x0) // failed
    } // namespace Raknet

    namespace Signals
    {
        const uintptr_t FireLeftMouseClick = REBASE(0x26709b0);
        const uintptr_t FireMouseHoverEnter = REBASE(0x2670bc0);
        const uintptr_t FireMouseHoverLeave = REBASE(0x2670db0);
        const uintptr_t FireRightMouseClick = REBASE(0x2671020);
        const uintptr_t FireTouchInterest = REBASE(0x2ae1c40);
    } // namespace Signals

    namespace IsParallel
    {
        const uintptr_t ActorRequired_Call = REBASE(0x1d48b80);
        const uintptr_t ActorRequired_Prop = REBASE(0x1d48da0);
        const uintptr_t Connection_Dc = REBASE(0x1d64220);
        const uintptr_t Event_Connect = REBASE(0x1d630d0);
        const uintptr_t Event_ConnPar = REBASE(0x1d63500);
        const uintptr_t Event_Once = REBASE(0x1d66d60);
        const uintptr_t EventAccess = REBASE(0x1d44a80);
        const uintptr_t FilterDescendants = REBASE(0x1dc3b50);
        const uintptr_t FunctionCall = REBASE(0x1d48b80);
        const uintptr_t Instance_FromExist = REBASE(0x1e0d600);
        const uintptr_t LocalSafe_Call = REBASE(0x1d48b80);
        const uintptr_t LocalSafe_Write = REBASE(0x1d48da0);
        const uintptr_t PropRead = REBASE(0x1d44a80);
        const uintptr_t PropWrite = REBASE(0x1d48da0);
        const uintptr_t ScriptConnect = REBASE(0x1d63500);
    } // namespace IsParallel

    // other
    const uintptr_t atomic = REBASE(0x4675550);
    const uintptr_t AttachRobloxExtraSpace = REBASE(0x1d8bb80);
    const uintptr_t closestate = REBASE(0x466f400);
    const uintptr_t EnableLoadModule = REBASE(0x1e77f30);
    const uintptr_t GetContextObject = REBASE(0x1d6d3e0);
    const uintptr_t GetCurrentThreadId = REBASE(0x4ac34c0);
    const uintptr_t GetFFlag = REBASE(0x4b0f990);
    const uintptr_t GetGlobalState = REBASE(0x1d6d3e0);
    const uintptr_t GetGlobalStateForInstance = REBASE(0x1e5d240);
    const uintptr_t loadsafe = REBASE(0x4677b00);
    const uintptr_t markroot = REBASE(0x4676620);
    const uintptr_t OpcodeLookupTable = REBASE(0x3449440);
    const uintptr_t RobloxLogCrash = REBASE(0x4ada0b0);
    const uintptr_t traversetable = REBASE(0x4677480);
    const uintptr_t WndProcessCheck = REBASE(0x7776010);
} // namespace Offsets

namespace Structs
{
    inline constexpr uintptr_t g_gcstate = 0x59;
    inline constexpr uintptr_t Proto_code = 0x40;
    inline constexpr uintptr_t Proto_p = 0x58;
    inline constexpr uintptr_t Proto_k = 0x38;
    inline constexpr uintptr_t Proto_lineinfo = 0x50;
    inline constexpr uintptr_t Proto_upvalues = 0x28;
    inline constexpr uintptr_t Proto_debuginsn = 0x28;
} // namespace Structs
