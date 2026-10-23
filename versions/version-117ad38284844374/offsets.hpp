// dumped by nick (@skiddingonthescene)
// date: 2026-10-16 13:24:28
// took 28.6s
// success rate: 84.6%

// my bad for not uploading shit to github im js busy rn
// dumper update soon™️


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
    inline constexpr const char* LiveChannel = "version-11f155f3450f4c8e";

    namespace DataModel
    {
        const uintptr_t DataModelDeleterPointer = REBASE(0x4c7960b);
        inline constexpr uintptr_t GameLoaded = 0x5d0;
        inline constexpr uintptr_t JobId = 0x110;
        inline constexpr uintptr_t PlaceId = 0x188;
        inline constexpr uintptr_t ScriptContext = 0x440;
        inline constexpr uintptr_t Children = 0x70;
    } // namespace DataModel

    namespace FakeDataModel
    {
        const uintptr_t Pointer = REBASE(0x8dc8000);
        inline constexpr uintptr_t ToReal = 0x1f8;
    } // namespace FakeDataModel

    namespace TaskScheduler
    {
        const uintptr_t RawScheduler = REBASE(0x7f7e6e0);
        const uintptr_t Pointer = REBASE(0x8d71348);
        inline constexpr uintptr_t MaxFPS = 0xb0;
        inline constexpr uintptr_t JobStart = 0xc8;
        inline constexpr uintptr_t JobEnd = 0xd0;
        inline constexpr uintptr_t JobName = 0x18;
        const uintptr_t TargetFps = REBASE(0x8d713f8);
    } // namespace TaskScheduler

    namespace ByteCode
    {
        inline constexpr uintptr_t Pointer = 0x18;
        inline constexpr uintptr_t Size = 0x28;
        inline constexpr uintptr_t ModuleScript = 0x138;
        inline constexpr uintptr_t Script = 0x190;
    } // namespace ByteCode

    namespace ScriptContext
    {
        inline constexpr uintptr_t capabilities = 0x40;
        inline constexpr uintptr_t identity = 0x30;
        inline constexpr uintptr_t RequireBypass = 0xa81;
        inline constexpr uintptr_t ToResume = 0x908; // didnt change ig
        const uintptr_t Resume = REBASE(0x4258330);
        const uintptr_t ResumeParallelWaitingScripts = REBASE(0x42d1400);
        const uintptr_t TaskQueue = REBASE(0x4313cd0);
        inline constexpr uintptr_t userdata = 0x60;
        const uintptr_t whjs_step = REBASE(0x428dfe0);
    } // namespace ScriptContext

    namespace BasePart
    {
        inline constexpr uintptr_t Primitive = 0x188; // or 0x178
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
        const uintptr_t IdentityPtr = REBASE(0x854f778);
        const uintptr_t KTable = REBASE(0x846baa0);
        const uintptr_t GetIdentityStruct = REBASE(0x1d24020);
        const uintptr_t GetTlsPointer = REBASE(0x1b50);
        const uintptr_t GetTlsPointer_wrapper = REBASE(0x6bb0);
        const uintptr_t Impersonator = REBASE(0x70d6f0);
        const uintptr_t rbxSpawn = REBASE(0x4260200);
    } // namespace RobloxThread

    namespace Instance
    {
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        const uintptr_t GetModuleFromVMStateMap = REBASE(0x4267510);
        inline constexpr uintptr_t getter = 0x18;
        const uintptr_t GetValues = REBASE(0x4100180);
        const uintptr_t SetParent = REBASE(0x1d31d50);
        inline constexpr uintptr_t ttype_number = 0x30;
        const uintptr_t WaitForChild = REBASE(0x1501730);
        inline constexpr uintptr_t PropertyMap = 0x250;
        const uintptr_t HashLookup = REBASE(0x2a5dc90); // ?
        const uintptr_t GetProperty = REBASE(0x1d223a0); // ?
        const uintptr_t Push = REBASE(0x4193580);
    } // namespace Instance

    namespace Raknet
    {
        const uintptr_t HandleConnectionState = REBASE(0x47cbba2);
        const uintptr_t ProcessNetworkPacket = REBASE(0x2867f60);
        const uintptr_t Receive = REBASE(0x287ec30);
        const uintptr_t RecvFromLoop = REBASE(0x2868ad0);
        const uintptr_t ReportNetworkError = REBASE(0x47b8110);
        const uintptr_t RPHandleActiveSystemList = REBASE(0x2867f60);
        const uintptr_t RPOnOpenConnectionReply1 = REBASE(0x286ac30);
        const uintptr_t RPReceive = REBASE(0x28531b4);
        const uintptr_t RPsetServerMachineAddress = REBASE(0x2870c80);
        const uintptr_t Send = REBASE(0x285bb90);
        const uintptr_t SendPacketsToSelf = REBASE(0x2851760);
        const uintptr_t UpdateNetworkLoop = REBASE(0x284dab0);
    } // namespace Raknet

    namespace Luau
    {
        const uintptr_t call_binTM = REBASE(0x263dac0);
        const uintptr_t ClientOnRecieve = REBASE(0x272b6d0);
        const uintptr_t currfuncname = REBASE(0x2622630);
        const uintptr_t deletegco = REBASE(0x26432a0);
        const uintptr_t f_luaopen = REBASE(0x261f8e0);
        const uintptr_t freeobj = REBASE(0x2642cd0);
        const uintptr_t getfunc = REBASE(0x267c4f0);
        const uintptr_t index2addr = REBASE(0x2619850);
        const uintptr_t lua_createtable = REBASE(0x1500b30);
        const uintptr_t lua_error = REBASE(0x261d640);
        const uintptr_t lua_exception = REBASE(0x262dc30);
        const uintptr_t lua_pushfstringL = REBASE(0x261ad70);
        const uintptr_t lua_pushvfstring = REBASE(0x261ad00);
        const uintptr_t lua_setthreadfinalizer = REBASE(0x261cff0);
        const uintptr_t luaB_assert = REBASE(0x2682c50);
        const uintptr_t luaB_newproxy = REBASE(0x268400d);
        const uintptr_t luaB_next = REBASE(0x26821a0);
        const uintptr_t luaB_rawlen = REBASE(0x26814f0);
        const uintptr_t luaB_select = REBASE(0x2682d00);
        const uintptr_t luaB_setfenv = REBASE(0x267cda0);
        const uintptr_t luaB_setmetatable = REBASE(0x267c300);
        const uintptr_t luaB_tonumber = REBASE(0x267b3a0);
        const uintptr_t luaC_step = REBASE(0x2644300);
        const uintptr_t luaD_preparefinalize = REBASE(0x262f750);
        const uintptr_t luaD_runfinalizers = REBASE(0x262f7e0);
        const uintptr_t luaD_throw = REBASE(0x262ddc0);
        const uintptr_t luaF_freeproto = REBASE(0x26593c0);
        const uintptr_t luaG_aritherror = REBASE(0x2657d20);
        const uintptr_t luaG_concaterror = REBASE(0x2657cd0);
        const uintptr_t luaG_forerrorL = REBASE(0x2657c90);
        const uintptr_t luaG_indexerror = REBASE(0x2657e40);
        const uintptr_t luaG_methoderror = REBASE(0x2657f40);
        const uintptr_t luaG_missingmembererror = REBASE(0x2657ed0);
        const uintptr_t luaG_ordererror = REBASE(0x2657dc0);
        const uintptr_t luaG_readonlyerror = REBASE(0x2657f80);
        const uintptr_t luaG_runerrorL = REBASE(0x26585a0);
        const uintptr_t luaG_typeerrorL = REBASE(0x2657c50);
        const uintptr_t luaH_clone = REBASE(0x2652ff0);
        const uintptr_t luai_num2str = REBASE(0x265e2c0);
        const uintptr_t luaL_argerrorL = REBASE(0x26226b0);
        const uintptr_t luaL_error = REBASE(0x2623300);
        const uintptr_t luaL_getmetafield = REBASE(0x26226b0);
        const uintptr_t luaL_requiref = REBASE(0x2626d60);
        const uintptr_t luaL_tolstring = REBASE(0x21452f0);
        const uintptr_t luaL_typeerrorL = REBASE(0x2622730);
        const uintptr_t luaL_typename = REBASE(0x262a240);
        const uintptr_t luaM_free = REBASE(0x265d590);
        const uintptr_t luaM_freeblock = REBASE(0x265d4d0);
        const uintptr_t luaM_freegco = REBASE(0x265d640);
        const uintptr_t luaM_toobig = REBASE(0x265d4a0);
        const uintptr_t luaM_visitgco = REBASE(0x265d9f0);
        const uintptr_t luaO_pushfstring = REBASE(0x2657710);
        const uintptr_t luaR_defaultcreateobject = REBASE(0x268aa30);
        const uintptr_t luau_execute_false = REBASE(0x266d720);
        const uintptr_t luau_execute_true = REBASE(0x265fab0);
        const uintptr_t luau_load = REBASE(0x269e780);
        const uintptr_t luaV_doarithimpl_TM_ADD = REBASE(0x263fd60);
        const uintptr_t luaV_doarithimpl_TM_DIV = REBASE(0x26403a0);
        const uintptr_t luaV_doarithimpl_TM_IDIV = REBASE(0x2640620);
        const uintptr_t luaV_doarithimpl_TM_MOD = REBASE(0x2640920);
        const uintptr_t luaV_doarithimpl_TM_MUL = REBASE(0x2640120);
        const uintptr_t luaV_doarithimpl_TM_POW = REBASE(0x2640ad0);
        const uintptr_t luaV_doarithimpl_TM_SUB = REBASE(0x263ff40);
        const uintptr_t luaV_doarithimpl_TM_UNM = REBASE(0x2640c80);
        const uintptr_t luaV_gettable = REBASE(0x2636e40);
        const uintptr_t luaV_prepareFORN = REBASE(0x263f410);
        const uintptr_t luaV_settable = REBASE(0x2639860);
        const uintptr_t luaV_tostring = REBASE(0x2632a80);
        const uintptr_t luaVM_load = REBASE(0x41a3610);
        const uintptr_t print = REBASE(0x1ce58f0);
        const uintptr_t pushfstring_nocheck = REBASE(0x2657710);
        const uintptr_t raiseerror = REBASE(0x49e1760);
        const uintptr_t table_clone = REBASE(0x2694180);
        const uintptr_t tag_error = REBASE(0x2622820);
        const uintptr_t GetLuaStateForInstance = REBASE(0x41acdb0);
    } // namespace Luau

    namespace Task
    {
        const uintptr_t cancel = REBASE(0x4324bd0);
        const uintptr_t defer = REBASE(0x4323e50);
        const uintptr_t desynchronize = REBASE(0x4323210);
        const uintptr_t spawn = REBASE(0x4324330);
        const uintptr_t synchronize = REBASE(0x4322da0);
        const uintptr_t wait = REBASE(0x43249d0);
    } // namespace Task

    namespace Signals
    {
        const uintptr_t FireAllClients = REBASE(0x3449f60);
        const uintptr_t FireMouseClick = REBASE(0x3bd1060);
        const uintptr_t FireMouseHoverEnter = REBASE(0x3bd2650);
        const uintptr_t FireMouseHoverLeave = REBASE(0x3bd27f0);
        const uintptr_t FireProximityPrompt = REBASE(0x30d1720);
        const uintptr_t FireServer = REBASE(0x3449b70);
        const uintptr_t FireTouchInterest = REBASE(0x1521d60);
        const uintptr_t FireRightMouseClick = REBASE(0x3bd1200);
        const uintptr_t InvokeClient = REBASE(0x351fd40);
        const uintptr_t InvokeServer = REBASE(0x3523c50);
        const uintptr_t IsLegalSendEvent = REBASE(0x4912af0);
        const uintptr_t TouchInterest = REBASE(0xb36d40);
    } // namespace Signals

    // yea bro nice one (basically all libs failed)

    namespace utf8
    {
        const uintptr_t charpattern = REBASE(0x73afdf0);
    } // namespace utf8

    namespace FFlags
    {
        const uintptr_t GetFFlag = REBASE(0x49f8d70);
        const uintptr_t FFlagPointer = REBASE(0x8c885c8);
        const uintptr_t BooleanType = REBASE(0x6fc6358);
        const uintptr_t IntegerType = REBASE(0x6fc68d0);
        const uintptr_t BooleanValueType = REBASE(0x6fc66a0);
        const uintptr_t IntegerValueType = REBASE(0x6fc67b8);
    } // namespace FFlags

    // other
    const uintptr_t CastArgs = REBASE(0x4102410);
    const uintptr_t ConnectionDisconnect = REBASE(0x416b600);
    const uintptr_t EnableLoadModule = REBASE(0x8891880);
    const uintptr_t GetCapabilities = REBASE(0x1d241c0);
    const uintptr_t GetFFlag = REBASE(0x49f8d70);
    const uintptr_t LockViolationInstanceCrash = REBASE(0x731a4e0);
    const uintptr_t LockViolationScriptCrash = REBASE(0x72a2880);
    const uintptr_t LuaStepIntervalMsOverrideEnabled = REBASE(0x72a5b40);
    const uintptr_t PhysicsSenderMaxBandwidthBps = REBASE(0x72e0458);
    const uintptr_t Register = REBASE(0x3d6e480);
    const uintptr_t RobloxLogCrash = REBASE(0x49df320);
    const uintptr_t SetFFlag = REBASE(0x49f8270);
    const uintptr_t WebSocketServiceEnableClientCreation = REBASE(0x7297800);
    const uintptr_t WndProcessCheck = REBASE(0x7010198);
    const uintptr_t OpcodeLookupTable = REBASE(0x71433e0);
} // namespace Offsets
