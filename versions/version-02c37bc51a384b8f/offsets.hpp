// dumped by nick (@.weound)
// date: 2026-10-05 20:51:20
// took 33.2s
// success rate: 85.4%

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
    inline constexpr const char* LiveChannel = "version-02c37bc51a384b8f";

    namespace Hyperion
    {
        const uintptr_t BitMap = HREBASE(0x13188);
        const uintptr_t ControlFlowGuard = HREBASE(0xabb930);

        inline constexpr uint8_t ByteShift = 15;
        inline constexpr uint8_t PageShift = 12;
        inline constexpr uint32_t PageSize = 0x1000;
        inline constexpr uint32_t PageMask = 0xfff;
        inline constexpr uint8_t BitMask = 7;

        // other
        static const uint64_t patcheb[] = {
            0x56f854, 0x59ae70, 0x7b2480, 0x800454, 0x9328a0, 
            0xa86950, 0xb5a520, 0x11147e0
        };
    } // namespace Hyperion

    namespace DataModel
    {
        const uintptr_t DataModelDeleterPointer = REBASE(0x4c3098b);
        inline constexpr uintptr_t GameLoaded = 0x5d0;
        inline constexpr uintptr_t JobId = 0x110;
        inline constexpr uintptr_t PlaceId = 0x188;
        inline constexpr uintptr_t ScriptContext = 0x440;
        inline constexpr uintptr_t Children = 0x70;
    } // namespace DataModel

    namespace FakeDataModel
    {
        const uintptr_t Pointer = REBASE(0x8b54980);
        inline constexpr uintptr_t ToReal = 0x1f8;
    } // namespace FakeDataModel

    namespace TaskScheduler
    {
        const uintptr_t RawScheduler = REBASE(0x7d576e0);
        const uintptr_t Pointer = REBASE(0x8aff2a0);
        inline constexpr uintptr_t MaxFPS = 0xb0;
        inline constexpr uintptr_t JobStart = 0xc8;
        inline constexpr uintptr_t JobEnd = 0xd0;
        inline constexpr uintptr_t JobName = 0x18;
        const uintptr_t TargetFps = REBASE(0x8aff350);
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
        inline constexpr uintptr_t identity = 0x30; // idek atp
        inline constexpr uintptr_t ToResume = 0x900;
        inline constexpr uintptr_t RequireBypass = 0xad0;
        const uintptr_t Resume = REBASE(0x42a7e60);
        const uintptr_t ResumeParallelWaitingScripts = REBASE(0x4317740);
        const uintptr_t TaskQueue = REBASE(0x4359cc0);
        const uintptr_t whjs_step = REBASE(0x42d5590);
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
        const uintptr_t IdentityPtr = REBASE(0x82d23d8);
        const uintptr_t KTable = REBASE(0x822c9c0);
        const uintptr_t GetTlsPointer = REBASE(0x1b50);
        const uintptr_t GetTlsPointer_wrapper = REBASE(0x7320);
        const uintptr_t Impersonator = REBASE(0x7df840);
        const uintptr_t rbxSpawn = REBASE(0x42af850);
        const uintptr_t capabilities = 0x30;
    } // namespace RobloxThread

    namespace Instance
    {
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        const uintptr_t HashLookup = REBASE(0x2a6f370);
        const uintptr_t GetModuleFromVMStateMap = REBASE(0x42b6720);
        inline constexpr uintptr_t getter = 0x18;
        inline constexpr uintptr_t get_set = 0x90;
        const uintptr_t GetValues = REBASE(0x4158490);
        const uintptr_t Push = REBASE(0x41e64e0);
        inline constexpr uintptr_t scriptable = 0x90;
        inline constexpr uintptr_t scriptableMask = 0x10;
        const uintptr_t SetParent = REBASE(0x1d768e0);
        inline constexpr uintptr_t ttype = 0x68;
        inline constexpr uintptr_t ttype_number = 0x30;
        const uintptr_t WaitForChild = REBASE(0x1586c50);
        const uintptr_t GetProperty = REBASE(0x1d68bb0);
        const uintptr_t GetPropertyData = REBASE(0x2a6f370);
        inline constexpr uintptr_t PropertyMap = 0x250; // 0x1d8
    } // namespace Instance

    namespace Raknet
    {
        const uintptr_t HandleConnectionState = REBASE(0x4796cb2);
        const uintptr_t ProcessNetworkPacket = REBASE(0x287e250);
        const uintptr_t Receive = REBASE(0x2893f90);
        const uintptr_t RecvFromLoop = REBASE(0x287edc0);
        const uintptr_t ReportNetworkError = REBASE(0x4784270);
        const uintptr_t RPOnOpenConnectionReply1 = REBASE(0x2880d90);
        const uintptr_t RPReceive = REBASE(0x2869014);
        const uintptr_t RPsetServerMachineAddress = REBASE(0x2886f30);
        const uintptr_t Send = REBASE(0x2871a80);
        const uintptr_t SendPacketsToSelf = REBASE(0x2867580);
        const uintptr_t UpdateNetworkLoop = REBASE(0x28637b0);
    } // namespace Raknet

    namespace Luau
    {
        const uintptr_t luaO_nilobject = REBASE(0x6507cd8);
        const uintptr_t luaH_dummynode = REBASE(0x6504798);
        const uintptr_t GetLuaStateForInstance = REBASE(0x41fe9b0);
        const uintptr_t call_binTM = REBASE(0x26607d0);
        const uintptr_t ClientOnRecieve = REBASE(0x4794cf0);
        const uintptr_t currfuncname = REBASE(0x2647210);
        const uintptr_t deletegco = REBASE(0x2666010);
        const uintptr_t f_luaopen = REBASE(0x26444f0);
        const uintptr_t freeobj = REBASE(0x2665a60);
        const uintptr_t getfunc = REBASE(0x269f130);
        const uintptr_t index2addr = REBASE(0x263f9d0);
        const uintptr_t lua_createtable = REBASE(0x1586030);
        const uintptr_t lua_error = REBASE(0x2642440);
        const uintptr_t lua_exception = REBASE(0x2651f20);
        const uintptr_t lua_pushfstringL = REBASE(0x2640db0);
        const uintptr_t lua_pushvfstring = REBASE(0x2640d40);
        const uintptr_t lua_setthreadfinalizer = REBASE(0x2641df0);
        const uintptr_t luaB_assert = REBASE(0x26a4fe0);
        const uintptr_t luaB_newproxy = REBASE(0x26a63cb);
        const uintptr_t luaB_next = REBASE(0x26a4530);
        const uintptr_t luaB_rawlen = REBASE(0x26a3880);
        const uintptr_t luaB_select = REBASE(0x26a5090);
        const uintptr_t luaB_setfenv = REBASE(0x269fa00);
        const uintptr_t luaB_setmetatable = REBASE(0x269ef10);
        const uintptr_t luaB_tonumber = REBASE(0x269dfb0);
        const uintptr_t luaC_step = REBASE(0x26670b0);
        const uintptr_t luaD_preparefinalize = REBASE(0x2653a40);
        const uintptr_t luaD_runfinalizers = REBASE(0x2653ae0);
        const uintptr_t luaD_throw = REBASE(0x26520b0);
        const uintptr_t luaG_aritherror = REBASE(0x267a600);
        const uintptr_t luaG_concaterror = REBASE(0x267a5b0);
        const uintptr_t luaG_forerrorL = REBASE(0x267a570);
        const uintptr_t luaG_indexerror = REBASE(0x267a720);
        const uintptr_t luaG_methoderror = REBASE(0x267a820);
        const uintptr_t luaG_missingmembererror = REBASE(0x267a7b0);
        const uintptr_t luaG_ordererror = REBASE(0x267a6a0);
        const uintptr_t luaG_readonlyerror = REBASE(0x267a860);
        const uintptr_t luaG_runerrorL = REBASE(0x267ae80);
        const uintptr_t luaG_typeerrorL = REBASE(0x267a530);
        const uintptr_t luaH_clone = REBASE(0x26758e0);
        const uintptr_t luai_num2str = REBASE(0x2680d40);
        const uintptr_t luaL_argerrorL = REBASE(0x2647290);
        const uintptr_t luaL_error = REBASE(0x2647ee0);
        const uintptr_t luaL_getmetafield = REBASE(0x2647290);
        const uintptr_t luaL_requiref = REBASE(0x264b500);
        const uintptr_t luaL_tolstring = REBASE(0x2650270);
        const uintptr_t luaL_typeerrorL = REBASE(0x2647310);
        const uintptr_t luaL_typename = REBASE(0x264e520);
        const uintptr_t luaM_free = REBASE(0x2680030);
        const uintptr_t luaM_freeblock = REBASE(0x267ff80);
        const uintptr_t luaM_toobig = REBASE(0x267ff50);
        const uintptr_t luaM_visitgco = REBASE(0x2680490);
        const uintptr_t luaO_pushfstring = REBASE(0x2679fe0);
        const uintptr_t luaR_defaultcreateobject = REBASE(0x26ad0c0);
        const uintptr_t luau_execute = REBASE(0x2681d50);
        const uintptr_t luau_execute_false = REBASE(0x2690210); // idk
        const uintptr_t luau_execute_true = REBASE(0x2682560); // idk
        const uintptr_t luau_load = REBASE(0x26b6430);
        const uintptr_t luaV_doarithimpl_TM_ADD = REBASE(0x2662aa0);
        const uintptr_t luaV_doarithimpl_TM_DIV = REBASE(0x26630e0);
        const uintptr_t luaV_doarithimpl_TM_IDIV = REBASE(0x2663360);
        const uintptr_t luaV_doarithimpl_TM_MOD = REBASE(0x2663660);
        const uintptr_t luaV_doarithimpl_TM_MUL = REBASE(0x2662e60);
        const uintptr_t luaV_doarithimpl_TM_POW = REBASE(0x2663810);
        const uintptr_t luaV_doarithimpl_TM_SUB = REBASE(0x2662c80);
        const uintptr_t luaV_doarithimpl_TM_UNM = REBASE(0x26639c0);
        const uintptr_t luaV_gettable = REBASE(0x265b170);
        const uintptr_t luaV_prepareFORN = REBASE(0x2662140);
        const uintptr_t luaV_settable = REBASE(0x265ce90);
        const uintptr_t luaV_tostring = REBASE(0x2656d40);
        const uintptr_t luaVM_load = REBASE(0x41f51a0);
        const uintptr_t print = REBASE(0x4278591);
        const uintptr_t pushfstring_nocheck = REBASE(0x2679fe0);
        const uintptr_t raiseerror = REBASE(0x49a60b0);
        const uintptr_t table_clone = REBASE(0x5796990);
        const uintptr_t tag_error = REBASE(0x2647400);
    } // namespace Luau

    namespace Task
    {
        const uintptr_t cancel = REBASE(0x436a670);
        const uintptr_t defer = REBASE(0x4369920);
        const uintptr_t desynchronize = REBASE(0x4368ce0);
        const uintptr_t spawn = REBASE(0x4369de0);
        const uintptr_t synchronize = REBASE(0x4368870);
        const uintptr_t wait = REBASE(0x436a470);
    } // namespace Task

    namespace Signals
    {
        const uintptr_t FireAllClients = REBASE(0x34d74b0);
        const uintptr_t FireMouseClick = REBASE(0x3c44f80);
        const uintptr_t FireRightMouseClick = REBASE(0x3c45120);
        const uintptr_t FireMouseHoverEnter = REBASE(0x3c46570);
        const uintptr_t FireMouseHoverLeave = REBASE(0x3c46710);
        const uintptr_t FireProximityPrompt = REBASE(0x3192070);
        const uintptr_t FireServer = REBASE(0x34d70c0);
        const uintptr_t FireTouchInterest = REBASE(0x15a6920);
        const uintptr_t InvokeClient = REBASE(0x359c8e0);
        const uintptr_t InvokeServer = REBASE(0x35a07a0);
        const uintptr_t IsLegalSendEvent = REBASE(0x48dca10);
        const uintptr_t TouchInterest = REBASE(0xbf1dc0);
    } // namespace Signals

    namespace coroutine
    {
        const uintptr_t close = REBASE(0x57b6330);
        const uintptr_t create = REBASE(0x57b59b0);
        const uintptr_t running = REBASE(0x57b6230);
        const uintptr_t status = REBASE(0x57b3f30);
        const uintptr_t wrap = REBASE(0x57b5f60);
        const uintptr_t yield = REBASE(0x57b61d0);
        const uintptr_t isyieldable = REBASE(0x57b62a0);
    } // namespace coroutine

    namespace bit32
    {
        const uintptr_t bnot = REBASE(0x57ba2c0);
        const uintptr_t band = REBASE(0x57ba010);
        const uintptr_t bor = REBASE(0x57ba0c0);
        const uintptr_t bxor = REBASE(0x57ba1c0);
        const uintptr_t test = REBASE(0x57ba040);
        const uintptr_t lrotate = REBASE(0x57ba790);
        const uintptr_t rrotate = REBASE(0x57ba810);
        const uintptr_t lshift = REBASE(0x57ba350);
        const uintptr_t arshift = REBASE(0x57ba5a0);
        const uintptr_t rshift = REBASE(0x57ba470);
        const uintptr_t bxor = REBASE(0x57ba1c0);
        const uintptr_t btest = REBASE(0x57ba040);
        const uintptr_t countlz = REBASE(0x57bab60);
        const uintptr_t countrz = REBASE(0x57bacb0);
        const uintptr_t byteswap = REBASE(0x57996c0);
        const uintptr_t band = REBASE(0x57ba010);
        const uintptr_t bor = REBASE(0x57ba0c0);
        const uintptr_t bnot = REBASE(0x57ba2c0);
    } // namespace bit32

    namespace table
    {
        const uintptr_t create = REBASE(0x5795a60);
        const uintptr_t find = REBASE(0x5796250);
        const uintptr_t clear = REBASE(0x57966f0);
        const uintptr_t freeze = REBASE(0x5796740);
        const uintptr_t clone = REBASE(0x5796990);
        const uintptr_t unpack = REBASE(0x5794250);
        const uintptr_t pack = REBASE(0x5793a10);
        const uintptr_t insert = REBASE(0x5790c80);
        const uintptr_t remove = REBASE(0x5790e80);
        const uintptr_t concat = REBASE(0x57936f0);
        const uintptr_t sort = REBASE(0x57958e0);
        const uintptr_t foreach = REBASE(0x578e730);
        const uintptr_t foreachi = REBASE(0x578d9c0);
    } // namespace table

    namespace integer
    {
        const uintptr_t abs = REBASE(0x57aa470);
        const uintptr_t ceil = REBASE(0x57aaf20);
        const uintptr_t floor = REBASE(0x57ab010);
        const uintptr_t sqrt = REBASE(0x57ab390);
        const uintptr_t max = REBASE(0x57abf50);
        const uintptr_t min = REBASE(0x57abde0);
        const uintptr_t clamp = REBASE(0x57acc00);
        const uintptr_t pow = REBASE(0x57ab490);
        const uintptr_t sign = REBASE(0x57ace30);
        const uintptr_t byteswap = REBASE(0x57996c0);
    } // namespace integer

    namespace utf8
    {
        const uintptr_t char = REBASE(0x579a6e0);
        const uintptr_t codepoint = REBASE(0x579a340);
        const uintptr_t codes = REBASE(0x579b3e0);
        const uintptr_t graphemes = REBASE(0x4363a30);
        const uintptr_t len = REBASE(0x579a060);
        const uintptr_t offset = REBASE(0x579ae90);
        const uintptr_t nfdnormalize = REBASE(0x43651d0);
        const uintptr_t nfcnormalize = REBASE(0x4364740);
        const uintptr_t charpattern = REBASE(0x71c9f58);
    } // namespace utf8

    namespace buffer
    {
        const uintptr_t create = REBASE(0x57af450);
        const uintptr_t fromstring = REBASE(0x57af500);
        const uintptr_t tostring = REBASE(0x57af5d0);
        const uintptr_t len = REBASE(0x57b0710);
        const uintptr_t copy = REBASE(0x57b07c0);
        const uintptr_t readi8 = REBASE(0x57b1280);
        const uintptr_t readu8 = REBASE(0x57b13e0);
        const uintptr_t readi16 = REBASE(0x57b1540);
        const uintptr_t readu16 = REBASE(0x57b16a0);
        const uintptr_t readi32 = REBASE(0x57b1800);
        const uintptr_t readu32 = REBASE(0x57b1960);
        const uintptr_t readf32 = REBASE(0x57b1ac0);
        const uintptr_t readf64 = REBASE(0x57b1c30);
        const uintptr_t writei8 = REBASE(0x57b1d90);
        const uintptr_t writeu8 = REBASE(0x57b1d90);
        const uintptr_t writei16 = REBASE(0x57b1f10);
        const uintptr_t writeu16 = REBASE(0x57b1f10);
        const uintptr_t writei32 = REBASE(0x57b2090);
        const uintptr_t writeu32 = REBASE(0x57b2090);
        const uintptr_t writef32 = REBASE(0x57b2210);
        const uintptr_t writef64 = REBASE(0x57b23a0);
        const uintptr_t readbits = REBASE(0x57b0d00);
        const uintptr_t writebits = REBASE(0x57b0f40);
    } // namespace buffer

    namespace os
    {
        const uintptr_t clock = REBASE(0x579c2b0);
        const uintptr_t date = REBASE(0x579d820);
        const uintptr_t difftime = REBASE(0x579e230);
        const uintptr_t time = REBASE(0x579df30);
    } // namespace os

    namespace string
    {
        const uintptr_t split = REBASE(0x57a3d70);
        const uintptr_t byte = REBASE(0x579f8d0);
        const uintptr_t char = REBASE(0x579fb60);
        const uintptr_t find = REBASE(0x57a1770);
        const uintptr_t format = REBASE(0x57a3740);
        const uintptr_t gmatch = REBASE(0x57a1b60);
        const uintptr_t gsub = REBASE(0x57a3130);
        const uintptr_t len = REBASE(0x579e3e0);
        const uintptr_t lower = REBASE(0x579f040);
        const uintptr_t match = REBASE(0x57a1780);
        const uintptr_t rep = REBASE(0x579f2e0);
        const uintptr_t reverse = REBASE(0x579eef0);
        const uintptr_t sub = REBASE(0x579e490);
        const uintptr_t upper = REBASE(0x579f190);
    } // namespace string

    namespace vector
    {
        const uintptr_t create = REBASE(0x57a8190);
        const uintptr_t magnitude = REBASE(0x57a8340);
        const uintptr_t normalize = REBASE(0x57a8430);
        const uintptr_t cross = REBASE(0x57a8510);
        const uintptr_t dot = REBASE(0x57a85e0);
        const uintptr_t angle = REBASE(0x57a86e0);
        const uintptr_t floor = REBASE(0x57a8970);
        const uintptr_t ceil = REBASE(0x57a8a10);
        const uintptr_t abs = REBASE(0x57a8ab0);
        const uintptr_t max = REBASE(0x57a8e70);
        const uintptr_t min = REBASE(0x57a8d50);
        const uintptr_t clamp = REBASE(0x57a8be0);
    } // namespace vector

    namespace FFlags // verified
    {
        const uintptr_t GetFFlag = REBASE(0x49bcd90);
        const uintptr_t SetFFlag = REBASE(0x49bc210);
        const uintptr_t FFlagPointer = REBASE(0x8a1cbd0);
        const uintptr_t BooleanType = REBASE(0x6df43e0);
        const uintptr_t IntegerType = REBASE(0x6df4728);
        const uintptr_t BooleanValueType = REBASE(0x6df4958);
        const uintptr_t IntegerValueType = REBASE(0x6df4610);
    } // namespace FFlags

    // other
    const uintptr_t CastArgs = REBASE(0x415a750);
    const uintptr_t ConnectionDisconnect = REBASE(0x41c0290);
    const uintptr_t EnableLoadModule = REBASE(0x8635a08);
    const uintptr_t GetCapabilities = REBASE(0x1d6a7c0);
    const uintptr_t LockViolationInstanceCrash = REBASE(0x713bcf8);
    const uintptr_t LockViolationScriptCrash = REBASE(0x70cb248);
    const uintptr_t LuaStepIntervalMsOverrideEnabled = REBASE(0x70ce600);
    const uintptr_t PhysicsSenderMaxBandwidthBps = REBASE(0x7109620);
    const uintptr_t Register = REBASE(0x3dbf980);
    const uintptr_t RobloxLogCrash = REBASE(0x49a3f30);
    const uintptr_t WebSocketServiceEnableClientCreation = REBASE(0x70c06d8);
    const uintptr_t WndProcessCheck = REBASE(0x6e3b6b8);
    const uintptr_t OpcodeLookupTable = REBASE(0x6f67bf0);
} // namespace Offsets
