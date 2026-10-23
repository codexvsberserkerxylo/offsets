// dumped by nick (@skiddingonthescene)
// date: 2026-10-22 11:21:47
// took 28.8s
// success rate: 84.8%

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
    inline constexpr const char* LiveChannel = "version-9ac8595712b447a7";

    namespace Hyperion
    {
        const uintptr_t BitMap = HREBASE(0x23cf90);
        const uintptr_t ControlFlowGuard = HREBASE(0x3d7e40);

        inline constexpr uint8_t ByteShift = 15;
        inline constexpr uint8_t PageShift = 12;
        inline constexpr uint32_t PageSize = 0x1000;
        inline constexpr uint32_t PageMask = 0xfff;
        inline constexpr uint8_t BitMask = 7;

        // other
        static const uint64_t patcheb[] = {
            0x2e6ec0, 0x2ea724, 0xbf2230, 0xc29f40, 0xfac3d0, 
            0xfc2b90, 0xfc6fc0, 0x1073e54
        };
    } // namespace Hyperion

    namespace DataModel
    {
        const uintptr_t DataModelDeleterPointer = REBASE(0x4d5443b);
        inline constexpr uintptr_t GameLoaded = 0x5c8;
        inline constexpr uintptr_t JobId = 0x108;
        inline constexpr uintptr_t PlaceId = 0x180;
        inline constexpr uintptr_t ScriptContext = 0x440;
        inline constexpr uintptr_t Children = 0x70;
    } // namespace DataModel

    namespace FakeDataModel
    {
        const uintptr_t Pointer = REBASE(0x8f59810);
        inline constexpr uintptr_t ToReal = 0x1f8;
    } // namespace FakeDataModel

    namespace TaskScheduler
    {
        const uintptr_t RawScheduler = REBASE(0x80f16e0);
        const uintptr_t Pointer = REBASE(0x8f026a8);
        inline constexpr uintptr_t MaxFPS = 0xb0;
        inline constexpr uintptr_t JobStart = 0xc8;
        inline constexpr uintptr_t JobEnd = 0xd0;
        inline constexpr uintptr_t JobName = 0x18;
        const uintptr_t TargetFps = REBASE(0x8f02758);
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
        inline constexpr uintptr_t capabilities = 0x40;
        inline constexpr uintptr_t RequireBypass = 0x988;
        inline constexpr uintptr_t ToResume = 0x958;
        const uintptr_t Resume = REBASE(0x43004b0);
        const uintptr_t ResumeParallelWaitingScripts = REBASE(0x4373aa0);
        const uintptr_t TaskQueue = REBASE(0x43b3970);
        inline constexpr uintptr_t userdata = 0x60;
        const uintptr_t whjs_step = REBASE(0x4335aa0);
    } // namespace ScriptContext

    namespace BasePart
    {
        inline constexpr uintptr_t Primitive = 0x188; // 0x178 ig
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
        const uintptr_t IdentityPtr = REBASE(0x86d8748);
        const uintptr_t KTable = REBASE(0x85ead60);
        const uintptr_t GetIdentityStruct = REBASE(0x1d45c90);
        const uintptr_t GetTlsPointer = REBASE(0x1b50);
        const uintptr_t GetTlsPointer_wrapper = REBASE(0x6bb0);
        const uintptr_t Impersonator = REBASE(0x73d2c0);
        const uintptr_t rbxSpawn = REBASE(0x43083e0);
    } // namespace RobloxThread

    namespace Instance
    {
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        const uintptr_t GetModuleFromVMStateMap = REBASE(0x430fc60);
        inline constexpr uintptr_t getter = 0x18;
        const uintptr_t GetValues = REBASE(0x41c4510);
        const uintptr_t Push = REBASE(0x41bd590);
        const uintptr_t SetParent = REBASE(0x1d54640);
        const uintptr_t GetPropertyData = REBASE(0x1d478a0);
        const uintptr_t GetProperty = REBASE(0x26e0370);
        inline constexpr uintptr_t ttype_number = 0x30;
        const uintptr_t WaitForChild = REBASE(0x153f6c0);
        inline constexpr uintptr_t PropertyMap = 0x250;
        const uintptr_t Push = REBASE(0x4246e90);
    } // namespace Instance

    namespace Raknet
    {
        const uintptr_t HandleConnectionState = REBASE(0x488d302);
        const uintptr_t ProcessNetworkPacket = REBASE(0x28b8180);
        const uintptr_t Receive = REBASE(0x28cee80);
        const uintptr_t RecvFromLoop = REBASE(0x28b8cf0);
        const uintptr_t ReportNetworkError = REBASE(0x48795e0);
        const uintptr_t RPOnOpenConnectionReply1 = REBASE(0x28bae50);
        const uintptr_t RPReceive = REBASE(0x28a3544);
        const uintptr_t RPsetServerMachineAddress = REBASE(0x28c0ea0);
        const uintptr_t Send = REBASE(0x28abca0);
        const uintptr_t SendPacketsToSelf = REBASE(0x28a1af0);
        const uintptr_t UpdateNetworkLoop = REBASE(0x289de30);
    } // namespace Raknet

    namespace Luau
    {
        const uintptr_t call_binTM = REBASE(0x26a9e80);
        const uintptr_t ClientOnRecieve = REBASE(0x488b3f0);
        const uintptr_t currfuncname = REBASE(0x2698d20);
        const uintptr_t deletegco = REBASE(0x26afb40);
        const uintptr_t f_luaopen = REBASE(0x2693070);
        const uintptr_t freeobj = REBASE(0x26af580);
        const uintptr_t getfunc = REBASE(0x26d81f0);
        const uintptr_t index2addr = REBASE(0x268c310);
        const uintptr_t loadsafe = REBASE(0x26f4750);
        const uintptr_t lua_createtable = REBASE(0x153eab0);
        const uintptr_t lua_error = REBASE(0x2690140);
        const uintptr_t lua_exception = REBASE(0x2691d80);
        const uintptr_t lua_pushfstringL = REBASE(0x268d830);
        const uintptr_t lua_pushvfstring = REBASE(0x268d7c0);
        const uintptr_t lua_setthreadfinalizer = REBASE(0x268faf0);
        const uintptr_t luaB_assert = REBASE(0x26dbc90);
        const uintptr_t luaB_newproxy = REBASE(0x26dcd1e);
        const uintptr_t luaB_next = REBASE(0x26db1e0);
        const uintptr_t luaB_rawlen = REBASE(0x26da540);
        const uintptr_t luaB_select = REBASE(0x26dbd40);
        const uintptr_t luaB_setfenv = REBASE(0x26d8aa0);
        const uintptr_t luaB_setmetatable = REBASE(0x26d7fe0);
        const uintptr_t luaB_tonumber = REBASE(0x26d70a0);
        const uintptr_t luaC_step = REBASE(0x26b0b80);
        const uintptr_t luaD_preparefinalize = REBASE(0x2693890);
        const uintptr_t luaD_runfinalizers = REBASE(0x2693920);
        const uintptr_t luaD_throw = REBASE(0x2691f10);
        const uintptr_t luaF_freeproto = REBASE(0x26b81a0);
        const uintptr_t luaG_aritherror = REBASE(0x26b6b00);
        const uintptr_t luaG_concaterror = REBASE(0x26b6ab0);
        const uintptr_t luaG_forerrorL = REBASE(0x26b6a70);
        const uintptr_t luaG_indexerror = REBASE(0x26b6c20);
        const uintptr_t luaG_methoderror = REBASE(0x26b6d20);
        const uintptr_t luaG_missingmembererror = REBASE(0x26b6cb0);
        const uintptr_t luaG_ordererror = REBASE(0x26b6ba0);
        const uintptr_t luaG_readonlyerror = REBASE(0x26b6d60);
        const uintptr_t luaG_runerrorL = REBASE(0x26b7390);
        const uintptr_t luaG_typeerrorL = REBASE(0x26b6a30);
        const uintptr_t luaH_clone = REBASE(0x26b3310);
        const uintptr_t luai_num2str = REBASE(0x26e07e0);
        const uintptr_t luaL_argerrorL = REBASE(0x2698da0);
        const uintptr_t luaL_error = REBASE(0x26999f0);
        const uintptr_t luaL_getmetafield = REBASE(0x2698da0);
        const uintptr_t luaL_requiref = REBASE(0x269d060);
        const uintptr_t luaL_tolstring = REBASE(0x26a1e60);
        const uintptr_t luaL_typeerrorL = REBASE(0x2698e20);
        const uintptr_t luaL_typename = REBASE(0x26a00e0);
        const uintptr_t luaM_free = REBASE(0x26dfad0);
        const uintptr_t luaM_freeblock = REBASE(0x26dfa20);
        const uintptr_t luaM_freegco = REBASE(0x26dfb80);
        const uintptr_t luaM_toobig = REBASE(0x26df9f0);
        const uintptr_t luaM_visitgco = REBASE(0x26dff30);
        const uintptr_t luaO_pushfstring = REBASE(0x26b6500);
        const uintptr_t luaR_defaultcreateobject = REBASE(0x26e4a10);
        const uintptr_t luau_execute_false = REBASE(0x26ca240);
        const uintptr_t luau_execute_true = REBASE(0x26bd7e0);
        const uintptr_t luaV_doarithimpl_TM_ADD = REBASE(0x26ac0c0);
        const uintptr_t luaV_doarithimpl_TM_DIV = REBASE(0x26ac700);
        const uintptr_t luaV_doarithimpl_TM_IDIV = REBASE(0x26ac980);
        const uintptr_t luaV_doarithimpl_TM_MOD = REBASE(0x26acc80);
        const uintptr_t luaV_doarithimpl_TM_MUL = REBASE(0x26ac480);
        const uintptr_t luaV_doarithimpl_TM_POW = REBASE(0x26ace30);
        const uintptr_t luaV_doarithimpl_TM_SUB = REBASE(0x26ac2a0);
        const uintptr_t luaV_doarithimpl_TM_UNM = REBASE(0x26acfe0);
        const uintptr_t luaV_gettable = REBASE(0x26a69b0);
        const uintptr_t luaV_prepareFORN = REBASE(0x26ab770);
        const uintptr_t luaV_settable = REBASE(0x26a8770);
        const uintptr_t luaV_tostring = REBASE(0x26a3be0);
        const uintptr_t luaVM_load = REBASE(0x42560b0);
        const uintptr_t print = REBASE(0x1d071a0);
        const uintptr_t pushfstring_nocheck = REBASE(0x26b6500);
        const uintptr_t raiseerror = REBASE(0x4aa83a0);
        const uintptr_t table_clone = REBASE(0x26ecd50);
        const uintptr_t tag_error = REBASE(0x2698f10);
    } // namespace Luau

    namespace Task
    {
        const uintptr_t cancel = REBASE(0x43c46c0);
        const uintptr_t defer = REBASE(0x43c38d0);
        const uintptr_t desynchronize = REBASE(0x43c2c80);
        const uintptr_t spawn = REBASE(0x43c3db0);
        const uintptr_t synchronize = REBASE(0x43c27b0);
        const uintptr_t wait = REBASE(0x43c4450);
    } // namespace Task

    namespace Signals
    {
        const uintptr_t FireAllClients = REBASE(0x34deda0);
        const uintptr_t FireMouseClick = REBASE(0x3c7e520);
        const uintptr_t FireMouseHoverEnter = REBASE(0x3c7fb10);
        const uintptr_t FireMouseHoverLeave = REBASE(0x3c7fcb0);
        const uintptr_t FireProximityPrompt = REBASE(0x312c010);
        const uintptr_t FireServer = REBASE(0x34de9b0);
        const uintptr_t FireTouchInterest = REBASE(0xa61990);
        const uintptr_t InvokeClient = REBASE(0x35b1eb0);
        const uintptr_t InvokeServer = REBASE(0x35b5dc0);
        const uintptr_t IsLegalSendEvent = REBASE(0x49d8db0);
        const uintptr_t TouchInterest = REBASE(0xb67120);
    } // namespace Signals

    namespace coroutine
    {
        const uintptr_t close = REBASE(0x59eb170);
        const uintptr_t create = REBASE(0x59ea830);
        const uintptr_t running = REBASE(0x59eb070);
        const uintptr_t status = REBASE(0x59e8df0);
        const uintptr_t wrap = REBASE(0x59eada0);
        const uintptr_t yield = REBASE(0x59eb010);
        const uintptr_t isyieldable = REBASE(0x59eb0e0);
    } // namespace coroutine

    namespace bit32
    {
        const uintptr_t bnot = REBASE(0x59ef120);
        const uintptr_t band = REBASE(0x59eee70);
        const uintptr_t bor = REBASE(0x59eef20);
        const uintptr_t bxor = REBASE(0x59ef020);
        const uintptr_t test = REBASE(0x59eeea0);
        const uintptr_t lrotate = REBASE(0x59ef5f0);
        const uintptr_t rrotate = REBASE(0x59ef670);
        const uintptr_t lshift = REBASE(0x59ef1b0);
        const uintptr_t arshift = REBASE(0x59ef400);
        const uintptr_t rshift = REBASE(0x59ef2d0);
        const uintptr_t bxor = REBASE(0x59ef020);
        const uintptr_t btest = REBASE(0x59eeea0);
        const uintptr_t countlz = REBASE(0x59ef9c0);
        const uintptr_t countrz = REBASE(0x59efb10);
        const uintptr_t byteswap = REBASE(0x59cc850);
        const uintptr_t band = REBASE(0x59eee70);
        const uintptr_t bor = REBASE(0x59eef20);
        const uintptr_t bnot = REBASE(0x59ef120);
    } // namespace bit32

    namespace table
    {
        const uintptr_t create = REBASE(0x26ebc70);
        const uintptr_t find = REBASE(0x26ec460);
        const uintptr_t clear = REBASE(0x26ecb00);
        const uintptr_t freeze = REBASE(0x26ecb50);
        const uintptr_t clone = REBASE(0x26ecd50);
        const uintptr_t unpack = REBASE(0x26ea480);
        const uintptr_t pack = REBASE(0x26e9c30);
        const uintptr_t insert = REBASE(0x26e8320);
        const uintptr_t remove = REBASE(0x26e8520);
        const uintptr_t concat = REBASE(0x26e9910);
        const uintptr_t sort = REBASE(0x26ebaf0);
        const uintptr_t foreach = REBASE(0x26e5d20);
        const uintptr_t foreachi = REBASE(0x26e4fd0);
    } // namespace table

    namespace integer
    {
        const uintptr_t abs = REBASE(0x59df3b0);
        const uintptr_t ceil = REBASE(0x59dfe60);
        const uintptr_t floor = REBASE(0x59dff50);
        const uintptr_t sqrt = REBASE(0x59e02d0);
        const uintptr_t max = REBASE(0x59e0e80);
        const uintptr_t min = REBASE(0x59e0d20);
        const uintptr_t clamp = REBASE(0x59e1b20);
        const uintptr_t pow = REBASE(0x59e03d0);
        const uintptr_t sign = REBASE(0x59e1d50);
        const uintptr_t byteswap = REBASE(0x59cc850);
    } // namespace integer

    namespace utf8
    {
        const uintptr_t char = REBASE(0x59cd860);
        const uintptr_t codepoint = REBASE(0x59cd4c0);
        const uintptr_t codes = REBASE(0x59ce550);
        const uintptr_t graphemes = REBASE(0x43bd820);
        const uintptr_t len = REBASE(0x59cd1e0);
        const uintptr_t offset = REBASE(0x59ce010);
        const uintptr_t nfdnormalize = REBASE(0x43bea40);
        const uintptr_t nfcnormalize = REBASE(0x43bdfb0);
        const uintptr_t charpattern = REBASE(0x74f6db0);
    } // namespace utf8

    namespace buffer
    {
        const uintptr_t create = REBASE(0x59e4370);
        const uintptr_t fromstring = REBASE(0x59e4420);
        const uintptr_t tostring = REBASE(0x59e44f0);
        const uintptr_t len = REBASE(0x59e5630);
        const uintptr_t copy = REBASE(0x59e56e0);
        const uintptr_t readi8 = REBASE(0x59e61a0);
        const uintptr_t readu8 = REBASE(0x59e6300);
        const uintptr_t readi16 = REBASE(0x59e6460);
        const uintptr_t readu16 = REBASE(0x59e65c0);
        const uintptr_t readi32 = REBASE(0x59e6720);
        const uintptr_t readu32 = REBASE(0x59e6880);
        const uintptr_t readf32 = REBASE(0x59e69e0);
        const uintptr_t readf64 = REBASE(0x59e6b50);
        const uintptr_t writei8 = REBASE(0x59e6cb0);
        const uintptr_t writeu8 = REBASE(0x59e6cb0);
        const uintptr_t writei16 = REBASE(0x59e6e30);
        const uintptr_t writeu16 = REBASE(0x59e6e30);
        const uintptr_t writei32 = REBASE(0x59e6fb0);
        const uintptr_t writeu32 = REBASE(0x59e6fb0);
        const uintptr_t writef32 = REBASE(0x59e7130);
        const uintptr_t writef64 = REBASE(0x59e72c0);
        const uintptr_t readbits = REBASE(0x59e5c20);
        const uintptr_t writebits = REBASE(0x59e5e60);
    } // namespace buffer

    namespace os
    {
        const uintptr_t clock = REBASE(0x59cf3a0);
        const uintptr_t date = REBASE(0x59d08f0);
        const uintptr_t difftime = REBASE(0x59d1300);
        const uintptr_t time = REBASE(0x59d1000);
    } // namespace os

    namespace string
    {
        const uintptr_t split = REBASE(0x59d71b0);
        const uintptr_t byte = REBASE(0x59d2980);
        const uintptr_t char = REBASE(0x59d2c10);
        const uintptr_t find = REBASE(0x59d4820);
        const uintptr_t format = REBASE(0x59d6b80);
        const uintptr_t gmatch = REBASE(0x59d4bf0);
        const uintptr_t gsub = REBASE(0x59d61b0);
        const uintptr_t len = REBASE(0x59d14b0);
        const uintptr_t lower = REBASE(0x59d2100);
        const uintptr_t match = REBASE(0x59d4830);
        const uintptr_t rep = REBASE(0x59d23a0);
        const uintptr_t reverse = REBASE(0x59d1fc0);
        const uintptr_t sub = REBASE(0x59d1560);
        const uintptr_t upper = REBASE(0x59d2250);
    } // namespace string

    namespace vector
    {
        const uintptr_t create = REBASE(0x59dd100);
        const uintptr_t magnitude = REBASE(0x59dd2b0);
        const uintptr_t normalize = REBASE(0x59dd3a0);
        const uintptr_t cross = REBASE(0x59dd480);
        const uintptr_t dot = REBASE(0x59dd550);
        const uintptr_t angle = REBASE(0x59dd650);
        const uintptr_t floor = REBASE(0x59dd8e0);
        const uintptr_t ceil = REBASE(0x59dd980);
        const uintptr_t abs = REBASE(0x59dda20);
        const uintptr_t max = REBASE(0x59ddde0);
        const uintptr_t min = REBASE(0x59ddcc0);
        const uintptr_t clamp = REBASE(0x59ddb50);
    } // namespace vector

    namespace FFlags
    {
        const uintptr_t GetFFlag = REBASE(0x4abf470);
        const uintptr_t SetFFlag = REBASE(0x4abe970);
        const uintptr_t FFlagPointer = REBASE(0x8e1b0d0);
        const uintptr_t BooleanType = REBASE(0x7102c18);
        const uintptr_t BooleanValueType = REBASE(0x7102f60);
        const uintptr_t IntegerType = REBASE(0x7102b00);
        const uintptr_t IntegerValueType = REBASE(0x71029e8);
    } // namespace FFlags

    // other
    const uintptr_t CastArgs = REBASE(0x17ad810);
    const uintptr_t ConnectionDisconnect = REBASE(0x422a100);
    const uintptr_t EnableLoadModule = REBASE(0x8a21bf0);
    const uintptr_t GetCapabilities = REBASE(0x1d45e30);
    const uintptr_t LockViolationInstanceCrash = REBASE(0x7463410);
    const uintptr_t LockViolationScriptCrash = REBASE(0x73e6ca8);
    const uintptr_t LuaStepIntervalMsOverrideEnabled = REBASE(0x73ea340);
    const uintptr_t PhysicsSenderMaxBandwidthBps = REBASE(0x74274f8);
    const uintptr_t Register = REBASE(0x3e1c0d0);
    const uintptr_t RobloxLogCrash = REBASE(0x4aa5f60);
    const uintptr_t WebSocketServiceEnableClientCreation = REBASE(0x73dbb20);
    const uintptr_t WndProcessCheck = REBASE(0x714e0d8);
} // namespace Offsets
