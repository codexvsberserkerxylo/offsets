// I DO NOT FUCKING CARE IF THESE ARE WRONG
// luau version: 0.729

#define CommonHeader \
    uint8_t marked; // +0x00 \
    uint8_t tt; // +0x01 \
    uint8_t memcat; // +0x02

struct LuaTable
{
    CommonHeader; // +0x00
    unsigned char safeenv; // +0x03
    unsigned char lsizenode; // +0x04
    unsigned char tmcache; // +0x05
    unsigned char readonly; // +0x06
    unsigned char nodemask8; // +0x07
    int sizearray; // +0x08
    union // +0x0C
    {
        int lastfree; // +0x00
        int aboundary; // +0x00
    };
    struct LuaNode* node; // +0x10
    struct TValue* array; // +0x18
    struct LuaTable* metatable; // +0x20
    struct GCObject* gclist; // +0x28
};

struct global_State
{
    struct stringtable strt; // +0x00
    size_t GCthreshold; // +0x10
    size_t totalbytes; // +0x18
    struct GCObject* gray; // +0x20
    struct GCObject* grayagain; // +0x28
    struct GCObject* weak; // +0x30
    int gcgoal; // +0x38
    int gcstepmul; // +0x3C
    int gcstepsize; // +0x40
    unsigned char currentwhite; // +0x44
    unsigned char gcstate; // +0x45
    void* frealloc; // +0x48
    void* ud; // +0x50
    struct lua_Page* allgcopages; // +0x58
    struct lua_State* mainthread; // +0x60
    struct lua_Page* sweepgcopage; // +0x68
    struct lua_Page* allpages; // +0x70
    struct UpVal uvhead; // +0x78
    struct lua_Page* freegcopages[40]; // +0xA0
    struct lua_Page* freepages[40]; // +0x1E0
    struct LuaTable* mt[14]; // +0x320
    struct TString* ttname[14]; // +0x390
    struct TString* tmname[21]; // +0x400
    struct TValue pseudotemp; // +0x4A8
    struct TValue registry; // +0x4B8
    struct registryfree_t registryfree; // +0x4C8
    struct lua_jmpbuf* errorjmp; // +0x4D0
    struct lua_Callbacks cb; // +0x4D8
    unsigned __int64 ptrenckey[4]; // +0x528
    unsigned __int64 rngstate; // +0x548
    struct lua_ExecutionCallbacks ecb; // +0x550
    unsigned char ecbdata[512]; // +0x598
    struct lua_UdataDirectAccessData udatadirect[130]; // +0x7A0
    size_t memcatbytes[256]; // +0x2C30
    void (*udatagc[128])(struct lua_State*, void*); // +0x3430
    struct LuaTable* udatamt[128]; // +0x3830
    struct TString* lightuserdataname[128]; // +0x3C30
    struct LuaTable* udatadirectfields[130]; // +0x4030
    struct GCStats gcstats; // +0x4440
    unsigned int lastprotoid; // +0x44F8
};

struct Udata
{
    CommonHeader; // +0x00
    unsigned char tag; // +0x03
    int len; // +0x04
    UDATA_META_ENC<struct LuaTable*> metatable; // +0x08
    char data[1]; // +0x10
};

struct TString
{
    CommonHeader; // +0x00
    unsigned char gap_00[0x1]; // +0x03
    uint16_t atomflag; // +0x04
    int16_t atom; // +0x06
    struct TString* next; // +0x08
    TSTRING_HASH_ENC<unsigned int> hash; // +0x0C
    unsigned int len; // +0x14
    char data[1]; // +0x18
};

struct Proto
{
    CommonHeader; // +0x00
    unsigned char maxstacksize; // +0x03
    unsigned char flags; // +0x04
    unsigned char is_vararg; // +0x05
    unsigned char nups; // +0x06
    unsigned char numparams; // +0x07
    PROTO_UPVALUES_ENC<struct TString**> upvalues; // +0x08
    PROTO_SOURCE_ENC<struct TString*> source; // +0x10
    void* execdata; // +0x18
    uintptr_t exectarget; // +0x20
    struct TValue* k; // +0x28
    unsigned int* code; // +0x30
    PROTO_ABSLINEINFO_ENC<int*> abslineinfo; // +0x38
    PROTO_LINEINFO_ENC<unsigned char*> lineinfo; // +0x40
    PROTO_DEBUGNAME_ENC<struct TString*> debugname; // +0x48
    struct GCObject* gclist; // +0x50
    PROTO_DEBUGINSN_ENC<unsigned char*> debuginsn; // +0x58
    PROTO_LOCVARS_ENC<struct LocVar*> locvars; // +0x60
    struct Proto** p; // +0x68
    PROTO_USERDATA_ENC<void*> userdata; // +0x70
    PROTO_TYPEINFO_ENC<unsigned char*> typeinfo; // +0x78
    unsigned int* codeentry; // +0x80
    int sizecode; // +0x88
    int sizeupvalues; // +0x8C
    int sizelineinfo; // +0x90
    int sizek; // +0x94
    int sizetypeinfo; // +0x98
    int linegaplog2; // +0x9C
    int bytecodeid; // +0xA0
    int linedefined; // +0xA4
    int sizelocvars; // +0xA8
    int sizep; // +0xAC
    struct FeedbackVectorSlot* feedbackvec; // +0xB0
    int feedbackvecsize; // +0xB8
    int funid; // +0xBC
    struct Proto* optimized; // +0xC0
    struct Proto* deoptimized; // +0xC8
    uint64_t cost; // +0xD0
};

struct Closure
{
    CommonHeader; // +0x00
    unsigned char preload; // +0x03
    unsigned char stacksize; // +0x04
    unsigned char nupvalues; // +0x05
    unsigned char isC; // +0x06
    struct GCObject* gclist; // +0x08
    struct LuaTable* env; // +0x10
    union // +0x18
    {
        struct
        {
            int (*f)(struct lua_State*); // +0x00
            CLOSURE_CONT_ENC<lua_Continuation> cont; // +0x08
            CLOSURE_DEBUGNAME_ENC<const char*> debugname; // +0x10
            struct TValue upvals[1]; // +0x18
        } c;
        struct
        {
            struct Proto* p; // +0x00
            struct TValue uprefs[1]; // +0x08
        } l;
    };
};

struct CallInfo
{
    struct TValue* base; // +0x00
    struct TValue* top; // +0x08
    struct Proto* p; // +0x10
    struct TValue* func; // +0x18
    union // +0x20
    {
        const unsigned int* savedpc; // +0x00
        int errfunc; // +0x00
    };
    int nresults; // +0x28
    unsigned int flags; // +0x2C
};

struct lua_State
{
    CommonHeader; // +0x00
    unsigned char status; // +0x03
    unsigned char activememcat; // +0x04
    bool singlestep; // +0x05
    bool isactive; // +0x06
    struct UpVal* openupval; // +0x08
    struct GCObject* gclist; // +0x10
    struct TString* namecall; // +0x18
    unsigned short nCcalls; // +0x20
    unsigned short baseCcalls; // +0x22
    unsigned int cachedslot; // +0x24
    LSTATE_STACKSIZE_ENC<int> stacksize; // +0x28
    int size_ci; // +0x2C
    struct LuaTable* gt; // +0x30
    struct CallInfo* end_ci; // +0x38
    struct CallInfo* base_ci; // +0x40
    struct TValue* stack_last; // +0x48
    struct CallInfo* ci; // +0x50
    struct TValue* stack; // +0x58
    struct global_State* global; // +0x60
    struct TValue* top; // +0x68
    struct TValue* base; // +0x70
    struct RobloxExtraSpace* userdata; // +0x78
};

struct lua_Debug
{
    const char* short_src; // +0x00
    const char* what; // +0x08
    const char* source; // +0x10
    const char* name; // +0x18
    void* userdata; // +0x20
    int linedefined; // +0x28
    int currentline; // +0x2C
    unsigned char nupvals; // +0x30
    unsigned char isvararg; // +0x31
    unsigned char nparams; // +0x32
    char ssbuf[256]; // +0x38
};

struct Shared
{
    unsigned char gap_00[0x10]; // +0x00
    void* scriptContext; // +0x10
};

struct RobloxExtraSpace
{
    unsigned char gap_00[0x18]; // +0x00
    struct Shared shared; // +0x18
    unsigned char gap_01[0x8]; // +0x28
    void* script; // +0x30
    uint64_t capabilities; // +0x38
    unsigned char gap_02[0x30]; // +0x40
    uint64_t identity; // +0x78
};

struct stringtable
{
    struct TString** hash; // +0x00
    int nuse; // +0x08
    int size; // +0x0C
};

struct registryfree_t
{
    struct registryfree_t* next; // +0x00
    unsigned int freeslot; // +0x08
};

struct lua_jmpbuf
{
    unsigned long long data[8]; // +0x00
};

typedef void* (*lua_Alloc)(void* ud, void** old, size_t osize, size_t nsize);

typedef struct lua_Callbacks
{
    void* userdata; // +0x00
    lua_Alloc onallocate; // +0x08
    int16_t(*useratom)(struct lua_State* L, const char* s, size_t l); // +0x10
    void (*debuginterrupt)(struct lua_State* L, struct lua_Debug* ar); // +0x18
    void (*debugprotectederror)(struct lua_State* L); // +0x20
    void (*debugbreak)(struct lua_State* L, struct lua_Debug* ar); // +0x28
    void (*interrupt)(struct lua_State* L, int gc); // +0x30
    void (*userthread)(struct lua_State* LP, struct lua_State* L); // +0x38
    void (*debugstep)(struct lua_State* L, struct lua_Debug* ar); // +0x40
    void (*panic)(struct lua_State* L, int errcode); // +0x48
} lua_Callbacks;

struct GCObject
{
    CommonHeader; // +0x00
    struct GCObject* gclist; // +0x08
};

struct TValue
{
    union // +0x00
    {
        struct
        {
            VMValue1 value; // +0x00
            VMValue2 extra; // +0x08
        };
        struct
        {
            unsigned int it; // +0x00
            unsigned int it2; // +0x04
        };
    };
    int tt; // +0x10
};

struct UpVal
{
    CommonHeader; // +0x00
    union // +0x08
    {
        struct
        {
            struct TValue* open; // +0x00
            struct UpVal* next; // +0x08
            struct UpVal* previous; // +0x10
        };
        struct TValue value; // +0x00
    };
};

struct LuaNode
{
    struct TValue val; // +0x00
    struct TValue key; // +0x18
    unsigned int flags; // +0x30
    unsigned int collision; // +0x34
};

struct LocVar
{
    struct TString* varname; // +0x00
    int startpc; // +0x08
    int endpc; // +0x0C
};

struct FeedbackVectorSlot
{
    unsigned int data; // +0x00
};

struct GCStats
{
    size_t totalallocated; // +0x00
    size_t markedallocated; // +0x08
    size_t lastmarksweep; // +0x10
    size_t finalized; // +0x18
    size_t pause; // +0x20
    size_t last_gc_time; // +0x28
};

struct lua_Page
{
    struct lua_Page* next; // +0x00
    struct lua_Page* prev; // +0x08
    struct GCObject* dead; // +0x10
    size_t size; // +0x18
    size_t live; // +0x20
    size_t deadcount; // +0x28
    size_t flushcount; // +0x30
    unsigned char data[1]; // +0x38
};
