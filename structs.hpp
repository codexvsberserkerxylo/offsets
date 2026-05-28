// NOT MINE
#define CommonHeader uint8_t marked; uint8_t memcat; uint8_t tt

typedef struct lua_Page
{
    lua_Page* listprev; // 0x0
    lua_Page* listnext; // 0x8

    lua_Page* prev; // 0x10
    lua_Page* next; // 0x18

    int pageSize;  // 0x20
    int blockSize; // 0x24

    void* freeList; // 0x28
    int freeNext;   // 0x30
    int busyBlocks; // 0x34

    char padding[sizeof(void*) == 8 ? 8 : 12]; // 0x38

    char data[1]; // 0x40
} lua_Page;

typedef struct CallInfo
{
    StkId base;                // 0x0
    StkId func;                // 0x8
    StkId top;                 // 0x10
    const Instruction* savedpc; // 0x18

    int nresults;       // 0x20
    unsigned int flags; // 0x24
} CallInfo;

struct lua_Callbacks
{
    void* userdata; // 0x0

    void (*interrupt)(lua_State* L, int gc); // 0x8
    void (*panic)(lua_State* L, int errcode); // 0x10

    void (*userthread)(lua_State* LP, lua_State* L); // 0x18
    int16_t (*useratom)(lua_State* L, const char* s, size_t l); // 0x20

    void (*debugbreak)(lua_State* L, lua_Debug* ar); // 0x28
    void (*debugstep)(lua_State* L, lua_Debug* ar); // 0x30
    void (*debuginterrupt)(lua_State* L, lua_Debug* ar); // 0x38

    void (*debugprotectederror)(lua_State* L); // 0x40
    void (*onallocate)(lua_State* L, size_t osize, size_t nsize); // 0x48
};

typedef struct stringtable
{
    TString** hash; // 0x0
    uint32_t nuse;  // 0x8
    int size;       // 0xC
} stringtable;

typedef struct LuaTable
{
    CommonHeader; // 0x0

    uint8_t tmcache;   // 0x3
    uint8_t readonly;  // 0x4
    uint8_t safeenv;   // 0x5
    uint8_t lsizenode; // 0x6
    uint8_t nodemask8; // 0x7

    int sizearray; // 0x8
    union
    {
        int lastfree;  // 0xC
        int aboundary; // 0xC
    };

    struct LuaTable* metatable; // 0x10
    TValue* array;              // 0x18
    LuaNode* node;              // 0x20
    GCObject* gclist;           // 0x28
} LuaTable;

typedef struct TString
{
    CommonHeader; // 0x0

    uint8_t padding0[3]; // 0x3

    int16_t atom; // 0x6

    TString* next; // 0x8

    TSTRING_HASH_ENC<unsigned int> hash; // 0x10
    unsigned int len;                    // 0x14

    char data[1]; // 0x18
} TString;

typedef struct Proto
{
    CommonHeader; // 0x0

    uint8_t nups;         // 0x3
    uint8_t numparams;    // 0x4
    uint8_t is_vararg;    // 0x5
    uint8_t maxstacksize; // 0x6
    uint8_t flags;        // 0x7

    TValue* k;                                  // 0x8 
    Instruction* code;                          // 0x10
    struct Proto** p;                           // 0x18
    const Instruction* codeentry;               // 0x20
    void* execdata;                             // 0x28
    uintptr_t exectarget;                       // 0x30
    PROTO_LINEINFO_ENC<uint8_t*> lineinfo;      // 0x38
    PROTO_ABSLINEINFO_ENC<int*> abslineinfo;    // 0x40
    PROTO_LOCVARS_ENC<struct LocVar*> locvars;  // 0x48
    PROTO_UPVALUES_ENC<TString**> upvalues;     // 0x50
    PROTO_SOURCE_ENC<TString*> source;          // 0x58
    PROTO_DEBUGNAME_ENC<TString*> debugname;    // 0x60
    PROTO_DEBUGINSN_ENC<uint8_t*> debuginsn;    // 0x68
    PROTO_TYPEINFO_ENC<uint8_t*> typeinfo;      // 0x70
    PROTO_USERDATA_ENC<void*> userdata;         // 0x78
    GCObject* gclist;                           // 0x80

    int sizecode;     // 0x88
    int sizep;        // 0x8C
    int sizelocvars;  // 0x90
    int sizeupvalues; // 0x94
    int sizek;        // 0x98
    int sizelineinfo; // 0x9C
    int linegaplog2;  // 0xA0
    int linedefined;  // 0xA4
    int bytecodeid;   // 0xA8
    int sizetypeinfo; // 0xAC

    FeedbackVectorSlot* feedbackvec; // 0xB0
    uint32_t feedbackvecsize;        // 0xB8
    uint32_t funid;                  // 0xBC
} Proto;

typedef struct Closure
{
    CommonHeader; // 0x0

    uint8_t isC;       // 0x3
    uint8_t nupvalues; // 0x4
    uint8_t stacksize; // 0x5
    uint8_t preload;   // 0x6

    uint64_t usage;       // 0x8
    GCObject* gclist;     // 0x10
    struct LuaTable* env; // 0x18

    union
    {
        struct
        {
            lua_CFunction f;                              // 0x20
            CLOSURE_CONT_ENC<lua_Continuation> cont;      // 0x28
            CLOSURE_DEBUGNAME_ENC<const char*> debugname; // 0x30
            TValue upvals[1];                             // 0x38
        } c;

        struct
        {
            struct Proto* p; // 0x20
            TValue uprefs[1]; // 0x28
        } l;
    };
} Closure;

typedef struct global_State
{
    stringtable strt; // 0x0

    lua_Alloc frealloc; // 0x10
    void* ud;           // 0x18

    uint8_t currentwhite; // 0x20
    uint8_t gcstate;      // 0x21
    uint8_t padding_0x22[6]; // 0x22

    GCObject* gray;      // 0x28
    GCObject* grayagain; // 0x30
    GCObject* weak;      // 0x38

    size_t GCthreshold; // 0x40
    size_t totalbytes;  // 0x48

    int gcgoal;     // 0x50
    int gcstepmul;  // 0x54
    int gcstepsize; // 0x58
    uint8_t padding_0x5C[4]; // 0x5C

    struct lua_Page* freepages[LUA_SIZECLASSES];    // 0x60
    struct lua_Page* freegcopages[LUA_SIZECLASSES]; // 0x1A0
    struct lua_Page* allpages;                      // 0x2E0
    struct lua_Page* allgcopages;                   // 0x2E8
    struct lua_Page* sweepgcopage;                  // 0x2F0

    struct lua_State* mainthread; // 0x2F8
    UpVal uvhead;                 // 0x300

    struct LuaTable* mt[LUA_T_COUNT]; // 0x328
    TString* ttname[LUA_T_COUNT];     // 0x398
    TString* tmname[TM_N];            // 0x408

    TValue pseudotemp; // 0x4B0
    TValue registry;   // 0x4C0
    int registryfree;  // 0x4D0
    uint8_t padding_0x4D4[4]; // 0x4D4

    struct lua_jmpbuf* errorjmp; // 0x4D8
    uint64_t rngstate;           // 0x4E0
    uint64_t ptrenckey[4];       // 0x4E8

    lua_Callbacks cb;          // 0x508
    lua_ExecutionCallbacks ecb; // 0x558

    alignas(16) uint8_t ecbdata[LUA_EXECUTION_CALLBACK_STORAGE]; // 0x5A0

    lua_UdataDirectAccessData udatadirect[UTAG_INTERNAL_LIMIT]; // 0x7A0

    size_t memcatbytes[LUA_MEMORY_CATEGORIES]; // 0x2C30

    void (*udatagc[LUA_UTAG_LIMIT])(lua_State*, void*); // 0x3430
    LuaTable* udatamt[LUA_UTAG_LIMIT];                  // 0x3830

    TString* lightuserdataname[LUA_LUTAG_LIMIT]; // 0x3C30

    struct LuaTable* udatadirectfields[UTAG_INTERNAL_LIMIT]; // 0x4030

    GCStats gcstats;    // 0x4440
    uint32_t lastprotoid; // 0x44F8

#ifdef LUAI_GCMETRICS
    GCMetrics gcmetrics;
#endif
} global_State;

struct lua_State
{
    CommonHeader; // 0x0
    uint8_t status; // 0x3

    uint8_t activememcat; // 0x4
    bool isactive;        // 0x5
    bool singlestep;      // 0x6
    StkId top;           // 0x8
    StkId base;          // 0x10
    global_State* global; // 0x18
    CallInfo* ci;        // 0x20
    StkId stack_last;    // 0x28
    StkId stack;         // 0x30
    CallInfo* end_ci;    // 0x38
    CallInfo* base_ci;   // 0x40

    LSTATE_STACKSIZE_ENC<int> stacksize; // 0x48
    int size_ci;                         // 0x4C

    unsigned short nCcalls;    // 0x50
    unsigned short baseCcalls; // 0x52
    int cachedslot;            // 0x54

    LuaTable* gt;          // 0x58
    UpVal* openupval;      // 0x60
    GCObject* gclist;      // 0x68
    TString* namecall;     // 0x70
    void* userdata; // 0x78
};
