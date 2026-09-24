// dumped by nick
// date: 2026-09-24 19:39:14
// took 21.5s
// success rate: 100.0%

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
    inline constexpr const char* LiveChannel = "version-c5aecda2245e4fae";

    namespace Hyperion
    {
        const uintptr_t BitMap = HREBASE(0x28678);
        const uintptr_t ControlFlowGuard = HREBASE(0x6f7fc0);

        inline constexpr uint8_t ByteShift = 15;
        inline constexpr uint8_t PageShift = 12;
        inline constexpr uint32_t PageSize = 0x1000;
        inline constexpr uint32_t PageMask = 0xfff;
        inline constexpr uint8_t BitMask = 7;

        // other
        static const uint64_t patcheb[] = {
            0x25a150, 0x293fb8, 0x2cad8d, 0x69b900, 0xcaf24c, 
            0x1047098, 0x104c214, 0x104ca80
        };
    } // namespace Hyperion

    namespace DataModel
    {
        const uintptr_t DataModelDeleterPointer = REBASE(0x4ba5fac);
        inline constexpr uintptr_t GameLoaded = 0x5d8;
        inline constexpr uintptr_t JobId = 0x118;
        inline constexpr uintptr_t PlaceId = 0x190;
        inline constexpr uintptr_t ScriptContext = 0x440;
        inline constexpr uintptr_t Children = 0x70;
    } // namespace DataModel

    namespace FakeDataModel
    {
        const uintptr_t Pointer = REBASE(0x8dc2258);
        inline constexpr uintptr_t ToReal = 0x1f8;
    } // namespace FakeDataModel

    namespace TaskScheduler
    {
        const uintptr_t RawScheduler = REBASE(0x7bff6f0);
        const uintptr_t Pointer = REBASE(0x8b5cee8);
        inline constexpr uintptr_t MaxFPS = 0xb0;
        inline constexpr uintptr_t JobStart = 0xc8;
        inline constexpr uintptr_t JobEnd = 0xd0;
        inline constexpr uintptr_t JobName = 0x18;
        const uintptr_t TargetFps = REBASE(0x8b5cf98);
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
        inline constexpr uintptr_t capabilities = 0x40;
        inline constexpr uintptr_t identity = 0x30;
        inline constexpr uintptr_t IsCoreScript = 0x168;
        inline constexpr uintptr_t RequireBypass = 0xbb4;
        const uintptr_t Resume = REBASE(0x4260f50);
        const uintptr_t ResumeParallelWaitingScripts = REBASE(0x42cc4b0);
        const uintptr_t ScriptContextResume = REBASE(0x4260f50);
        const uintptr_t TaskQueue = REBASE(0x430b280);
        inline constexpr uintptr_t ToResume = 0x9e0;
        inline constexpr uintptr_t userdata = 0x60;
        const uintptr_t whjs_step = REBASE(0x428cea0);
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
        const uintptr_t IdentityPtr = REBASE(0x815e708);
        const uintptr_t KTable = REBASE(0x80bbe20);
        const uintptr_t GetIdentityStruct = REBASE(0x1ce65c0);
        const uintptr_t GetLuaStateForInstance = REBASE(0x4248600);
        const uintptr_t GetTlsPointer = REBASE(0x1a40);
        const uintptr_t GetTlsPointer_wrapper = REBASE(0x4250);
        const uintptr_t Impersonator = REBASE(0x7ae3a0);
        const uintptr_t rbxSpawn = REBASE(0x4268790);
    } // namespace RobloxThread

    namespace Instance
    {
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        const uintptr_t GetModuleFromVMStateMap = REBASE(0x426f150);
        inline constexpr uintptr_t getter = 0x18;
        const uintptr_t GetValues = REBASE(0x4122410);
        const uintptr_t Push = REBASE(0x411b4a0);
        inline constexpr uintptr_t scriptable = 0x90;
        const uintptr_t SetParent = REBASE(0x1cf33d0);
        inline constexpr uintptr_t ttype = 0x68;
        inline constexpr uintptr_t ttype_number = 0x30;
        const uintptr_t WaitForChild = REBASE(0x163c5e0);
        inline constexpr uintptr_t PropertyMap = 0x250;
    } // namespace Instance

    namespace Raknet
    {
        const uintptr_t HandleConnectionState = REBASE(0x4719602);
        const uintptr_t ProcessNetworkPacket = REBASE(0x2901bc0);
        const uintptr_t Receive = REBASE(0x29179f0);
        const uintptr_t RecvFromLoop = REBASE(0x2902720);
        const uintptr_t ReportNetworkError = REBASE(0x47076e0);
        const uintptr_t RPHandleActiveSystemList = REBASE(0x2901bc0);
        const uintptr_t RPOnOpenConnectionReply1 = REBASE(0x2904700);
        const uintptr_t RPReceive = REBASE(0x28eca6a);
        const uintptr_t RPsetServerMachineAddress = REBASE(0x290a7d0);
        const uintptr_t Send = REBASE(0x28f5620);
        const uintptr_t SendPacketsToSelf = REBASE(0x28eaf50);
        const uintptr_t UpdateNetworkLoop = REBASE(0x28e71c0);
    } // namespace Raknet

    namespace Luau
    {
        const uintptr_t luaH_dummynode = REBASE(0x63cab08);
        const uintptr_t luaO_nilobject = REBASE(0x63cdf48);
        const uintptr_t call_binTM = REBASE(0x2712fe0);
        const uintptr_t ClientOnRecieve = REBASE(0x4717980);
        const uintptr_t currfuncname = REBASE(0x26ff170);
        const uintptr_t deletegco = REBASE(0x2717ff0);
        const uintptr_t f_luaopen = REBASE(0x26fc420);
        const uintptr_t freeobj = REBASE(0x2717a40);
        const uintptr_t getfunc = REBASE(0x2744230);
        const uintptr_t index2addr = REBASE(0x26f7a20);
        const uintptr_t lua_createtable = REBASE(0x163bb50);
        const uintptr_t lua_error = REBASE(0x26fa450);
        const uintptr_t lua_exception = REBASE(0x2709590);
        const uintptr_t lua_pushfstringL = REBASE(0x26f8de0);
        const uintptr_t lua_pushthread = REBASE(0x26f8eb0);
        const uintptr_t lua_pushvfstring = REBASE(0x26f8d70);
        const uintptr_t lua_resume = REBASE(0x270e150);
        const uintptr_t lua_setfenv = REBASE(0x26f9070);
        const uintptr_t lua_setthreadfinalizer = REBASE(0x26f9df0);
        const uintptr_t luaB_assert = REBASE(0x27486d0);
        const uintptr_t luaB_newproxy = REBASE(0x2749a6e);
        const uintptr_t luaB_next = REBASE(0x2747c20);
        const uintptr_t luaB_rawlen = REBASE(0x2746f80);
        const uintptr_t luaB_select = REBASE(0x2748780);
        const uintptr_t luaB_setfenv = REBASE(0x2744b20);
        const uintptr_t luaB_setmetatable = REBASE(0x2744010);
        const uintptr_t luaB_tonumber = REBASE(0x27430f0);
        const uintptr_t luaC_step = REBASE(0x2719020);
        const uintptr_t luaD_growstack = REBASE(0x26f7f50);
        const uintptr_t luaD_preparefinalize = REBASE(0x270b0c0);
        const uintptr_t luaD_rawrunprotected = REBASE(0x27096f0);
        const uintptr_t luaD_reallocstack = REBASE(0x26f7bd0);
        const uintptr_t luaD_runfinalizers = REBASE(0x270b160);
        const uintptr_t luaD_throw = REBASE(0x2709720);
        const uintptr_t luaF_freeproto = REBASE(0x27241e0);
        const uintptr_t luaG_aritherror = REBASE(0x2722ad0);
        const uintptr_t luaG_concaterror = REBASE(0x2722a80);
        const uintptr_t luaG_forerrorL = REBASE(0x2722a40);
        const uintptr_t luaG_indexerror = REBASE(0x2722bf0);
        const uintptr_t luaG_methoderror = REBASE(0x2722cf0);
        const uintptr_t luaG_missingmembererror = REBASE(0x2722c80);
        const uintptr_t luaG_ordererror = REBASE(0x2722b70);
        const uintptr_t luaG_pusherror = REBASE(0x2722d60);
        const uintptr_t luaG_readonlyerror = REBASE(0x2722d30);
        const uintptr_t luaG_runerrorL = REBASE(0x2723350);
        const uintptr_t luaG_typeerrorL = REBASE(0x2722a00);
        const uintptr_t luaH_clone = REBASE(0x27215a0);
        const uintptr_t luai_num2str = REBASE(0x2729240);
        const uintptr_t luaL_addlstring = REBASE(0x2706a00);
        const uintptr_t luaL_addvalue = REBASE(0x2706a60);
        const uintptr_t luaL_argcheck = REBASE(0x2701a50);
        const uintptr_t luaL_argerrorL = REBASE(0x26ff1f0);
        const uintptr_t luaL_error = REBASE(0x26ffe40);
        const uintptr_t luaL_getmetafield = REBASE(0x26ff1f0);
        const uintptr_t luaL_getmetafield = REBASE(0x2701a50);
        const uintptr_t luaL_prepbuffsize = REBASE(0x2706670);
        const uintptr_t luaL_requiref = REBASE(0x2702fb0);
        const uintptr_t luaL_tolstring = REBASE(0x2707910);
        const uintptr_t luaL_typeerrorL = REBASE(0x26ff270);
        const uintptr_t luaL_typename = REBASE(0x2705bb0);
        const uintptr_t luaM_free = REBASE(0x2728710);
        const uintptr_t luaM_freeblock = REBASE(0x2728650);
        const uintptr_t luaM_freegco = REBASE(0x27287c0);
        const uintptr_t luaM_toobig = REBASE(0x2728580);
        const uintptr_t luaM_visitgco = REBASE(0x2728b70);
        const uintptr_t luaO_pushfstring = REBASE(0x2722360);
        const uintptr_t luaO_str2d = REBASE(0x2721ab0);
        const uintptr_t luaR_defaultcreateobject = REBASE(0x27508a0);
        const uintptr_t luau_execute = REBASE(0x272a260);
        const uintptr_t luau_execute_false = REBASE(0x2736e10);
        const uintptr_t luau_execute_true = REBASE(0x272aa70);
        const uintptr_t luau_load = REBASE(0x27582c0);
        const uintptr_t luaV_doarithimpl_TM_ADD = REBASE(0x2715060);
        const uintptr_t luaV_doarithimpl_TM_DIV = REBASE(0x27156a0);
        const uintptr_t luaV_doarithimpl_TM_IDIV = REBASE(0x2715920);
        const uintptr_t luaV_doarithimpl_TM_MOD = REBASE(0x2715c20);
        const uintptr_t luaV_doarithimpl_TM_MUL = REBASE(0x2715420);
        const uintptr_t luaV_doarithimpl_TM_POW = REBASE(0x2715dd0);
        const uintptr_t luaV_doarithimpl_TM_SUB = REBASE(0x2715240);
        const uintptr_t luaV_doarithimpl_TM_UNM = REBASE(0x2715f80);
        const uintptr_t luaV_gettable = REBASE(0x27100e0);
        const uintptr_t luaV_prepareFORN = REBASE(0x2714720);
        const uintptr_t luaV_settable = REBASE(0x2710f70);
        const uintptr_t luaV_tostring = REBASE(0x270e330);
        const uintptr_t luaVM_load = REBASE(0x41b3b50);
        const uintptr_t print = REBASE(0x1cab4b0);
        const uintptr_t pseudo2addr = REBASE(0x26f7960);
        const uintptr_t pushfstring_nocheck = REBASE(0x2722360);
        const uintptr_t raiseerror = REBASE(0x4924110);
        const uintptr_t table_clone = REBASE(0x5607560);
        const uintptr_t tag_error = REBASE(0x26ff360);
    } // namespace Luau

    namespace Task
    {
        const uintptr_t cancel = REBASE(0x431a920);
        const uintptr_t defer = REBASE(0x4319b60);
        const uintptr_t desynchronize = REBASE(0x4318f70);
        const uintptr_t spawn = REBASE(0x431a020);
        const uintptr_t synchronize = REBASE(0x4318b60);
        const uintptr_t wait = REBASE(0x431a6b0);
    } // namespace Task

    namespace Signals
    {
        const uintptr_t FireAllClients = REBASE(0x3474980);
        const uintptr_t FireMouseClick = REBASE(0x3b4d9f0);
        const uintptr_t FireMouseHoverEnter = REBASE(0x3b4efe0);
        const uintptr_t FireMouseHoverLeave = REBASE(0x3b4f180);
        const uintptr_t FireProximityPrompt = REBASE(0x3102650);
        const uintptr_t FireServer = REBASE(0x3474600);
        const uintptr_t FireTouchInterest = REBASE(0xbc3b10);
        const uintptr_t InvokeClient = REBASE(0x34d7690);
        const uintptr_t InvokeServer = REBASE(0x34d8b00);
        const uintptr_t IsLegalSendEvent = REBASE(0x4848a90);
        const uintptr_t TouchInterest = REBASE(0xcc58c0);
    } // namespace Signals

    namespace coroutine
    {
        const uintptr_t close = REBASE(0x5626ca0);
        const uintptr_t create = REBASE(0x5626310);
        const uintptr_t running = REBASE(0x5626ba0);
        const uintptr_t status = REBASE(0x56248e0);
        const uintptr_t wrap = REBASE(0x56268d0);
        const uintptr_t yield = REBASE(0x5626b40);
        const uintptr_t isyieldable = REBASE(0x5626c10);
    } // namespace coroutine

    namespace bit32
    {
        const uintptr_t EX(bnot) = REBASE(0x5608f80);
        const uintptr_t band = REBASE(0x562a950);
        const uintptr_t bor = REBASE(0x562aa00);
        const uintptr_t EX(bxor) = REBASE(0x5608fd0);
        const uintptr_t EX(test) = REBASE(0x560a0c0);
        const uintptr_t lrotate = REBASE(0x562b0d0);
        const uintptr_t rrotate = REBASE(0x562b150);
        const uintptr_t lshift = REBASE(0x562ac90);
        const uintptr_t arshift = REBASE(0x562aee0);
        const uintptr_t rshift = REBASE(0x562adb0);
        const uintptr_t bxor = REBASE(0x562ab00);
        const uintptr_t btest = REBASE(0x562a980);
        const uintptr_t countlz = REBASE(0x562b4a0);
        const uintptr_t countrz = REBASE(0x562b5f0);
        const uintptr_t byteswap = REBASE(0x560a290);
        const uintptr_t EX(band) = REBASE(0x5608d80);
        const uintptr_t EX(bor) = REBASE(0x5608e80);
        const uintptr_t EX(bnot) = REBASE(0x5608f80);
    } // namespace bit32

    namespace table
    {
        const uintptr_t create = REBASE(0x5606680);
        const uintptr_t find = REBASE(0x5606e70);
        const uintptr_t clear = REBASE(0x5607310);
        const uintptr_t freeze = REBASE(0x5607360);
        const uintptr_t clone = REBASE(0x5607560);
        const uintptr_t unpack = REBASE(0x5604eb0);
        const uintptr_t pack = REBASE(0x5604660);
        const uintptr_t insert = REBASE(0x5602ad0);
        const uintptr_t remove = REBASE(0x5602cd0);
        const uintptr_t concat = REBASE(0x5604340);
        const uintptr_t sort = REBASE(0x5606500);
        const uintptr_t foreach = REBASE(0x56005b0);
        const uintptr_t foreachi = REBASE(0x55ff850);
    } // namespace table

    namespace integer
    {
        const uintptr_t abs = REBASE(0x561af40);
        const uintptr_t ceil = REBASE(0x561b9f0);
        const uintptr_t floor = REBASE(0x561bae0);
        const uintptr_t sqrt = REBASE(0x561be60);
        const uintptr_t max = REBASE(0x561ca10);
        const uintptr_t min = REBASE(0x561c8b0);
        const uintptr_t clamp = REBASE(0x561d6b0);
        const uintptr_t pow = REBASE(0x561bf60);
        const uintptr_t sign = REBASE(0x561d8e0);
        const uintptr_t EX(byteswap) = REBASE(0x560a290);
    } // namespace integer

    namespace utf8
    {
        const uintptr_t char = REBASE(0x560b2b0);
        const uintptr_t codepoint = REBASE(0x560af10);
        const uintptr_t codes = REBASE(0x560bf90);
        const uintptr_t graphemes = REBASE(0x4313e00);
        const uintptr_t len = REBASE(0x560ac30);
        const uintptr_t offset = REBASE(0x560ba50);
        const uintptr_t nfdnormalize = REBASE(0x4315570);
        const uintptr_t nfcnormalize = REBASE(0x4314af0);
        const uintptr_t charpattern = REBASE(0x7078cb0);
    } // namespace utf8

    namespace buffer
    {
        const uintptr_t create = REBASE(0x561fee0);
        const uintptr_t fromstring = REBASE(0x561ff90);
        const uintptr_t tostring = REBASE(0x5620060);
        const uintptr_t len = REBASE(0x5621190);
        const uintptr_t copy = REBASE(0x5621240);
        const uintptr_t readi8 = REBASE(0x5621d00);
        const uintptr_t readu8 = REBASE(0x5621e60);
        const uintptr_t readi16 = REBASE(0x5621fc0);
        const uintptr_t readu16 = REBASE(0x5622120);
        const uintptr_t readi32 = REBASE(0x5622280);
        const uintptr_t readu32 = REBASE(0x56223e0);
        const uintptr_t readf32 = REBASE(0x5622540);
        const uintptr_t readf64 = REBASE(0x56226b0);
        const uintptr_t writei8 = REBASE(0x5622810);
        const uintptr_t writeu8 = REBASE(0x5622810);
        const uintptr_t writei16 = REBASE(0x5622990);
        const uintptr_t writeu16 = REBASE(0x5622990);
        const uintptr_t writei32 = REBASE(0x5622b10);
        const uintptr_t writeu32 = REBASE(0x5622b10);
        const uintptr_t writef32 = REBASE(0x5622c90);
        const uintptr_t writef64 = REBASE(0x5622e20);
        const uintptr_t readbits = REBASE(0x5621780);
        const uintptr_t writebits = REBASE(0x56219c0);
    } // namespace buffer

    namespace os
    {
        const uintptr_t clock = REBASE(0x560ce50);
        const uintptr_t date = REBASE(0x560e3b0);
        const uintptr_t difftime = REBASE(0x560edc0);
        const uintptr_t time = REBASE(0x560eac0);
    } // namespace os

    namespace string
    {
        const uintptr_t split = REBASE(0x56148c0);
        const uintptr_t byte = REBASE(0x5610440);
        const uintptr_t char = REBASE(0x56106d0);
        const uintptr_t find = REBASE(0x56122e0);
        const uintptr_t format = REBASE(0x5614290);
        const uintptr_t gmatch = REBASE(0x56126b0);
        const uintptr_t gsub = REBASE(0x5613c80);
        const uintptr_t len = REBASE(0x560ef70);
        const uintptr_t lower = REBASE(0x560fbc0);
        const uintptr_t match = REBASE(0x56122f0);
        const uintptr_t rep = REBASE(0x560fe60);
        const uintptr_t reverse = REBASE(0x560fa80);
        const uintptr_t sub = REBASE(0x560f020);
        const uintptr_t upper = REBASE(0x560fd10);
    } // namespace string

    namespace vector
    {
        const uintptr_t create = REBASE(0x5618c80);
        const uintptr_t magnitude = REBASE(0x5618e30);
        const uintptr_t normalize = REBASE(0x5618f20);
        const uintptr_t cross = REBASE(0x5619000);
        const uintptr_t dot = REBASE(0x56190d0);
        const uintptr_t angle = REBASE(0x56191d0);
        const uintptr_t floor = REBASE(0x5619460);
        const uintptr_t ceil = REBASE(0x5619500);
        const uintptr_t abs = REBASE(0x56195a0);
        const uintptr_t max = REBASE(0x5619960);
        const uintptr_t min = REBASE(0x5619840);
        const uintptr_t clamp = REBASE(0x56196d0);
    } // namespace vector

    // other
    const uintptr_t CastArgs = REBASE(0x1791500);
    const uintptr_t ConnectionDisconnect = REBASE(0x4186a50);
    const uintptr_t EnableLoadModule = REBASE(0x8496288);
    const uintptr_t GetCapabilities = REBASE(0x1ce6760);
    const uintptr_t GetFFlag = REBASE(0x493af20);
    const uintptr_t LockViolationInstanceCrash = REBASE(0x6fe8880);
    const uintptr_t LockViolationScriptCrash = REBASE(0x6f77560);
    const uintptr_t LuaStepIntervalMsOverrideEnabled = REBASE(0x6f7aae0);
    const uintptr_t PhysicsSenderMaxBandwidthBps = REBASE(0x6fb2d08);
    const uintptr_t Register = REBASE(0x3cbca70);
    const uintptr_t RobloxLogCrash = REBASE(0x4921fd0);
    const uintptr_t SetFFlag = REBASE(0x493a3a0);
    const uintptr_t WebSocketServiceEnableClientCreation = REBASE(0x6f6c470);
    const uintptr_t WndProcessCheck = REBASE(0x6cf6af8);
} // namespace Offsets
