// dumped by nick (@skiddingonthescene)
// date: 2026-10-28 15:36:59
// took 0.0s
// success rate: 97.4%
// version-5a21b87bbc2641cf

// still in dev. check before using

#pragma once

#include <cstdint>
#include <cstddef>

#define CLOSURE_CONT_ENC vmval3
#define PROTO_ABSLINEINFO_ENC vmval4
#define PROTO_DEBUGINSN_ENC vmval3
#define PROTO_DEBUGNAME_ENC vmval3
#define PROTO_LINEINFO_ENC vmval3
#define PROTO_LOCVARS_ENC vmval3
#define PROTO_SOURCE_ENC vmval1
#define PROTO_TYPEINFO_ENC vmval2
#define PROTO_UPVALUES_ENC vmval4
#define PROTO_USERDATA_ENC vmval1
#define TSTRING_HASH_ENC vmval2
#define UDATA_META_ENC vmval2
#define LSTATE_STACKSIZE_ENC vmval2

#define CommonHeader \
    uint8_t marked; \
    uint8_t tt; \
    uint8_t memcat

struct GCObject {
    CommonHeader; /* 0x0 */
};

struct Proto {
    CommonHeader; /* 0x0 */
    uint8_t nups; /* 0x3 */
    uint8_t numparams; /* 0x4 */
    uint8_t flags; /* 0x5 */
    uint8_t is_vararg; /* 0x6 */
    uint8_t maxstacksize; /* 0x7 */
    PROTO_LINEINFO_ENC<uint8_t*> lineinfo; /* 0x8 */
    PROTO_UPVALUES_ENC<TString**> upvalues; /* 0x10 */
    const Instruction* codeentry; /* 0x18 */
    PROTO_DEBUGNAME_ENC<TString*> debugname; /* 0x20 */
    GCObject* gclist; /* 0x28 */
    PROTO_SOURCE_ENC<TString*> source; /* 0x30 */
    bool new_member1; /* 0x38 */
    PROTO_TYPEINFO_ENC<uint8_t*> typeinfo; /* 0x40 */
    void* execdata; /* 0x48 */
    uintptr_t exectarget; /* 0x50 */
    struct Proto** p; /* 0x58 */
    PROTO_LOCVARS_ENC<struct LocVar*> locvars; /* 0x60 */
    int new_member2; /* 0x68 */
    char gap_1[0x4]; /* 0x6c */
    PROTO_USERDATA_ENC<void*> userdata; /* 0x70 */
    PROTO_ABSLINEINFO_ENC<int*> abslineinfo; /* 0x78 */
    TValue* k; /* 0x80 */
    Instruction* code; /* 0x88 */
    PROTO_DEBUGINSN_ENC<uint8_t*> debuginsn; /* 0x90 */
    int sizeupvalues; /* 0x98 */
    int linedefined; /* 0x9c */
    int sizelocvars; /* 0xa0 */
    int bytecodeid; /* 0xa4 */
    int linegaplog2; /* 0xa8 */
    int sizep; /* 0xac */
    int sizek; /* 0xb0 */
    int sizetypeinfo; /* 0xb4 */
    int sizecode; /* 0xb8 */
    int sizelineinfo; /* 0xbc */
    FeedbackVectorSlot* feedbackvec; /* 0xc0 */
    uint32_t feedbackvecsize; /* 0xc8 */
    uint32_t funid; /* 0xcc */
    Proto* optimized; /* 0xd0 */
    Proto* deoptimized; /* 0xd8 */
    uint64_t cost; /* 0xe0 */
};

struct TString {
    CommonHeader; /* 0x0 */
    char gap_0[0x1]; /* 0x3 */
    uint16_t atomflag; /* 0x4 */
    int16_t atom; /* 0x6 */
    TString* next; /* 0x8 */
    TSTRING_HASH_ENC<unsigned int> hash; /* 0x10 */
    unsigned int len; /* 0x14 */
    char data[1]; /* 0x18 */
};

struct Udata {
    CommonHeader; /* 0x0 */
    uint8_t tag; /* 0x3 */
    int len; /* 0x4 */
    UDATA_META_ENC<struct LuaTable*> metatable; /* 0x8 */
    char data[1]; /* 0x10 */
};

struct stringtable {
    TString** hash; /* 0x0 */
    uint32_t nuse; /* 0x8 */
    int size; /* 0xc */
};

struct Closure {
    CommonHeader; /* 0x0 */
    uint8_t isC; /* 0x3 */
    uint8_t nupvalues; /* 0x4 */
    uint8_t preload; /* 0x5 */
    uint8_t stacksize; /* 0x6 */
    char gap_0[0x1]; /* 0x7 */
    GCObject* gclist; /* 0x8 */
    struct LuaTable* env; /* 0x10 */
    union {
        struct {
            lua_CFunction f; /* 0x0 */
            CLOSURE_CONT_ENC<lua_Continuation> cont; /* 0x8 */
            TString* debugname; /* 0x10 */
            TValue upvals[1]; /* 0x18 */
        } c;
        struct {
            Proto* p; /* 0x0 */
            TValue uprefs[1]; /* 0x8 */
        } l;
    };
};

struct LuaTable {
    CommonHeader; /* 0x0 */
    uint8_t tmcache; /* 0x3 */
    uint8_t lsizenode; /* 0x4 */
    uint8_t readonly; /* 0x5 */
    uint8_t safeenv; /* 0x6 */
    uint8_t nodemask8; /* 0x7 */
    int sizearray; /* 0x8 */
    union {
        int lastfree;
        int aboundary;
    }; /* 0xc */
    struct LuaTable* metatable; /* 0x10 */
    LuaNode* node; /* 0x18 */
    GCObject* gclist; /* 0x20 */
    TValue* array; /* 0x28 */
};

struct TValue {
    Value value; /* 0x0 */
    int extra; /* 0x8 */
};

struct LuaNode {
    TValue val; /* 0x0 */
    TKey key; /* 0x10 */
};

struct CallInfo {
    Proto* p; /* 0x0 */
    StkId func; /* 0x8 */
    StkId base; /* 0x10 */
    StkId top; /* 0x18 */
    union {
        const Instruction* savedpc;
        int errfunc;
    }; /* 0x20 */
    int nresults; /* 0x28 */
    unsigned int flags; /* 0x2c */
};

struct lua_State {
    CommonHeader; /* 0x0 */
    uint8_t status; /* 0x3 */
    uint8_t activememcat; /* 0x4 */
    bool singlestep; /* 0x5 */
    bool isactive; /* 0x6 */
    char gap_0[0x1]; /* 0x7 */
    unsigned short nCcalls; /* 0x8 */
    unsigned short baseCcalls; /* 0xa */
    int cachedslot; /* 0xc */
    CallInfo* end_ci; /* 0x10 */
    CallInfo* base_ci; /* 0x18 */
    RobloxExtraSpace* userdata; /* 0x20 */
    GCObject* gclist; /* 0x28 */
    CallInfo* ci; /* 0x30 */
    global_State* global; /* 0x38 */
    StkId stack; /* 0x40 */
    StkId top; /* 0x48 */
    StkId base; /* 0x50 */
    StkId stack_last; /* 0x58 */
    LuaTable* finalizers; /* 0x60 */
    TString* namecall; /* 0x68 */
    LSTATE_STACKSIZE_ENC<int> stacksize; /* 0x70 */
    int size_ci; /* 0x74 */
    UpVal* openupval; /* 0x78 */
    LuaTable* gt; /* 0x80 */
    char gap_1[0x8]; /* 0x88 */
};

struct lua_Callbacks {
    void* userdata; /* 0x0 */
    void (*userfinalizer)(lua_State* L, lua_State* co); /* 0x8 */
    void (*postresume)(lua_State* L); /* 0x10 */
    void (*panic)(lua_State* L, int errcode); /* 0x18 */
    int16_t (*useratom)(lua_State* L, const char* s, size_t l); /* 0x20 */
    void (*interrupt)(lua_State* L, int gc); /* 0x28 */
    void (*onallocate)(lua_State* L, void* block, size_t osize, size_t nsize, uint8_t memcat, int tt, int tag); /* 0x30 */
    void (*preresume)(lua_State* L); /* 0x38 */
    void (*debugstep)(lua_State* L, lua_Debug* ar); /* 0x40 */
    void (*debuginterrupt)(lua_State* L, lua_Debug* ar); /* 0x48 */
    void (*debugprotectederror)(lua_State* L); /* 0x50 */
    void (*onfree)(lua_State* L, void* block); /* 0x58 */
    void (*userthread)(lua_State* LP, lua_State* L); /* 0x60 */
    void (*debugbreak)(lua_State* L, lua_Debug* ar); /* 0x68 */
};

struct lua_Page {
    lua_Page* listprev; /* 0x0 */
    lua_Page* listnext; /* 0x8 */
    lua_Page* prev; /* 0x10 */
    lua_Page* next; /* 0x18 */
    int pageSize; /* 0x20 */
    int blockSize; /* 0x24 */
    void* freeList; /* 0x28 */
    int freeNext; /* 0x30 */
    int busyBlocks; /* 0x34 */
    char padding[8]; /* 0x38 */
    char data[1]; /* 0x40 */
};

struct lua_Debug {
    const char* name; /* 0x0 */
    const char* what; /* 0x8 */
    const char* source; /* 0x10 */
    const char* short_src; /* 0x18 */
    uint8_t nparams; /* 0x20 */
    char gap_0[0x1]; /* 0x21 */
    uint8_t isvararg; /* 0x22 */
    char gap_1[0x1]; /* 0x23 */
    int bytecodeid; /* 0x24 */
    int currentline; /* 0x28 */
    int linedefined; /* 0x2c */
    int protoid; /* 0x30 */
    char gap_2[0x4]; /* 0x34 */
    void* userdata; /* 0x38 */
    char ssbuf; /* 0x40 */
};

struct global_State {
    stringtable strt; /* 0x0 */
    GCObject* gray; /* 0x10 */
    GCObject* weak; /* 0x18 */
    GCObject* grayagain; /* 0x20 */
    lua_Alloc frealloc; /* 0x28 */
    void* ud; /* 0x30 */
    uint8_t currentwhite; /* 0x38 */
    uint8_t gcstate; /* 0x39 */
    char gap_0[0x2]; /* 0x3a */
    int gcgoal; /* 0x3c */
    int gcstepsize; /* 0x40 */
    int gcstepmul; /* 0x44 */
    size_t GCthreshold; /* 0x48 */
    size_t totalbytes; /* 0x50 */
    uint64_t field_0x58; /* 0x58 */
    char gap_1[0x10]; /* 0x60 */
    struct lua_State* mainthread; /* 0x70 */
    UpVal uvhead; /* 0x78 */
    struct lua_Page* freepages[LUA_SIZECLASSES]; /* 0xa0 */
    struct lua_Page* freegcopages[LUA_SIZECLASSES]; /* 0x1e0 */
    TString* tmname[TM_N]; /* 0x320 */
    TString* ttname[LUA_T_COUNT]; /* 0x3c8 */
    struct LuaTable* mt[LUA_T_COUNT]; /* 0x438 */
    char gap_2[0x160]; /* 0x4a8 */
    TValue pseudotemp; /* 0x608 */
    TValue registry; /* 0x618 */
    RegistryFree registryfree; /* 0x628 */
    char gap_3[0xc]; /* 0x62c */
    uint64_t rngstate; /* 0x638 */
    lua_Callbacks cb; /* 0x640 */
    uint64_t ptrenckey[4]; /* 0x6b0 */
    lua_ExecutionCallbacks ecb; /* 0x6d0 */
    char gap_4[0x218]; /* 0x718 */
    lua_UdataDirectAccessData udatadirect; /* 0x930 */
    char gap_5[0x2c18]; /* 0x978 */
    struct lua_Page* allgcopages; /* 0x3590 */
    struct lua_Page* sweepgcopage; /* 0x3598 */
    char gap_6[0x2a8]; /* 0x35a0 */
    size_t memcatbytes; /* 0x3848 */
    char gap_7[0x7f8]; /* 0x3850 */
    void (*udatagc[LUA_UTAG_LIMIT])(lua_State*, void*); /* 0x4048 */
    lua_UserdataMark udatamark[LUA_UTAG_LIMIT]; /* 0x4448 */
    LuaTable* udatamt[LUA_UTAG_LIMIT]; /* 0x4848 */
    TValue weakregistry; /* 0x4c48 */
    int weakregistryfree; /* 0x4c58 */
    int weakregistrytop; /* 0x4c5c */
    lua_EmbedderGc embeddergc; /* 0x4c60 */
    TString* lightuserdataname; /* 0x4c68 */
    char gap_8[0x808]; /* 0x4c70 */
    struct Closure* builtinPcall; /* 0x5478 */
    struct Closure* builtinXpcall; /* 0x5480 */
    uint64_t ptrenckeynew[8]; /* 0x5488 */
    bool ptrencactive; /* 0x54c8 */
    char gap_9[0x7]; /* 0x54c9 */
    GCStats gcstats; /* 0x54d0 */
    uint32_t lastprotoid; /* 0x5588 */
    uint32_t lastclassid; /* 0x558c */
#ifdef LUAI_GCMETRICS
    GCMetrics gcmetrics; /* 0x5590 */
#endif
    char gap_10[0x1d8]; /* 0x5598 */
};

struct RobloxExtraSpace {
    RobloxExtraSpace* next; /* 0x0 */
    void* _container; /* 0x8 */
    RobloxExtraSpace* prev; /* 0x10 */
    std::shared_ptr<Shared> shared; /* 0x18 */
    void* node; /* 0x28 */
    std::weak_ptr<uintptr_t> InstanceDefiningCapabilities; /* 0x30 */
    std::weak_ptr<uintptr_t> actor; /* 0x40 */
    void* context; /* 0x50 */
    void* stringId; /* 0x58 */
    uint64_t identity; /* 0x60 */
    uint64_t identityflags; /* 0x68 */
    void* scriptContext; /* 0x70 */
    uint64_t scriptContextMetadata; /* 0x78 */
    uint64_t capabilities; /* 0x80 */
    std::weak_ptr<uintptr_t> script; /* 0x88 */
    std::weak_ptr<uintptr_t> targetInstance; /* 0x98 */
    bool isthreadterminated; /* 0xa8 */
    bool isyielded; /* 0xa9 */
    char flags[2]; /* 0xaa */
    uint32_t threadflags; /* 0xac */
    void* customthreaddata; /* 0xb0 */
};

struct Shared {
    uintptr_t allThreads[2]; /* 0x0 */
    void* scriptContext; /* 0x10 */
    void* scriptVmState; /* 0x18 */
    std::vector<std::shared_ptr<void const>>* needToFree; /* 0x20 */
    void* engineContext; /* 0x28 */
    int threadCount; /* 0x30 */
    char gap_0[0x4]; /* 0x34 */
};
