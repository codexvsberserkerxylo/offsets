// dumped by nick (@.weound)
// date: 2026-09-24 20:05:30
// took 31.6s
// success rate: 85.9%

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
    inline constexpr const char* LiveChannel = "version-2366ba214ec740ca";

    namespace Hyperion
    {
        const uintptr_t BitMap = HREBASE(0x205098);
        const uintptr_t ControlFlowGuard = HREBASE(0x7db080);

        inline constexpr uint8_t ByteShift = 15;
        inline constexpr uint8_t PageShift = 12;
        inline constexpr uint32_t PageSize = 0x1000;
        inline constexpr uint32_t PageMask = 0xfff;
        inline constexpr uint8_t BitMask = 7;

        // other
        static const uint64_t patcheb[] = {
            0x29bc2c, 0x667ca8, 0x7df246, 0x8cce38, 0xa074d4, 
            0xa07778, 0xa453f4, 0x12b7c04
        };
    } // namespace Hyperion

    namespace DataModel
    {
        const uintptr_t DataModelDeleterPointer = REBASE(0x4be475c);
        inline constexpr uintptr_t GameLoaded = 0x5d0;
        inline constexpr uintptr_t JobId = 0x110;
        inline constexpr uintptr_t PlaceId = 0x188;
        inline constexpr uintptr_t ScriptContext = 0x440;
        inline constexpr uintptr_t Children = 0x70;
    } // namespace DataModel

    namespace FakeDataModel
    {
        const uintptr_t Pointer = REBASE(0x8ee1728);
        inline constexpr uintptr_t ToReal = 0x1f8;
    } // namespace FakeDataModel

    namespace TaskScheduler
    {
        const uintptr_t RawScheduler = REBASE(0x7d136f0);
        const uintptr_t Pointer = REBASE(0x8c8d108);
        inline constexpr uintptr_t MaxFPS = 0xb0;
        inline constexpr uintptr_t JobStart = 0xc8;
        inline constexpr uintptr_t JobEnd = 0xd0;
        inline constexpr uintptr_t JobName = 0x18;
        const uintptr_t TargetFps = REBASE(0x8c8d1b8);
    } // namespace TaskScheduler

    namespace ByteCode
    {
        inline constexpr uintptr_t Pointer = 0x18;
        inline constexpr uintptr_t Size = 0x28;
        inline constexpr uintptr_t ModuleScript = 0x138; // ?
        inline constexpr uintptr_t Script = 0x190; // ?
    } // namespace ByteCode

    namespace ScriptContext
    {
        inline constexpr uintptr_t capabilities = 0x40;
        inline constexpr uintptr_t identity = 0x30;
        inline constexpr uintptr_t RequireBypass = 0xaae;
        inline constexpr uintptr_t IsCoreScript = 0x158;
        inline constexpr uintptr_t ToResume = 0xa38;
        const uintptr_t Resume = REBASE(0x429b530);
        const uintptr_t ResumeParallelWaitingScripts = REBASE(0x430a020);
        const uintptr_t ScriptContextResume = REBASE(0x429b530);
        const uintptr_t TaskQueue = REBASE(0x434b700);
        const uintptr_t whjs_step = REBASE(0x42c83f0);
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
        const uintptr_t IdentityPtr = REBASE(0x828ca38);
        const uintptr_t KTable = REBASE(0x81e9120);
        const uintptr_t GetIdentityStruct = REBASE(0x1d349d0);
        const uintptr_t GetTlsPointer = REBASE(0x1b80);
        const uintptr_t GetTlsPointer_wrapper = REBASE(0x7240);
        const uintptr_t Impersonator = REBASE(0x7bb060);
        const uintptr_t rbxSpawn = REBASE(0x42a2f10);
    } // namespace RobloxThread

    namespace Instance
    {
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        const uintptr_t GetModuleFromVMStateMap = REBASE(0x42a99f0);
        inline constexpr uintptr_t getter = 0x18;
        const uintptr_t GetValues = REBASE(0x414ca60);
        const uintptr_t Push = REBASE(0x4145af0); // or 0x41d9f50
        inline constexpr uintptr_t scriptable = 0x90;
        const uintptr_t SetParent = REBASE(0x1d40be0);
        inline constexpr uintptr_t ttype = 0x68;
        inline constexpr uintptr_t ttype_number = 0x30;
        const uintptr_t WaitForChild = REBASE(0x1564a20);
        inline constexpr uintptr_t PropertyMap = 0x250;
    } // namespace Instance

    namespace Raknet
    {
        const uintptr_t HandleConnectionState = REBASE(0x4765722);
        const uintptr_t ProcessNetworkPacket = REBASE(0x28953b0);
        const uintptr_t Receive = REBASE(0x28ab3e0);
        const uintptr_t RecvFromLoop = REBASE(0x2895f10);
        const uintptr_t ReportNetworkError = REBASE(0x4752ef0);
        const uintptr_t RPHandleActiveSystemList = REBASE(0x28953b0);
        const uintptr_t RPOnOpenConnectionReply1 = REBASE(0x2897f00);
        const uintptr_t RPReceive = REBASE(0x288027a);
        const uintptr_t RPsetServerMachineAddress = REBASE(0x289e0a0);
        const uintptr_t Send = REBASE(0x2888e10);
        const uintptr_t SendPacketsToSelf = REBASE(0x287e760);
        const uintptr_t UpdateNetworkLoop = REBASE(0x287a9f0);
    } // namespace Raknet

    namespace Luau
    {
        const uintptr_t call_binTM = REBASE(0x267d0c0);
        const uintptr_t ClientOnRecieve = REBASE(0x4763a10);
        const uintptr_t currfuncname = REBASE(0x2663bc0);
        const uintptr_t deletegco = REBASE(0x2682860);
        const uintptr_t f_luaopen = REBASE(0x2660ec0);
        const uintptr_t freeobj = REBASE(0x26822a0);
        const uintptr_t getfunc = REBASE(0x26bb680);
        const uintptr_t index2addr = REBASE(0x265c3f0);
        const uintptr_t lua_createtable = REBASE(0x1563e20);
        const uintptr_t lua_error = REBASE(0x265ee60);
        const uintptr_t lua_exception = REBASE(0x266e8b0);
        const uintptr_t lua_pushfstringL = REBASE(0x265d7d0);
        const uintptr_t lua_pushvfstring = REBASE(0x265d760);
        const uintptr_t lua_resume = REBASE(0x26734d0);
        const uintptr_t luaB_assert = REBASE(0x26c1500);
        const uintptr_t luaB_newproxy = REBASE(0x26c28d1);
        const uintptr_t luaB_next = REBASE(0x26c0a50);
        const uintptr_t luaB_rawlen = REBASE(0x26bfdc0);
        const uintptr_t luaB_select = REBASE(0x26c15b0);
        const uintptr_t luaB_setfenv = REBASE(0x26bbf40);
        const uintptr_t luaB_setmetatable = REBASE(0x26bb470);
        const uintptr_t luaB_tonumber = REBASE(0x26ba540);
        const uintptr_t luaC_step = REBASE(0x26838f0);
        const uintptr_t luaD_preparefinalize = REBASE(0x26703c0);
        const uintptr_t luaD_runfinalizers = REBASE(0x2670460);
        const uintptr_t luaD_throw = REBASE(0x266ea40);
        const uintptr_t luaF_freeproto = REBASE(0x2698550);
        const uintptr_t luaG_aritherror = REBASE(0x2696ec0);
        const uintptr_t luaG_concaterror = REBASE(0x2696e70);
        const uintptr_t luaG_forerrorL = REBASE(0x2696e30);
        const uintptr_t luaG_indexerror = REBASE(0x2696fe0);
        const uintptr_t luaG_methoderror = REBASE(0x26970e0);
        const uintptr_t luaG_missingmembererror = REBASE(0x2697070);
        const uintptr_t luaG_ordererror = REBASE(0x2696f60);
        const uintptr_t luaG_readonlyerror = REBASE(0x2697120);
        const uintptr_t luaG_runerrorL = REBASE(0x2697740);
        const uintptr_t luaH_clone = REBASE(0x2692190);
        const uintptr_t luai_num2str = REBASE(0x269d520);
        const uintptr_t luaL_argerrorL = REBASE(0x2663c40);
        const uintptr_t luaL_error = REBASE(0x26648d0);
        const uintptr_t luaL_getmetafield = REBASE(0x2663c40);
        const uintptr_t luaL_requiref = REBASE(0x2667ed0);
        const uintptr_t luaL_tolstring = REBASE(0x266cc60);
        const uintptr_t luaL_typeerrorL = REBASE(0x2663cc0);
        const uintptr_t luaL_typename = REBASE(0x266aee0);
        const uintptr_t luaM_free = REBASE(0x269c800);
        const uintptr_t luaM_freeblock = REBASE(0x269c740);
        const uintptr_t luaM_freegco = REBASE(0x269c8b0);
        const uintptr_t luaM_toobig = REBASE(0x269c710);
        const uintptr_t luaM_visitgco = REBASE(0x269cc60);
        const uintptr_t luaO_pushfstring = REBASE(0x26968a0);
        const uintptr_t luaR_defaultcreateobject = REBASE(0x26c9590);
        const uintptr_t luau_execute = REBASE(0x269e520);
        const uintptr_t luau_execute_false = REBASE(0x26ac950); // ??
        const uintptr_t luau_execute_true = REBASE(0x269ed20); // ??
        const uintptr_t luau_load = REBASE(0x26d28e0);
        const uintptr_t luaV_doarithimpl_TM_ADD = REBASE(0x267f320);
        const uintptr_t luaV_doarithimpl_TM_DIV = REBASE(0x267f960);
        const uintptr_t luaV_doarithimpl_TM_IDIV = REBASE(0x267fbe0);
        const uintptr_t luaV_doarithimpl_TM_MOD = REBASE(0x267fee0);
        const uintptr_t luaV_doarithimpl_TM_MUL = REBASE(0x267f6e0);
        const uintptr_t luaV_doarithimpl_TM_POW = REBASE(0x2680090);
        const uintptr_t luaV_doarithimpl_TM_SUB = REBASE(0x267f500);
        const uintptr_t luaV_doarithimpl_TM_UNM = REBASE(0x2680240);
        const uintptr_t luaV_gettable = REBASE(0x2677a90);
        const uintptr_t luaV_prepareFORN = REBASE(0x267e9c0);
        const uintptr_t luaV_settable = REBASE(0x2679770);
        const uintptr_t luaV_tostring = REBASE(0x26736b0);
        const uintptr_t luaVM_load = REBASE(0x41e8bd0);
        const uintptr_t print = REBASE(0x1cfa0d0);
        const uintptr_t pushfstring_nocheck = REBASE(0x26968a0);
        const uintptr_t raiseerror = REBASE(0x4960e00);
        const uintptr_t table_clone = REBASE(0x573ccc0);
        const uintptr_t tag_error = REBASE(0x2663db0);
    } // namespace Luau

    namespace Task
    {
        const uintptr_t cancel = REBASE(0x435ae30);
        const uintptr_t defer = REBASE(0x435a060);
        const uintptr_t desynchronize = REBASE(0x4359480);
        const uintptr_t spawn = REBASE(0x435a520);
        const uintptr_t synchronize = REBASE(0x4359070);
        const uintptr_t wait = REBASE(0x435abb0);
    } // namespace Task

    namespace Signals
    {
        const uintptr_t FireAllClients = REBASE(0x34ea540);
        const uintptr_t FireMouseClick = REBASE(0x3c3edc0);
        const uintptr_t FireMouseHoverEnter = REBASE(0x3c403b0);
        const uintptr_t FireMouseHoverLeave = REBASE(0x3c40550);
        const uintptr_t FireProximityPrompt = REBASE(0x31bd800);
        const uintptr_t FireServer = REBASE(0x34ea1c0);
        const uintptr_t FireTouchInterest = REBASE(0xacadd0);
        const uintptr_t InvokeClient = REBASE(0x35accb0);
        const uintptr_t InvokeServer = REBASE(0x35ae120);
        const uintptr_t IsLegalSendEvent = REBASE(0x4897be0);
        const uintptr_t TouchInterest = REBASE(0xbcfa00);
    } // namespace Signals

    namespace coroutine
    {
        const uintptr_t close = REBASE(0x575c450);
        const uintptr_t create = REBASE(0x575bad0);
        const uintptr_t running = REBASE(0x575c350);
        const uintptr_t status = REBASE(0x575a060);
        const uintptr_t wrap = REBASE(0x575c080);
        const uintptr_t yield = REBASE(0x575c2f0);
        const uintptr_t isyieldable = REBASE(0x575c3c0);
    } // namespace coroutine

    namespace bit32
    {
        const uintptr_t bnot = REBASE(0x57603c0);
        const uintptr_t band = REBASE(0x5760110);
        const uintptr_t bor = REBASE(0x57601c0);
        const uintptr_t bxor = REBASE(0x57602c0);
        const uintptr_t test = REBASE(0x5760140);
        const uintptr_t lrotate = REBASE(0x5760890);
        const uintptr_t rrotate = REBASE(0x5760910);
        const uintptr_t lshift = REBASE(0x5760450);
        const uintptr_t arshift = REBASE(0x57606a0);
        const uintptr_t rshift = REBASE(0x5760570);
        const uintptr_t bxor = REBASE(0x57602c0);
        const uintptr_t btest = REBASE(0x5760140);
        const uintptr_t countlz = REBASE(0x5760c60);
        const uintptr_t countrz = REBASE(0x5760db0);
        const uintptr_t byteswap = REBASE(0x573f9a0);
        const uintptr_t band = REBASE(0x5760110);
        const uintptr_t bor = REBASE(0x57601c0);
        const uintptr_t bnot = REBASE(0x57603c0);
    } // namespace bit32

    namespace table
    {
        const uintptr_t create = REBASE(0x573bdb0);
        const uintptr_t find = REBASE(0x573c580);
        const uintptr_t clear = REBASE(0x573ca20);
        const uintptr_t freeze = REBASE(0x573ca70);
        const uintptr_t clone = REBASE(0x573ccc0);
        const uintptr_t unpack = REBASE(0x573a5c0);
        const uintptr_t pack = REBASE(0x5739d70);
        const uintptr_t insert = REBASE(0x5736fd0);
        const uintptr_t remove = REBASE(0x57371d0);
        const uintptr_t concat = REBASE(0x5739a50);
        const uintptr_t sort = REBASE(0x573bc30);
        const uintptr_t foreach = REBASE(0x5734ac0);
        const uintptr_t foreachi = REBASE(0x5733d70);
    } // namespace table

    namespace integer
    {
        const uintptr_t abs = REBASE(0x57506e0);
        const uintptr_t ceil = REBASE(0x5751100);
        const uintptr_t floor = REBASE(0x57511e0);
        const uintptr_t sqrt = REBASE(0x5751550);
        const uintptr_t max = REBASE(0x57520c0);
        const uintptr_t min = REBASE(0x5751f60);
        const uintptr_t clamp = REBASE(0x5752d60);
        const uintptr_t pow = REBASE(0x5751650);
        const uintptr_t sign = REBASE(0x5752f90);
        const uintptr_t byteswap = REBASE(0x573f9a0);
    } // namespace integer

    namespace utf8
    {
        const uintptr_t char = REBASE(0x57409c0);
        const uintptr_t codepoint = REBASE(0x5740620);
        const uintptr_t codes = REBASE(0x5741690);
        const uintptr_t graphemes = REBASE(0x43542f0);
        const uintptr_t len = REBASE(0x5740340);
        const uintptr_t offset = REBASE(0x5741140);
        const uintptr_t nfdnormalize = REBASE(0x4355a50);
        const uintptr_t nfcnormalize = REBASE(0x4354fd0);
        const uintptr_t charpattern = REBASE(0x7178548);
    } // namespace utf8

    namespace buffer
    {
        const uintptr_t create = REBASE(0x57555b0);
        const uintptr_t fromstring = REBASE(0x5755660);
        const uintptr_t tostring = REBASE(0x5755730);
        const uintptr_t len = REBASE(0x5756860);
        const uintptr_t copy = REBASE(0x5756910);
        const uintptr_t readi8 = REBASE(0x57573d0);
        const uintptr_t readu8 = REBASE(0x5757530);
        const uintptr_t readi16 = REBASE(0x5757690);
        const uintptr_t readu16 = REBASE(0x57577f0);
        const uintptr_t readi32 = REBASE(0x5757950);
        const uintptr_t readu32 = REBASE(0x5757ab0);
        const uintptr_t readf32 = REBASE(0x5757c10);
        const uintptr_t readf64 = REBASE(0x5757d70);
        const uintptr_t writei8 = REBASE(0x5757ed0);
        const uintptr_t writeu8 = REBASE(0x5757ed0);
        const uintptr_t writei16 = REBASE(0x5758050);
        const uintptr_t writeu16 = REBASE(0x5758050);
        const uintptr_t writei32 = REBASE(0x57581d0);
        const uintptr_t writeu32 = REBASE(0x57581d0);
        const uintptr_t writef32 = REBASE(0x5758350);
        const uintptr_t writef64 = REBASE(0x57584e0);
        const uintptr_t readbits = REBASE(0x5756e50);
        const uintptr_t writebits = REBASE(0x5757090);
    } // namespace buffer

    namespace os
    {
        const uintptr_t clock = REBASE(0x5742550);
        const uintptr_t date = REBASE(0x5743ab0);
        const uintptr_t difftime = REBASE(0x57444c0);
        const uintptr_t time = REBASE(0x57441b0);
    } // namespace os

    namespace string
    {
        const uintptr_t split = REBASE(0x5749ff0);
        const uintptr_t byte = REBASE(0x5745b70);
        const uintptr_t char = REBASE(0x5745e00);
        const uintptr_t find = REBASE(0x5747a10);
        const uintptr_t format = REBASE(0x57499c0);
        const uintptr_t gmatch = REBASE(0x5747df0);
        const uintptr_t gsub = REBASE(0x57493b0);
        const uintptr_t len = REBASE(0x5744670);
        const uintptr_t lower = REBASE(0x57452e0);
        const uintptr_t match = REBASE(0x5747a20);
        const uintptr_t rep = REBASE(0x5745580);
        const uintptr_t reverse = REBASE(0x5745190);
        const uintptr_t sub = REBASE(0x5744720);
        const uintptr_t upper = REBASE(0x5745430);
    } // namespace string

    namespace vector
    {
        const uintptr_t create = REBASE(0x574e3d0);
        const uintptr_t magnitude = REBASE(0x574e580);
        const uintptr_t normalize = REBASE(0x574e670);
        const uintptr_t cross = REBASE(0x574e750);
        const uintptr_t dot = REBASE(0x574e820);
        const uintptr_t angle = REBASE(0x574e920);
        const uintptr_t floor = REBASE(0x574ebb0);
        const uintptr_t ceil = REBASE(0x574ec50);
        const uintptr_t abs = REBASE(0x574ecf0);
        const uintptr_t max = REBASE(0x574f0b0);
        const uintptr_t min = REBASE(0x574ef90);
        const uintptr_t clamp = REBASE(0x574ee20);
    } // namespace vector

    // other
    const uintptr_t CastArgs = REBASE(0x17b72f0);
    const uintptr_t ConnectionDisconnect = REBASE(0x41b40e0);
    const uintptr_t EnableLoadModule = REBASE(0x85c4e80);
    const uintptr_t GetCapabilities = REBASE(0x1d34b70);
    const uintptr_t LockViolationInstanceCrash = REBASE(0x70ea878);
    const uintptr_t LockViolationScriptCrash = REBASE(0x707b830);
    const uintptr_t LuaStepIntervalMsOverrideEnabled = REBASE(0x707ece8);
    const uintptr_t PhysicsSenderMaxBandwidthBps = REBASE(0x70b91d8);
    const uintptr_t Register = REBASE(0x3dba530);
    const uintptr_t RobloxLogCrash = REBASE(0x495ec80);
    const uintptr_t SetFFlag = REBASE(0x4977010);
    const uintptr_t WebSocketServiceEnableClientCreation = REBASE(0x7070a78);
    const uintptr_t WndProcessCheck = REBASE(0x6deae78);
    const uintptr_t OpCodeLookupTable = REBASE(0x6f1bf50);
} // namespace Offsets
