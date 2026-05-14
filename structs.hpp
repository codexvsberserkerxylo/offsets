//NOT MINE bro

#define CommonHeader \
    uint8_t tt;        // 0x0 \
    uint8_t marked;    // 0x1 \
    uint8_t memcat;    // 0x2

typedef struct lua_State
{
    CommonHeader;                      // 0x0
    uint8_t status;                    // 0x3
    bool singlestep;                   // 0x4
    bool isactive;                     // 0x5
    uint8_t activememcat;              // 0x6
    uint8_t gap_0x7[0x1];              // 0x7

    TValue* top;                       // 0x8
    TValue* stack;                     // 0x10
    global_State* global;              // 0x18
    CallInfo* ci;                      // 0x20
    TValue* stack_last;                // 0x28
    TValue* base;                      // 0x30
    GCObject* gclist;                  // 0x38
    UpVal* openupval;                  // 0x40

    uint16_t nCcalls;                  // 0x48
    uint16_t baseCcalls;               // 0x4A
    int cachedslot;                    // 0x4C

    LuaTable* gt;                      // 0x50
    RBXExtraSpace* userdata;           // 0x58
    TString* namecall;                 // 0x60
    CallInfo* end_ci;                  // 0x68
    CallInfo* base_ci;                 // 0x70

    LSTATE_STACKSIZE_ENC<int> stacksize; // 0x78
    int size_ci;                       // 0x7C
} lua_State;



typedef struct global_State
{
    size_t GCthreshold;                        // 0x0
    size_t totalbytes;                         // 0x8
    lua_Alloc frealloc;                        // 0x10
    void* ud;                                  // 0x18

    GCObject* weak;                            // 0x20
    GCObject* grayagain;                       // 0x28
    GCObject* gray;                            // 0x30

    stringtable strt;                          // 0x38

    int gcgoal;                                // 0x48
    int gcstepsize;                            // 0x4C
    int gcstepmul;                             // 0x50

    uint8_t currentwhite;                      // 0x54
    uint8_t gcstate;                           // 0x55
    uint8_t gap_86[2];                         // 0x56

    UpVal uvhead;                              // 0x58

    struct lua_State* mainthread;              // 0x80
    struct lua_Page* sweepgcopage;             // 0x88

    struct lua_Page* freepages[40];            // 0x90
    struct lua_Page* allpages;                 // 0x1D0

    struct lua_Page* freegcopages[40];         // 0x1D8
    struct lua_Page* allgcopages;              // 0x318

    uint8_t gap_800[8];                        // 0x320

    TString* tmname[21];                       // 0x328
    TString* ttname[12];                       // 0x3D0

    uint8_t gap_1072[8];                       // 0x430

    struct LuaTable* mt[12];                   // 0x438

    uint8_t gap_1176[16];                      // 0x498

    TValue pseudotemp;                         // 0x4A8
    TValue registry;                           // 0x4B4

    int registryfree;                          // 0x4C0

    uint8_t gap_1220[4];                       // 0x4C4

    uint64_t ptrenckey[4];                     // 0x4C8
    uint64_t rngstate;                         // 0x4E8

    uint8_t gap_1264[8];                       // 0x4F0

    lua_Callbacks cb;                          // 0x4F8
    lua_ExecutionCallbacks ecb;                // 0x548

    alignas(16) uint8_t ecbdata[512];          // 0x558

    lua_UdataDirectAccessData udatadirect[130];// 0x2BA0

    uint8_t gap_before_memcat[2010];           // 0x3200

    size_t memcatbytes[256];                   // 0x3400

    uint8_t gap_15360[48];                     // 0x3C00

    TString* lightuserdataname[128];           // 0x3C30
    lua_Destructor udatagc[128];               // 0x4030

    uint8_t gap_17456[192];                    // 0x4430

    GCStats gcstats;                           // 0x44F0

    LuaTable* udatamt[128];                    // 0x45A8

#ifdef LUAI_GCMETRICS
    GCMetrics gcmetrics;
#endif
} global_State;



typedef struct lua_Callbacks
{
    void* userdata;                                            // 0x0
    void (*debugprotectederror)(lua_State* L);                 // 0x8
    void (*onallocate)(lua_State* L, size_t osize, size_t nsize); // 0x10
    void (*debugbreak)(lua_State* L, lua_Debug* ar);           // 0x18
    void (*userthread)(lua_State* LP, lua_State* L);           // 0x20
    int16_t(*useratom)(lua_State* L, const char* s, size_t l); // 0x28
    void (*interrupt)(lua_State* L, int gc);                   // 0x30
    void (*debugstep)(lua_State* L, lua_Debug* ar);            // 0x38
    void (*debuginterrupt)(lua_State* L, lua_Debug* ar);       // 0x40
    void (*panic)(lua_State* L, int errcode);                  // 0x48
} lua_Callbacks;



typedef struct CallInfo
{
    TValue* base;                    // 0x0
    TValue* func;                    // 0x8
    TValue* top;                     // 0x10
    const Instruction* savedpc;      // 0x18
    int nresults;                    // 0x20
    int flags;                       // 0x24
} CallInfo;



typedef struct stringtable
{
    int size;              // 0x0
    uint32_t nuse;         // 0x4
    TString** hash;        // 0x8
} stringtable;



typedef struct LuaTable
{
    CommonHeader;                    // 0x0

    uint8_t tmcache;                 // 0x3
    uint8_t readonly;                // 0x4
    uint8_t nodemask8;               // 0x5
    uint8_t safeenv;                 // 0x6
    uint8_t lsizenode;               // 0x7

    int sizearray;                   // 0x8

    union
    {
        int lastfree;                // 0xC
        int aboundary;               // 0xC
    };

    struct LuaTable* metatable;      // 0x10
    GCObject* gclist;                // 0x18
    LuaNode* node;                   // 0x20
    TValue* array;                   // 0x28
} LuaTable;



typedef struct Closure
{
    CommonHeader;                    // 0x0

    uint8_t isC;                     // 0x3
    uint8_t stacksize;               // 0x4
    uint8_t nupvalues;               // 0x5
    uint8_t preload;                 // 0x6

    uint8_t gap_0x7[0x1];            // 0x7

    struct LuaTable* env;            // 0x8
    GCObject* gclist;                // 0x10

    union
    {
        struct
        {
            TValue uprefs[1];        // 0x18
            Proto* p;                // 0x20
        } l;

        struct
        {
            lua_CFunction f;         // 0x18
            TValue upvals[1];        // 0x20
            CLOSURE_CONT_ENC<lua_Continuation> cont; // 0x28
            CLOSURE_DEBUGNAME_ENC<const char*> debugname; // 0x30
        } c;
    };
} Closure;



typedef struct Proto
{
    CommonHeader;                                // 0x0

    uint8_t maxstacksize;                        // 0x3
    uint8_t is_vararg;                           // 0x4
    uint8_t flags;                               // 0x5
    uint8_t nups;                                // 0x6
    uint8_t numparams;                           // 0x7

    PROTO_DEBUGNAME_ENC<TString*> debugname;     // 0x8
    PROTO_LINEINFO_ENC<uint8_t*> lineinfo;       // 0x10
    PROTO_TYPEINFO_ENC<uint8_t*> typeinfo;       // 0x18
    PROTO_SOURCE_ENC<TString*> source;           // 0x20

    GCObject* gclist;                            // 0x28

    PROTO_DEBUGINSN_ENC<uint8_t*> debuginsn;     // 0x30
    PROTO_UPVALUES_ENC<TString**> upvalues;      // 0x38
    PROTO_LOCVARS_ENC<struct LocVar*> locvars;   // 0x40

    struct Proto** p;                            // 0x48

    PROTO_USERDATA_ENC<void*> userdata;          // 0x50

    const Instruction* codeentry;                // 0x58
    TValue* k;                                   // 0x60
    Instruction* code;                           // 0x68

    PROTO_ABSLINEINFO_ENC<int*> abslineinfo;     // 0x70

    void* execdata;                              // 0x78
    uintptr_t exectarget;                        // 0x80

    int sizeupvalues;                            // 0x88
    int sizetypeinfo;                            // 0x8C
    int sizelineinfo;                            // 0x90
    int sizek;                                   // 0x94
    int sizecode;                                // 0x98
    int linegaplog2;                             // 0x9C
    int sizep;                                   // 0xA0
    int linedefined;                             // 0xA4
    int sizelocvars;                             // 0xA8
    int bytecodeid;                              // 0xAC
} Proto;



typedef struct TString
{
    CommonHeader;                                // 0x0

    uint8_t gap_0x3[0x1];                        // 0x3

    int16_t marker;                              // 0x4
    int16_t atom;                                // 0x6

    TString* next;                               // 0x8

    TSTRING_HASH_ENC<unsigned int> hash;         // 0x10

    unsigned int len;                            // 0x14

    char data[1];                                // 0x18
} TString;
