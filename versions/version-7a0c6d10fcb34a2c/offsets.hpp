// dumped by nick (@.weound)
// date: 2026-10-14 00:33:22
// took 27.9s
// success rate: 84.8%

// dumper update soon trust

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
    inline constexpr const char* LiveChannel = "version-7a0c6d10fcb34a2c";

    namespace Hyperion
    {
        const uintptr_t BitMap = HREBASE(0x202830);
        const uintptr_t ControlFlowGuard = HREBASE(0x5c4320);

        inline constexpr uint8_t ByteShift = 15;
        inline constexpr uint8_t PageShift = 12;
        inline constexpr uint32_t PageSize = 0x1000;
        inline constexpr uint32_t PageMask = 0xfff;
        inline constexpr uint8_t BitMask = 7;

        // other
        static const uint64_t patcheb[] = {
            0x46c1a4, 0x4840e0, 0x4c8640, 0x6976c0, 0xcffb68, 
            0xe154a0, 0x10e3a90, 0x10e7000
        };
    } // namespace Hyperion

    namespace DataModel
    {
        const uintptr_t DataModelDeleterPointer = REBASE(0x4c77eeb);
        inline constexpr uintptr_t GameLoaded = 0x5d0;
        inline constexpr uintptr_t JobId = 0x110;
        inline constexpr uintptr_t PlaceId = 0x188;
        inline constexpr uintptr_t ScriptContext = 0x440;
        inline constexpr uintptr_t Children = 0x70;
    } // namespace DataModel

    namespace FakeDataModel
    {
        const uintptr_t Pointer = REBASE(0x8dc5d00);
        inline constexpr uintptr_t ToReal = 0x1f8;
    } // namespace FakeDataModel

    namespace TaskScheduler
    {
        const uintptr_t RawScheduler = REBASE(0x7f7c6e0);
        const uintptr_t Pointer = REBASE(0x8d6f048);
        inline constexpr uintptr_t MaxFPS = 0xb0;
        inline constexpr uintptr_t JobStart = 0xc8;
        inline constexpr uintptr_t JobEnd = 0xd0;
        inline constexpr uintptr_t JobName = 0x18;
        const uintptr_t TargetFps = REBASE(0x8d6f0f8);
    } // namespace TaskScheduler

    namespace ByteCode
    {
        inline constexpr uintptr_t Pointer = 0x18;
        inline constexpr uintptr_t Size = 0x28;
        inline constexpr uintptr_t ModuleScript = 0x128;
        inline constexpr uintptr_t Script = 0x180;
    } // namespace ByteCode

    namespace ScriptContext
    {
        inline constexpr uintptr_t capabilities = 0x40; // ?
        inline constexpr uintptr_t identity = 0x30; // ?
        inline constexpr uintptr_t RequireBypass = 0xa81;
        const uintptr_t Resume = REBASE(0x4256c10);
        const uintptr_t ResumeParallelWaitingScripts = REBASE(0x42cfce0);
        const uintptr_t TaskQueue = REBASE(0x43125b0);
        inline constexpr uintptr_t userdata = 0x60; // ?
        const uintptr_t whjs_step = REBASE(0x428c8c0);
        const uintptr_t ToResume = 0x908; // ?
    } // namespace ScriptContext

    namespace BasePart
    {
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
        const uintptr_t IdentityPtr = REBASE(0x854cbb8);
        const uintptr_t KTable = REBASE(0x84698a0);
        const uintptr_t GetIdentityStruct = REBASE(0x1d22880);
        const uintptr_t GetTlsPointer = REBASE(0x1b50);
        const uintptr_t GetTlsPointer_wrapper = REBASE(0x6bb0);
        const uintptr_t Impersonator = REBASE(0x70d650);
        const uintptr_t rbxSpawn = REBASE(0x425eae0);
        const uintptr_t Capabilities = 0x30; // identity->capabilities
    } // namespace RobloxThread

    namespace Instance
    {
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        const uintptr_t GetModuleFromVMStateMap = REBASE(0x4265df0);
        inline constexpr uintptr_t getter = 0x18;
        const uintptr_t GetValues = REBASE(0x40fea60);
        const uintptr_t SetParent = REBASE(0x1d305b0);
        inline constexpr uintptr_t ttype_number = 0x30;
        const uintptr_t WaitForChild = REBASE(0x14fff90);
        inline constexpr uintptr_t PropertyMap = 0x250;
        const uintptr_t HashLookup = REBASE(0x2a5c4d0);
        const uintptr_t GetProperty = REBASE(0x1d20c00); // ?
        const uintptr_t GetPropertyData = REBASE(0x1d24490); // ?
        const uintptr_t Push = REBASE(0x4191e60);
    } // namespace Instance

    namespace Raknet
    {
        const uintptr_t HandleConnectionState = REBASE(0x47ca482);
        const uintptr_t ProcessNetworkPacket = REBASE(0x28667a0);
        const uintptr_t Receive = REBASE(0x287d470);
        const uintptr_t RecvFromLoop = REBASE(0x2867310);
        const uintptr_t ReportNetworkError = REBASE(0x47b69f0);
        const uintptr_t RPHandleActiveSystemList = REBASE(0x28667a0);
        const uintptr_t RPOnOpenConnectionReply1 = REBASE(0x2869470);
        const uintptr_t RPReceive = REBASE(0x28519f4);
        const uintptr_t RPsetServerMachineAddress = REBASE(0x286f4c0);
        const uintptr_t Send = REBASE(0x285a3d0);
        const uintptr_t SendPacketsToSelf = REBASE(0x284ffa0);
        const uintptr_t UpdateNetworkLoop = REBASE(0x284c2f0);
        const uintptr_t RakPeer = 0x1e0;
    } // namespace Raknet

    namespace Luau
    {
        const uintptr_t call_binTM = REBASE(0x263c320);
        const uintptr_t ClientOnRecieve = REBASE(0x47c85a0);
        const uintptr_t currfuncname = REBASE(0x2620e90);
        const uintptr_t deletegco = REBASE(0x2641b00);
        const uintptr_t f_luaopen = REBASE(0x261e140);
        const uintptr_t freeobj = REBASE(0x2641530);
        const uintptr_t getfunc = REBASE(0x267ad50);
        const uintptr_t index2addr = REBASE(0x26180b0);
        const uintptr_t lua_createtable = REBASE(0x14ff390);
        const uintptr_t lua_error = REBASE(0x261bea0);
        const uintptr_t lua_exception = REBASE(0x262c490);
        const uintptr_t lua_pushfstringL = REBASE(0x26195d0);
        const uintptr_t lua_pushvfstring = REBASE(0x2619560);
        const uintptr_t lua_setthreadfinalizer = REBASE(0x261b850);
        const uintptr_t luaB_assert = REBASE(0x26814b0);
        const uintptr_t luaB_newproxy = REBASE(0x268286d);
        const uintptr_t luaB_next = REBASE(0x2680a00);
        const uintptr_t luaB_rawlen = REBASE(0x267fd50);
        const uintptr_t luaB_select = REBASE(0x4dbfc00);
        const uintptr_t luaB_setfenv = REBASE(0x267b600);
        const uintptr_t luaB_setmetatable = REBASE(0x267ab60);
        const uintptr_t luaB_tonumber = REBASE(0x2679c00);
        const uintptr_t luaC_step = REBASE(0x2642b60);
        const uintptr_t luaD_preparefinalize = REBASE(0x262dfb0);
        const uintptr_t luaD_runfinalizers = REBASE(0x262e040);
        const uintptr_t luaD_throw = REBASE(0x262c620);
        const uintptr_t luaF_freeproto = REBASE(0x2657c20);
        const uintptr_t luaG_aritherror = REBASE(0x2656580);
        const uintptr_t luaG_concaterror = REBASE(0x2656530);
        const uintptr_t luaG_forerrorL = REBASE(0x26564f0);
        const uintptr_t luaG_indexerror = REBASE(0x26566a0);
        const uintptr_t luaG_methoderror = REBASE(0x26567a0);
        const uintptr_t luaG_missingmembererror = REBASE(0x2656730);
        const uintptr_t luaG_ordererror = REBASE(0x2656620);
        const uintptr_t luaG_readonlyerror = REBASE(0x26567e0);
        const uintptr_t luaG_runerrorL = REBASE(0x2656e00);
        const uintptr_t luaG_typeerrorL = REBASE(0x26564b0);
        const uintptr_t luaH_clone = REBASE(0x2651850);
        const uintptr_t luai_num2str = REBASE(0x265cb20);
        const uintptr_t luaL_argerrorL = REBASE(0x2620f10);
        const uintptr_t luaL_error = REBASE(0x2621b60);
        const uintptr_t luaL_getmetafield = REBASE(0x2620f10);
        const uintptr_t luaL_requiref = REBASE(0x26255c0);
        const uintptr_t luaL_tolstring = REBASE(0x262a810);
        const uintptr_t luaL_typeerrorL = REBASE(0x2620f90);
        const uintptr_t luaL_typename = REBASE(0x2628aa0);
        const uintptr_t luaM_free = REBASE(0x265bdf0);
        const uintptr_t luaM_freeblock = REBASE(0x265bd30);
        const uintptr_t luaM_freegco = REBASE(0x265bea0);
        const uintptr_t luaM_toobig = REBASE(0x265bd00);
        const uintptr_t luaM_visitgco = REBASE(0x265c250);
        const uintptr_t luaO_pushfstring = REBASE(0x2655f70);
        const uintptr_t luaR_defaultcreateobject = REBASE(0x2689290);
        const uintptr_t luaO_nilobject = REBASE(0x667d848);
        const uintptr_t luaH_dummynode = REBASE(0x667d2e8);
        const uintptr_t luau_execute = REBASE(0x265db10);
        const uintptr_t luau_execute_false = REBASE(0x266bf80);
        const uintptr_t luau_execute_true = REBASE(0x265e310);
        const uintptr_t luau_load = REBASE(0x269cfe0);
        const uintptr_t luaV_doarithimpl_TM_ADD = REBASE(0x263e5c0);
        const uintptr_t luaV_doarithimpl_TM_DIV = REBASE(0x263ec00);
        const uintptr_t luaV_doarithimpl_TM_IDIV = REBASE(0x263ee80);
        const uintptr_t luaV_doarithimpl_TM_MOD = REBASE(0x263f180);
        const uintptr_t luaV_doarithimpl_TM_MUL = REBASE(0x263e980);
        const uintptr_t luaV_doarithimpl_TM_POW = REBASE(0x263f330);
        const uintptr_t luaV_doarithimpl_TM_SUB = REBASE(0x263e7a0);
        const uintptr_t luaV_doarithimpl_TM_UNM = REBASE(0x263f4e0);
        const uintptr_t luaV_gettable = REBASE(0x26356a0);
        const uintptr_t luaV_prepareFORN = REBASE(0x263dc70);
        const uintptr_t luaV_settable = REBASE(0x26380c0);
        const uintptr_t luaV_tostring = REBASE(0x26312e0);
        const uintptr_t luaVM_load = REBASE(0x41a1ef0);
        const uintptr_t print = REBASE(0x1ce4150);
        const uintptr_t pushfstring_nocheck = REBASE(0x2655f70);
        const uintptr_t raiseerror = REBASE(0x49e0040);
        const uintptr_t table_clone = REBASE(0x26929e0);
        const uintptr_t tag_error = REBASE(0x2621080);
    } // namespace Luau

    namespace Task
    {
        const uintptr_t cancel = REBASE(0x43234b0);
        const uintptr_t defer = REBASE(0x4322730);
        const uintptr_t desynchronize = REBASE(0x4321af0);
        const uintptr_t spawn = REBASE(0x4322c10);
        const uintptr_t synchronize = REBASE(0x4321680);
        const uintptr_t wait = REBASE(0x43232b0);
    } // namespace Task

    namespace Signals
    {
        const uintptr_t FireAllClients = REBASE(0x3448850);
        const uintptr_t FireMouseClick = REBASE(0x3bcf940); // genuinely dont know how these havent broke yet
        const uintptr_t FireRightMouseClick = REBASE(0x3bcfae0);
        const uintptr_t FireMouseHoverEnter = REBASE(0x3bd0f30);
        const uintptr_t FireMouseHoverLeave = REBASE(0x3bd10d0);
        const uintptr_t FireProximityPrompt = REBASE(0x30cff60);
        const uintptr_t FireServer = REBASE(0x3448460);
        const uintptr_t FireTouchInterest = REBASE(0x15205c0);
        const uintptr_t InvokeClient = REBASE(0x351e630);
        const uintptr_t InvokeServer = REBASE(0x3522540);
        const uintptr_t IsLegalSendEvent = REBASE(0x49113d0);
        const uintptr_t TouchInterest = REBASE(0xb36ca0);
    } // namespace Signals

    namespace coroutine
    {
        const uintptr_t close = REBASE(0x5903f10);
        const uintptr_t create = REBASE(0x5903580);
        const uintptr_t running = REBASE(0x5903e10);
        const uintptr_t status = REBASE(0x5901b10);
        const uintptr_t wrap = REBASE(0x5903b40);
        const uintptr_t yield = REBASE(0x5903db0);
        const uintptr_t isyieldable = REBASE(0x5903e80);
    } // namespace coroutine

    namespace bit32
    {
        const uintptr_t bnot = REBASE(0x5907f70);
        const uintptr_t band = REBASE(0x5907cc0);
        const uintptr_t bor = REBASE(0x5907d70);
        const uintptr_t bxor = REBASE(0x5907e70);
        const uintptr_t test = REBASE(0x5907cf0);
        const uintptr_t lrotate = REBASE(0x5908440);
        const uintptr_t rrotate = REBASE(0x59084c0);
        const uintptr_t lshift = REBASE(0x5908000);
        const uintptr_t arshift = REBASE(0x5908250);
        const uintptr_t rshift = REBASE(0x5908120);
        const uintptr_t bxor = REBASE(0x5907e70);
        const uintptr_t btest = REBASE(0x5907cf0);
        const uintptr_t countlz = REBASE(0x5908810);
        const uintptr_t countrz = REBASE(0x5908960);
        const uintptr_t byteswap = REBASE(0x58e53b0);
        const uintptr_t band = REBASE(0x5907cc0);
        const uintptr_t bor = REBASE(0x5907d70);
        const uintptr_t bnot = REBASE(0x5907f70);
    } // namespace bit32

    namespace table
    {
        const uintptr_t create = REBASE(0x26918b0);
        const uintptr_t find = REBASE(0x2692080);
        const uintptr_t clear = REBASE(0x2692740);
        const uintptr_t freeze = REBASE(0x2692790);
        const uintptr_t clone = REBASE(0x26929e0);
        const uintptr_t unpack = REBASE(0x26900b0);
        const uintptr_t pack = REBASE(0x268f860);
        const uintptr_t insert = REBASE(0x268cae0);
        const uintptr_t remove = REBASE(0x268cce0);
        const uintptr_t concat = REBASE(0x268f540);
        const uintptr_t sort = REBASE(0x2691730);
        const uintptr_t foreach = REBASE(0x268a4e0);
        const uintptr_t foreachi = REBASE(0x2689780);
    } // namespace table

    namespace integer
    {
        const uintptr_t abs = REBASE(0x58f8090);
        const uintptr_t ceil = REBASE(0x58f8b40);
        const uintptr_t floor = REBASE(0x58f8c30);
        const uintptr_t sqrt = REBASE(0x58f8fb0);
        const uintptr_t max = REBASE(0x58f9b60);
        const uintptr_t min = REBASE(0x58f9a00);
        const uintptr_t clamp = REBASE(0x58fa800);
        const uintptr_t pow = REBASE(0x58f90b0);
        const uintptr_t sign = REBASE(0x58faa30);
        const uintptr_t byteswap = REBASE(0x58e53b0);
    } // namespace integer

    namespace utf8
    {
        const uintptr_t char = REBASE(0x58e63d0);
        const uintptr_t codepoint = REBASE(0x58e6030);
        const uintptr_t codes = REBASE(0x58e70b0);
        const uintptr_t graphemes = REBASE(0x431c380);
        const uintptr_t len = REBASE(0x58e5d50);
        const uintptr_t offset = REBASE(0x58e6b60);
        const uintptr_t nfdnormalize = REBASE(0x431daf0);
        const uintptr_t nfcnormalize = REBASE(0x431d070);
        const uintptr_t charpattern = REBASE(0x73adeb8);
    } // namespace utf8

    namespace buffer
    {
        const uintptr_t create = REBASE(0x58fd070);
        const uintptr_t fromstring = REBASE(0x58fd120);
        const uintptr_t tostring = REBASE(0x58fd1f0);
        const uintptr_t len = REBASE(0x58fe340);
        const uintptr_t copy = REBASE(0x58fe3f0);
        const uintptr_t readi8 = REBASE(0x58feeb0);
        const uintptr_t readu8 = REBASE(0x58ff010);
        const uintptr_t readi16 = REBASE(0x58ff170);
        const uintptr_t readu16 = REBASE(0x58ff2d0);
        const uintptr_t readi32 = REBASE(0x58ff430);
        const uintptr_t readu32 = REBASE(0x58ff590);
        const uintptr_t readf32 = REBASE(0x58ff6f0);
        const uintptr_t readf64 = REBASE(0x58ff860);
        const uintptr_t writei8 = REBASE(0x58ff9c0);
        const uintptr_t writeu8 = REBASE(0x58ff9c0);
        const uintptr_t writei16 = REBASE(0x58ffb40);
        const uintptr_t writeu16 = REBASE(0x58ffb40);
        const uintptr_t writei32 = REBASE(0x58ffcc0);
        const uintptr_t writeu32 = REBASE(0x58ffcc0);
        const uintptr_t writef32 = REBASE(0x58ffe40);
        const uintptr_t writef64 = REBASE(0x58fffd0);
        const uintptr_t readbits = REBASE(0x58fe930);
        const uintptr_t writebits = REBASE(0x58feb70);
    } // namespace buffer

    namespace os
    {
        const uintptr_t clock = REBASE(0x58e7f80);
        const uintptr_t date = REBASE(0x58e94e0);
        const uintptr_t difftime = REBASE(0x58e9ee0);
        const uintptr_t time = REBASE(0x58e9be0);
    } // namespace os

    namespace string
    {
        const uintptr_t split = REBASE(0x58efe00);
        const uintptr_t byte = REBASE(0x58eb580);
        const uintptr_t char = REBASE(0x58eb810);
        const uintptr_t find = REBASE(0x58ed440);
        const uintptr_t format = REBASE(0x58ef7d0);
        const uintptr_t gmatch = REBASE(0x58ed830);
        const uintptr_t gsub = REBASE(0x58eee00);
        const uintptr_t len = REBASE(0x58ea090);
        const uintptr_t lower = REBASE(0x58eacf0);
        const uintptr_t match = REBASE(0x58ed450);
        const uintptr_t rep = REBASE(0x58eaf90);
        const uintptr_t reverse = REBASE(0x58eaba0);
        const uintptr_t sub = REBASE(0x58ea140);
        const uintptr_t upper = REBASE(0x58eae40);
    } // namespace string

    namespace vector
    {
        const uintptr_t create = REBASE(0x58f5db0);
        const uintptr_t magnitude = REBASE(0x58f5f60);
        const uintptr_t normalize = REBASE(0x58f6050);
        const uintptr_t cross = REBASE(0x58f6130);
        const uintptr_t dot = REBASE(0x58f6200);
        const uintptr_t angle = REBASE(0x58f6300);
        const uintptr_t floor = REBASE(0x58f6590);
        const uintptr_t ceil = REBASE(0x58f6630);
        const uintptr_t abs = REBASE(0x58f66d0);
        const uintptr_t max = REBASE(0x58f6a90);
        const uintptr_t min = REBASE(0x58f6970);
        const uintptr_t clamp = REBASE(0x58f6800);
    } // namespace vector

    namespace FFlags
    {
        const uintptr_t GetFFlag = REBASE(0x49f7650);
        const uintptr_t FFlagPointer = REBASE(0x8c86398);
        const uintptr_t BooleanType = REBASE(0x6fc42d8);
        const uintptr_t IntegerType = REBASE(0x6fc4850);
        const uintptr_t BooleanValueType = REBASE(0x6fc4620);
        const uintptr_t IntegerValueType = REBASE(0x6fc4738);
    } // namespace FFlags

    // other
    const uintptr_t CastArgs = REBASE(0x4100cf0);
    const uintptr_t GetLuaStateForInstance = REBASE(0x41ab690);
    const uintptr_t OpcodeLookupTable = REBASE(0x7141390);
    const uintptr_t ConnectionDisconnect = REBASE(0x4169ee0);
    const uintptr_t EnableLoadModule = REBASE(0x888f650);
    const uintptr_t GetCapabilities = REBASE(0x1d22a20);
    const uintptr_t GetFFlag = REBASE(0x49f7650);
    const uintptr_t LockViolationInstanceCrash = REBASE(0x73184b8);
    const uintptr_t LockViolationScriptCrash = REBASE(0x72a08a0);
    const uintptr_t LuaStepIntervalMsOverrideEnabled = REBASE(0x72a3ce0);
    const uintptr_t PhysicsSenderMaxBandwidthBps = REBASE(0x72dd698);
    const uintptr_t Register = REBASE(0x3d6cd60);
    const uintptr_t RobloxLogCrash = REBASE(0x49ddc00);
    const uintptr_t SetFFlag = REBASE(0x49f6b50);
    const uintptr_t WebSocketServiceEnableClientCreation = REBASE(0x7295560);
    const uintptr_t WndProcessCheck = REBASE(0x700e138);
} // namespace Offsets
