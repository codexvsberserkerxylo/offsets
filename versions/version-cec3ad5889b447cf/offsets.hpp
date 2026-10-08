// dumped by nick (@.weound)
// date: 2026-10-08 16:26:07
// took 30.3s
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
    inline constexpr const char* LiveChannel = "version-cec3ad5889b447cf";

    namespace Hyperion
    {
        const uintptr_t BitMap = HREBASE(0x4a5b8);
        const uintptr_t ControlFlowGuard = HREBASE(0x61c9e0);

        inline constexpr uint8_t ByteShift = 15;
        inline constexpr uint8_t PageShift = 12;
        inline constexpr uint32_t PageSize = 0x1000;
        inline constexpr uint32_t PageMask = 0xfff;
        inline constexpr uint8_t BitMask = 7;

        // other
        static const uint64_t patcheb[] = {
            0x2dfcd0, 0x2f3c04, 0xd86a8c, 0xdd15ec, 0xe453a4, 
            0xf6e8fe, 0x1527d60, 0x157e1b0
        };
    } // namespace Hyperion

    namespace DataModel
    {
        const uintptr_t DataModelDeleterPointer = REBASE(0x4bfffab);
        inline constexpr uintptr_t GameLoaded = 0x5d0;
        inline constexpr uintptr_t JobId = 0x110;
        inline constexpr uintptr_t PlaceId = 0x188;
        inline constexpr uintptr_t ScriptContext = 0x440;
        inline constexpr uintptr_t Children = 0x70;
    } // namespace DataModel

    namespace FakeDataModel
    {
        const uintptr_t Pointer = REBASE(0x8bcfd50);
        inline constexpr uintptr_t ToReal = 0x1f8;
    } // namespace FakeDataModel

    namespace TaskScheduler
    {
        const uintptr_t RawScheduler = REBASE(0x7d996e0);
        const uintptr_t Pointer = REBASE(0x8b79128);
        inline constexpr uintptr_t MaxFPS = 0xb0;
        inline constexpr uintptr_t JobStart = 0xc8;
        inline constexpr uintptr_t JobEnd = 0xd0;
        inline constexpr uintptr_t JobName = 0x18;
        const uintptr_t TargetFps = REBASE(0x8b791d8);
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
        inline constexpr uintptr_t RequireBypass = 0x975;
        inline constexpr uintptr_t ToResume = 0x8f0;
        const uintptr_t Resume = REBASE(0x423c6f0);
        const uintptr_t ResumeParallelWaitingScripts = REBASE(0x42b3400);
        const uintptr_t TaskQueue = REBASE(0x42f5710);
        inline constexpr uintptr_t userdata = 0x60; // ?
        const uintptr_t whjs_step = REBASE(0x4270f30);
    } // namespace ScriptContext

    namespace BasePart
    {
        inline constexpr uintptr_t Overlap = 0x1f8;
        inline constexpr uintptr_t Primitive = 0x178;
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
        const uintptr_t IdentityPtr = REBASE(0x835ad38);
        const uintptr_t KTable = REBASE(0x827b210);
        const uintptr_t GetIdentityStruct = REBASE(0x1ca2240);
        const uintptr_t GetTlsPointer = REBASE(0x1b50);
        const uintptr_t GetTlsPointer_wrapper = REBASE(0x6bb0);
        const uintptr_t Impersonator = REBASE(0x6f5540);
        const uintptr_t rbxSpawn = REBASE(0x4244580);
        const uintptr_t Capabilities = 0x30; // identity struct
    } // namespace RobloxThread

    namespace Instance
    {
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        const uintptr_t GetModuleFromVMStateMap = REBASE(0x424b410);
        const uintptr_t HashLookup = REBASE(0x29b8010);
        const uintptr_t CastArgs = REBASE(0x40ed3f0);
        inline constexpr uintptr_t getter = 0x18;
        const uintptr_t GetValues = REBASE(0x40eb160);
        const uintptr_t SetParent = REBASE(0x1caf880);
        inline constexpr uintptr_t ttype_number = 0x30;
        const uintptr_t WaitForChild = REBASE(0x14bb4a0);
        inline constexpr uintptr_t PropertyMap = 0x250;
        const uintptr_t Push = REBASE(0x417a040);
        const uintptr_t GetProperty = REBASE(0x1ca05a0);
    } // namespace Instance

    namespace Raknet
    {
        const uintptr_t HandleConnectionState = REBASE(0x4762c92);
        const uintptr_t ProcessNetworkPacket = REBASE(0x27c5640);
        const uintptr_t Receive = REBASE(0x27daee0);
        const uintptr_t RecvFromLoop = REBASE(0x27c61b0);
        const uintptr_t ReportNetworkError = REBASE(0x4750120);
        const uintptr_t RPOnOpenConnectionReply1 = REBASE(0x27c8300);
        const uintptr_t RPReceive = REBASE(0x27b0a64);
        const uintptr_t RPsetServerMachineAddress = REBASE(0x27ce350);
        const uintptr_t Send = REBASE(0x27b9440);
        const uintptr_t SendPacketsToSelf = REBASE(0x27af010);
        const uintptr_t UpdateNetworkLoop = REBASE(0x27ab360);
    } // namespace Raknet

    namespace Luau
    {
        const uintptr_t luaO_nilobject = REBASE(0x6504708);
        const uintptr_t luaH_dummynode = REBASE(0x6500e48);
        const uintptr_t GetLuaStateForInstance = REBASE(0x41921c0);
        const uintptr_t call_binTM = REBASE(0x25a9b60);
        const uintptr_t ClientOnRecieve = REBASE(0x4760d40);
        const uintptr_t currfuncname = REBASE(0x2590520);
        const uintptr_t deletegco = REBASE(0x25af350);
        const uintptr_t f_luaopen = REBASE(0x258d7f0);
        const uintptr_t freeobj = REBASE(0x25aed80);
        const uintptr_t getfunc = REBASE(0x25e85a0);
        const uintptr_t index2addr = REBASE(0x2587880);
        const uintptr_t lua_createtable = REBASE(0x14ba8c0);
        const uintptr_t lua_error = REBASE(0x258b520);
        const uintptr_t lua_exception = REBASE(0x259b2e0);
        const uintptr_t lua_pushfstringL = REBASE(0x2588c50);
        const uintptr_t lua_pushvfstring = REBASE(0x2588be0);
        const uintptr_t lua_resume = REBASE(0x259ff50);
        const uintptr_t lua_setthreadfinalizer = REBASE(0x258aed0);
        const uintptr_t luaB_assert = REBASE(0x25ee450);
        const uintptr_t luaB_newproxy = REBASE(0x25ef815);
        const uintptr_t luaB_next = REBASE(0x25ed9a0);
        const uintptr_t luaB_rawlen = REBASE(0x25eccf0);
        const uintptr_t luaB_select = REBASE(0x25ee500);
        const uintptr_t luaB_setfenv = REBASE(0x25e8e60);
        const uintptr_t luaB_setmetatable = REBASE(0x25e8380);
        const uintptr_t luaB_tonumber = REBASE(0x25e7420);
        const uintptr_t luaC_step = REBASE(0x25b0430);
        const uintptr_t luaD_preparefinalize = REBASE(0x259ce00);
        const uintptr_t luaD_runfinalizers = REBASE(0x259ce90);
        const uintptr_t luaD_throw = REBASE(0x259b470);
        const uintptr_t luaF_freeproto = REBASE(0x25c5110);
        const uintptr_t luaG_aritherror = REBASE(0x25c3a30);
        const uintptr_t luaG_concaterror = REBASE(0x25c39e0);
        const uintptr_t luaG_forerrorL = REBASE(0x25c39a0);
        const uintptr_t luaG_indexerror = REBASE(0x25c3b50);
        const uintptr_t luaG_methoderror = REBASE(0x25c3c50);
        const uintptr_t luaG_missingmembererror = REBASE(0x25c3be0);
        const uintptr_t luaG_ordererror = REBASE(0x25c3ad0);
        const uintptr_t luaG_readonlyerror = REBASE(0x25c3c90);
        const uintptr_t luaG_runerrorL = REBASE(0x25c42c0);
        const uintptr_t luaG_typeerrorL = REBASE(0x25c3960);
        const uintptr_t luaH_clone = REBASE(0x25bed00);
        const uintptr_t luai_num2str = REBASE(0x25ca0d0);
        const uintptr_t luaL_argerrorL = REBASE(0x25905a0);
        const uintptr_t luaL_error = REBASE(0x2591240);
        const uintptr_t luaL_getmetafield = REBASE(0x25905a0);
        const uintptr_t luaL_requiref = REBASE(0x2594880);
        const uintptr_t luaL_tolstring = REBASE(0x2599630);
        const uintptr_t luaL_typeerrorL = REBASE(0x2590620);
        const uintptr_t luaL_typename = REBASE(0x25978a0);
        const uintptr_t luaM_free = REBASE(0x25c93c0);
        const uintptr_t luaM_freeblock = REBASE(0x25c9310);
        const uintptr_t luaM_freegco = REBASE(0x25c9470);
        const uintptr_t luaM_toobig = REBASE(0x25c92e0);
        const uintptr_t luaM_visitgco = REBASE(0x25c9820);
        const uintptr_t luaO_pushfstring = REBASE(0x25c3410);
        const uintptr_t luaR_defaultcreateobject = REBASE(0x25f6650);
        const uintptr_t luau_execute = REBASE(0x25cb0d0);
        const uintptr_t luau_execute_false = REBASE(0x25d96c0);
        const uintptr_t luau_execute_true = REBASE(0x25cb8d0);
        const uintptr_t luau_load = REBASE(0x25ffdd0);
        const uintptr_t luaV_doarithimpl_TM_ADD = REBASE(0x25abe00);
        const uintptr_t luaV_doarithimpl_TM_DIV = REBASE(0x25ac440);
        const uintptr_t luaV_doarithimpl_TM_IDIV = REBASE(0x25ac6c0);
        const uintptr_t luaV_doarithimpl_TM_MOD = REBASE(0x25ac9c0);
        const uintptr_t luaV_doarithimpl_TM_MUL = REBASE(0x25ac1c0);
        const uintptr_t luaV_doarithimpl_TM_POW = REBASE(0x25acb70);
        const uintptr_t luaV_doarithimpl_TM_SUB = REBASE(0x25abfe0);
        const uintptr_t luaV_doarithimpl_TM_UNM = REBASE(0x25acd20);
        const uintptr_t luaV_gettable = REBASE(0x25a44e0);
        const uintptr_t luaV_prepareFORN = REBASE(0x25ab4b0);
        const uintptr_t luaV_settable = REBASE(0x25a6200);
        const uintptr_t luaV_tostring = REBASE(0x25a0130);
        const uintptr_t luaVM_load = REBASE(0x4188af0);
        const uintptr_t print = REBASE(0x1c65a30);
        const uintptr_t pushfstring_nocheck = REBASE(0x25c3410);
        const uintptr_t raiseerror = REBASE(0x4976d00);
        const uintptr_t table_clone = REBASE(0x576a530);
        const uintptr_t tag_error = REBASE(0x2590710);
    } // namespace Luau

    namespace Task
    {
        const uintptr_t cancel = REBASE(0x4306140);
        const uintptr_t defer = REBASE(0x4305390);
        const uintptr_t desynchronize = REBASE(0x4304750);
        const uintptr_t spawn = REBASE(0x4305880);
        const uintptr_t synchronize = REBASE(0x43042e0);
        const uintptr_t wait = REBASE(0x4305f30);
    } // namespace Task

    namespace Signals
    {
        const uintptr_t FireAllClients = REBASE(0x3449ad0);
        const uintptr_t FireMouseClick = REBASE(0x3bc8c60);
        const uintptr_t FireMouseHoverEnter = REBASE(0x3bca250);
        const uintptr_t FireMouseHoverLeave = REBASE(0x3bca3f0);
        const uintptr_t FireProximityPrompt = REBASE(0x30e9d90);
        const uintptr_t FireServer = REBASE(0x34496e0);
        const uintptr_t FireTouchInterest = REBASE(0xa0a390);
        const uintptr_t InvokeClient = REBASE(0x351d6d0);
        const uintptr_t InvokeServer = REBASE(0x35215e0);
        const uintptr_t IsLegalSendEvent = REBASE(0x48a6e40);
        const uintptr_t TouchInterest = REBASE(0xb0f130);
    } // namespace Signals

    namespace coroutine
    {
        const uintptr_t close = REBASE(0x578bbe0);
        const uintptr_t create = REBASE(0x578b250);
        const uintptr_t running = REBASE(0x578bae0);
        const uintptr_t status = REBASE(0x57897d0);
        const uintptr_t wrap = REBASE(0x578b810);
        const uintptr_t yield = REBASE(0x578ba80);
        const uintptr_t isyieldable = REBASE(0x578bb50);
    } // namespace coroutine

    namespace bit32
    {
        const uintptr_t bnot = REBASE(0x578fc50);
        const uintptr_t band = REBASE(0x578f9a0);
        const uintptr_t bor = REBASE(0x578fa50);
        const uintptr_t bxor = REBASE(0x578fb50);
        const uintptr_t test = REBASE(0x578f9d0);
        const uintptr_t lrotate = REBASE(0x5790120);
        const uintptr_t rrotate = REBASE(0x57901a0);
        const uintptr_t lshift = REBASE(0x578fce0);
        const uintptr_t arshift = REBASE(0x578ff30);
        const uintptr_t rshift = REBASE(0x578fe00);
        const uintptr_t bxor = REBASE(0x578fb50);
        const uintptr_t btest = REBASE(0x578f9d0);
        const uintptr_t countlz = REBASE(0x57904f0);
        const uintptr_t countrz = REBASE(0x5790640);
        const uintptr_t byteswap = REBASE(0x576d270);
        const uintptr_t band = REBASE(0x578f9a0);
        const uintptr_t bor = REBASE(0x578fa50);
        const uintptr_t bnot = REBASE(0x578fc50);
    } // namespace bit32

    namespace table
    {
        const uintptr_t create = REBASE(0x5769610);
        const uintptr_t find = REBASE(0x5769df0);
        const uintptr_t clear = REBASE(0x576a290);
        const uintptr_t freeze = REBASE(0x576a2e0);
        const uintptr_t clone = REBASE(0x576a530);
        const uintptr_t unpack = REBASE(0x5767e10);
        const uintptr_t pack = REBASE(0x57675b0);
        const uintptr_t insert = REBASE(0x5764810);
        const uintptr_t remove = REBASE(0x5764a10);
        const uintptr_t concat = REBASE(0x5767290);
        const uintptr_t sort = REBASE(0x5769490);
        const uintptr_t foreach = REBASE(0x57622e0);
        const uintptr_t foreachi = REBASE(0x5761580);
    } // namespace table

    namespace integer
    {
        const uintptr_t abs = REBASE(0x577fcd0);
        const uintptr_t ceil = REBASE(0x5780780);
        const uintptr_t floor = REBASE(0x5780870);
        const uintptr_t sqrt = REBASE(0x5780bf0);
        const uintptr_t max = REBASE(0x57817a0);
        const uintptr_t min = REBASE(0x5781640);
        const uintptr_t clamp = REBASE(0x5782440);
        const uintptr_t pow = REBASE(0x5780cf0);
        const uintptr_t sign = REBASE(0x5782670);
        const uintptr_t byteswap = REBASE(0x576d270);
    } // namespace integer

    namespace utf8
    {
        const uintptr_t char = REBASE(0x576e2a0);
        const uintptr_t codepoint = REBASE(0x576df00);
        const uintptr_t codes = REBASE(0x576ef80);
        const uintptr_t graphemes = REBASE(0x42ff4b0);
        const uintptr_t len = REBASE(0x576dc20);
        const uintptr_t offset = REBASE(0x576ea30);
        const uintptr_t nfdnormalize = REBASE(0x4300c30);
        const uintptr_t nfcnormalize = REBASE(0x43001b0);
        const uintptr_t charpattern = REBASE(0x71e59f8);
    } // namespace utf8

    namespace buffer
    {
        const uintptr_t create = REBASE(0x5784d00);
        const uintptr_t fromstring = REBASE(0x5784db0);
        const uintptr_t tostring = REBASE(0x5784e80);
        const uintptr_t len = REBASE(0x5785fd0);
        const uintptr_t copy = REBASE(0x5786080);
        const uintptr_t readi8 = REBASE(0x5786b40);
        const uintptr_t readu8 = REBASE(0x5786ca0);
        const uintptr_t readi16 = REBASE(0x5786e00);
        const uintptr_t readu16 = REBASE(0x5786f60);
        const uintptr_t readi32 = REBASE(0x57870c0);
        const uintptr_t readu32 = REBASE(0x5787220);
        const uintptr_t readf32 = REBASE(0x5787380);
        const uintptr_t readf64 = REBASE(0x57874f0);
        const uintptr_t writei8 = REBASE(0x5787650);
        const uintptr_t writeu8 = REBASE(0x5787650);
        const uintptr_t writei16 = REBASE(0x57877d0);
        const uintptr_t writeu16 = REBASE(0x57877d0);
        const uintptr_t writei32 = REBASE(0x5787950);
        const uintptr_t writeu32 = REBASE(0x5787950);
        const uintptr_t writef32 = REBASE(0x5787ad0);
        const uintptr_t writef64 = REBASE(0x5787c60);
        const uintptr_t readbits = REBASE(0x57865c0);
        const uintptr_t writebits = REBASE(0x5786800);
    } // namespace buffer

    namespace os
    {
        const uintptr_t clock = REBASE(0x576fe70);
        const uintptr_t date = REBASE(0x57713f0);
        const uintptr_t difftime = REBASE(0x5771e00);
        const uintptr_t time = REBASE(0x5771b00);
    } // namespace os

    namespace string
    {
        const uintptr_t split = REBASE(0x5777990);
        const uintptr_t byte = REBASE(0x57734d0);
        const uintptr_t char = REBASE(0x5773760);
        const uintptr_t find = REBASE(0x5775390);
        const uintptr_t format = REBASE(0x5777360);
        const uintptr_t gmatch = REBASE(0x5775780);
        const uintptr_t gsub = REBASE(0x5776d50);
        const uintptr_t len = REBASE(0x5771fb0);
        const uintptr_t lower = REBASE(0x5772c30);
        const uintptr_t match = REBASE(0x57753a0);
        const uintptr_t rep = REBASE(0x5772ed0);
        const uintptr_t reverse = REBASE(0x5772ae0);
        const uintptr_t sub = REBASE(0x5772060);
        const uintptr_t upper = REBASE(0x5772d80);
    } // namespace string

    namespace vector
    {
        const uintptr_t create = REBASE(0x577d990);
        const uintptr_t magnitude = REBASE(0x577db40);
        const uintptr_t normalize = REBASE(0x577dc30);
        const uintptr_t cross = REBASE(0x577dd10);
        const uintptr_t dot = REBASE(0x577dde0);
        const uintptr_t angle = REBASE(0x577dee0);
        const uintptr_t floor = REBASE(0x577e170);
        const uintptr_t ceil = REBASE(0x577e210);
        const uintptr_t abs = REBASE(0x577e2b0);
        const uintptr_t max = REBASE(0x577e670);
        const uintptr_t min = REBASE(0x577e550);
        const uintptr_t clamp = REBASE(0x577e3e0);
    } // namespace vector

    namespace FFlags
    {
        const uintptr_t GetFFlag = REBASE(0x498d9b0);
        const uintptr_t FFlagPointer = REBASE(0x8a927f8);
        const uintptr_t BooleanType = REBASE(0x6e09978);
        const uintptr_t IntegerType = REBASE(0x6e09400);
        const uintptr_t BooleanValueType = REBASE(0x6e09630);
        const uintptr_t IntegerValueType = REBASE(0x6e09518);
    } // namespace FFlags

    // other
    const uintptr_t ConnectionDisconnect = REBASE(0x41547c0);
    const uintptr_t EnableLoadModule = REBASE(0x869dbc8);
    const uintptr_t GetCapabilities = REBASE(0x1ca23e0);
    const uintptr_t LockViolationInstanceCrash = REBASE(0x7157928);
    const uintptr_t LockViolationScriptCrash = REBASE(0x70e4e88);
    const uintptr_t LuaStepIntervalMsOverrideEnabled = REBASE(0x70e82b8);
    const uintptr_t PhysicsSenderMaxBandwidthBps = REBASE(0x711db90);
    const uintptr_t Register = REBASE(0x3d5fce0);
    const uintptr_t RobloxLogCrash = REBASE(0x4974b80);
    const uintptr_t WebSocketServiceEnableClientCreation = REBASE(0x70d9fe0);
    const uintptr_t WndProcessCheck = REBASE(0x6e507a8);
    const uintptr_t OpcodeLookupTable = REBASE(0x6f7fc40);
} // namespace Offsets
