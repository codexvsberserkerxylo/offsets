// dumped by nick (@skiddingonthescene)
// date: 2026-11-09 21:19:08
// took 145.5s
// success rate: 97.6%

#pragma once

#include <cstdint>
#include <cstddef>
#include <atomic>
#include <memory>
#include <vector>
#include <rblx/helper.hpp>

// creds to thorioum for ts
namespace roblox
{
    struct identity {
        uint32_t type;
        uint64_t assetid;
    };

    struct instance {
        ULONGLONG filler;
    };

    struct intrusive {
        template <typename T, typename U>
        struct set {
            ULONGLONG count;
            T* head;
        };
    };

    struct detail {
        template <typename T, typename U, bool V>
        struct flyweight {
            uint32_t magic;
            T value;
            std::atomic<int> refs;
            int freshrefs;
        };
    };
}

#define CLOSURE_CONT_ENC vmval4
#define PROTO_ABSLINEINFO_ENC vmval4
#define PROTO_DEBUGINSN_ENC vmval4
#define PROTO_DEBUGNAME_ENC vmval4
#define PROTO_LINEINFO_ENC vmval3
#define PROTO_LOCVARS_ENC vmval2
#define PROTO_SOURCE_ENC vmval1
#define PROTO_TYPEINFO_ENC vmval4
#define PROTO_UPVALUES_ENC vmval2
#define PROTO_USERDATA_ENC vmval3
#define TSTRING_HASH_ENC vmval2
#define UDATA_META_ENC vmval2
#define LSTATE_STACKSIZE_ENC vmval1

#define CommonHeader \
    uint8_t marked; \
    uint8_t tt; \
    uint8_t memcat

struct GCObject {
    CommonHeader; /* 0x0 */
};
static_assert(sizeof(GCObject) == 8, "sizeof(GCObject) == 8");

struct Proto {
    CommonHeader; /* 0x0 */
    uint8_t is_vararg; /* 0x3 */
    uint8_t maxstacksize; /* 0x4 */
    uint8_t nups; /* 0x5 */
    uint8_t flags; /* 0x6 */
    uint8_t numparams; /* 0x7 */
    void* execdata; /* 0x8 */
    uintptr_t exectarget; /* 0x10 */
    uint8_t execflags; /* 0x18 */
    PROTO_DEBUGNAME_ENC<TString*> debugname; /* 0x20 */
    uint32_t execcount; /* 0x28 */
    PROTO_TYPEINFO_ENC<uint8_t*> typeinfo; /* 0x30 */
    GCObject* gclist; /* 0x38 */
    PROTO_LINEINFO_ENC<uint8_t*> lineinfo; /* 0x40 */
    PROTO_DEBUGINSN_ENC<uint8_t*> debuginsn; /* 0x48 */
    struct Proto** p; /* 0x50 */
    PROTO_SOURCE_ENC<TString*> source; /* 0x58 */
    TValue* k; /* 0x60 */
    Instruction* code; /* 0x68 */
    PROTO_ABSLINEINFO_ENC<int*> abslineinfo; /* 0x70 */
    PROTO_LOCVARS_ENC<struct LocVar*> locvars; /* 0x78 */
    PROTO_USERDATA_ENC<void*> userdata; /* 0x80 */
    PROTO_UPVALUES_ENC<TString**> upvalues; /* 0x88 */
    const Instruction* codeentry; /* 0x90 */
    int sizeupvalues; /* 0x98 */
    int sizelocvars; /* 0x9c */
    int sizep; /* 0xa0 */
    int linedefined; /* 0xa4 */
    int sizecode; /* 0xa8 */
    int sizek; /* 0xac */
    int sizelineinfo; /* 0xb0 */
    int bytecodeid; /* 0xb4 */
    int sizetypeinfo; /* 0xb8 */
    int linegaplog2; /* 0xbc */
    FeedbackVectorSlot* feedbackvec; /* 0xc0 */
    uint32_t feedbackvecsize; /* 0xc8 */
    uint32_t funid; /* 0xcc */
    Proto* optimized; /* 0xd0 */
    Proto* deoptimized; /* 0xd8 */
    uint64_t cost; /* 0xe0 */
    void* new_member; /* 0xe8 */
};
static_assert(sizeof(Proto) == 240, "sizeof(Proto) == 240");

struct TString {
    CommonHeader; /* 0x0 */
    uint16_t atomflag; /* 0x4 */
    int16_t atom; /* 0x6 */
    TString* next; /* 0x8 */
    TSTRING_HASH_ENC<unsigned int> hash; /* 0x10 */
    unsigned int len; /* 0x14 */
    char data[1]; /* 0x18 */
};
static_assert(sizeof(TString) == 32, "sizeof(TString) == 32");

struct Udata {
    CommonHeader; /* 0x0 */
    uint8_t tag; /* 0x3 */
    int len; /* 0x4 */
    UDATA_META_ENC<struct LuaTable*> metatable; /* 0x8 */
    char data[1]; /* 0x10 */
};
static_assert(sizeof(Udata) == 24, "sizeof(Udata) == 24");

struct stringtable {
    uint32_t saltadd; /* 0x0 */
    uint32_t nuse; /* 0x4 */
    int size; /* 0x8 */
    TString** hash; /* 0x10 */
    uint32_t saltmult; /* 0x18 */
    uint8_t hashshift; /* 0x1c */
};
static_assert(sizeof(stringtable) == 32, "sizeof(stringtable) == 32");

struct Closure {
    CommonHeader; /* 0x0 */
    uint8_t preload; /* 0x3 */
    uint8_t nupvalues; /* 0x4 */
    uint8_t isC; /* 0x5 */
    unsigned char stacksize; /* 0x6 */
    GCObject* gclist; /* 0x8 */
    struct LuaTable* env; /* 0x10 */
    union {
        struct {
            TString* debugname; /* 0x0 */
            CLOSURE_CONT_ENC<lua_Continuation> cont; /* 0x8 */
            lua_CFunction f; /* 0x10 */
            TValue upvals[1]; /* 0x18 */
        } c;
        struct {
            Proto* p; /* 0x0 */
            TValue uprefs[1]; /* 0x8 */
        } l;
    };
};
static_assert(sizeof(Closure) == 64, "sizeof(Closure) == 64");

struct LuaTable {
    CommonHeader; /* 0x0 */
    uint8_t tmcache; /* 0x3 */
    uint8_t safeenv; /* 0x4 */
    uint8_t nodemask8; /* 0x5 */
    uint8_t readonly; /* 0x6 */
    uint8_t lsizenode; /* 0x7 */
    int sizearray; /* 0x8 */
    union {
        int lastfree;
        int aboundary;
    }; /* 0xc */
    struct LuaTable* metatable; /* 0x10 */
    GCObject* gclist; /* 0x18 */
    LuaNode* node; /* 0x20 */
    TValue* array; /* 0x28 */
};
static_assert(sizeof(LuaTable) == 48, "sizeof(LuaTable) == 48");

struct TValue {
    Value value; /* 0x0 */
    int extra; /* 0x8 */
};
static_assert(sizeof(TValue) == 16, "sizeof(TValue) == 16");

struct LuaNode {
    TValue val; /* 0x0 */
    TKey key; /* 0x10 */
};
static_assert(sizeof(LuaNode) == 32, "sizeof(LuaNode) == 32");

struct CallInfo {
    StkId base; /* 0x0 */
    StkId top; /* 0x8 */
    StkId func; /* 0x10 */
    Proto* p; /* 0x18 */
    union {
        const Instruction* savedpc;
        int errfunc;
    }; /* 0x20 */
    int nresults; /* 0x28 */
    unsigned int flags; /* 0x2c */
};
static_assert(sizeof(CallInfo) == 48, "sizeof(CallInfo) == 48");

struct lua_State {
    CommonHeader; /* 0x0 */
    uint8_t status; /* 0x3 */
    bool singlestep; /* 0x4 */
    bool isactive; /* 0x5 */
    uint8_t activememcat; /* 0x6 */
    RobloxExtraSpace* userdata; /* 0x8 */
    LuaTable* gt; /* 0x10 */
    TString* namecall; /* 0x18 */
    CallInfo* end_ci; /* 0x20 */
    CallInfo* base_ci; /* 0x28 */
    UpVal* openupval; /* 0x30 */
    unsigned short nCcalls; /* 0x38 */
    unsigned short baseCcalls; /* 0x3a */
    int cachedslot; /* 0x3c */
    GCObject* gclist; /* 0x40 */
    StkId stack; /* 0x48 */
    global_State* global; /* 0x50 */
    StkId base; /* 0x58 */
    StkId top; /* 0x60 */
    StkId stack_last; /* 0x68 */
    CallInfo* ci; /* 0x70 */
    LSTATE_STACKSIZE_ENC<int> stacksize; /* 0x78 */
    int size_ci; /* 0x7c */
    LuaTable* finalizers; /* 0x80 */
};
static_assert(sizeof(lua_State) == 136, "sizeof(lua_State) == 136");

struct lua_Callbacks {
    void* userdata; /* 0x0 */
    void (*onallocate)(lua_State* L, void* block, size_t osize, size_t nsize, uint8_t memcat, int tt, int tag); /* 0x8 */
    char gap_0[0x10]; /* 0x10 */
    void (*userthread)(lua_State* LP, lua_State* L); /* 0x20 */
    int16_t (*useratom)(lua_State* L, const char* s, size_t l); /* 0x28 */
    char gap_1[0x8]; /* 0x30 */
    void (*debugstep)(lua_State* L, lua_Debug* ar); /* 0x38 */
    char gap_2[0x8]; /* 0x40 */
    void (*onfree)(lua_State* L, void* block); /* 0x48 */
    char gap_3[0x10]; /* 0x50 */
    void (*interrupt)(lua_State* L, int gc); /* 0x60 */
    void (*debugbreak)(lua_State* L, lua_Debug* ar); /* 0x68 */
};
static_assert(sizeof(lua_Callbacks) == 112, "sizeof(lua_Callbacks) == 112");

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
    int flags; /* 0x38 */
    char padding[sizeof(void*) == 8 ? 4 : 8]; /* 0x3c */
    union {
        char data[1];
        char* dataptr;
    }; /* 0x40 */
};
static_assert(sizeof(lua_Page) == 72, "sizeof(lua_Page) == 72");

struct global_State {
    unsigned char currentwhite; /* 0x0 */
    char gap_0[0x1]; /* 0x1 */
    unsigned char gcstate; /* 0x2 */
    char gap_1[0x5]; /* 0x3 */
    lua_Alloc frealloc; /* 0x8 */
    void* ud; /* 0x10 */
    int gcstepsize; /* 0x18 */
    int gcstepmul; /* 0x1c */
    int gcgoal; /* 0x20 */
    GCObject* gray; /* 0x28 */
    GCObject* grayagain; /* 0x30 */
    GCObject* weak; /* 0x38 */
    stringtable strt; /* 0x40 */
    uint64_t field_0x50; /* 0x50 */
    uint32_t field_0x58; /* 0x58 */
    uint8_t field_0x5c; /* 0x5c */
    size_t GCthreshold; /* 0x60 */
    size_t totalbytes; /* 0x68 */
    struct lua_Page* sweepgcopage; /* 0x70 */
    struct lua_State* mainthread; /* 0x78 */
    UpVal uvhead; /* 0x80 */
    uint64_t field_0xa8; /* 0xa8 */
    struct lua_Page* freepages[LUA_SIZECLASSES]; /* 0xb0 */
    struct lua_Page* freegcopages[LUA_SIZECLASSES]; /* 0x1f0 */
    char gap_2[0x8]; /* 0x330 */
    struct LuaTable* mt[LUA_T_COUNT]; /* 0x338 */
    TString* ttname[LUA_T_COUNT]; /* 0x3a8 */
    TString* tmname[TM_N]; /* 0x418 */
    lua_CageAlloc cagealloc; /* 0x4c0 */
    struct lua_Page* freegcopages_cage[LUA_SIZECLASSES]; /* 0x4c8 */
    char gap_3[0x28]; /* 0x608 */
    void* cageud; /* 0x630 */
    char gap_4[0x8]; /* 0x638 */
    registry_free registryfree; /* 0x640 */
    struct lua_jmpbuf* errorjmp; /* 0x648 */
    uint64_t ptrenckey[4]; /* 0x650 */
    lua_Callbacks cb; /* 0x670 */
    uint64_t rngstate; /* 0x6e0 */
    lua_ExecutionCallbacks ecb; /* 0x6e8 */
    alignas(16) uint8_t ecbdata[LUA_EXECUTION_CALLBACK_STORAGE]; /* 0x730 */
    char gap_5[0x10]; /* 0x930 */
    lua_UdataDirectAccessData udatadirect; /* 0x940 */
    char gap_6[0x2438]; /* 0x988 */
    LuauPageset taggedpageset[TAGGED_PAGESET_SIZE]; /* 0x2dc0 */
    int sweeppageset; /* 0x3840 */
    char gap_7[0x14]; /* 0x3844 */
    uint64_t field_0x3858; /* 0x3858 */
    char gap_8[0x7f8]; /* 0x3860 */
    void (*udatagc[LUA_UTAG_LIMIT])(lua_State*, void*); /* 0x4058 */
    lua_UserdataMark udatamark[LUA_UTAG_LIMIT]; /* 0x4458 */
    LuaTable* udatamt[LUA_UTAG_LIMIT]; /* 0x4858 */
    char gap_9[0x18]; /* 0x4c58 */
    lua_EmbedderGc embeddergc; /* 0x4c70 */
    TString* lightuserdataname; /* 0x4c78 */
    char gap_10[0x3e8]; /* 0x4c80 */
    LuaTable* udatadirectfields; /* 0x5068 */
    char gap_11[0x418]; /* 0x5070 */
    struct Closure* builtinPcall; /* 0x5488 */
    struct Closure* builtinXpcall; /* 0x5490 */
    uint64_t ptrenckeynew[8]; /* 0x5498 */
    bool ptrencactive; /* 0x54d8 */
    char gap_12[0x7]; /* 0x54d9 */
    GCStats gcstats; /* 0x54e0 */
    uint32_t lastprotoid; /* 0x5598 */
    uint32_t lastclassid; /* 0x559c */
#ifdef LUAI_GCMETRICS
    GCMetrics gcmetrics; /* 0x55a0 */
#endif
    char gap_13[0x1d8]; /* 0x55a8 */
};
#ifdef LUAI_GCMETRICS
static_assert(sizeof(global_State) == 22400, "sizeof(global_State) == 22400");
#else
static_assert(sizeof(global_State) == 21920, "sizeof(global_State) == 21920");
#endif

struct RobloxExtraSpace {
    RobloxExtraSpace* next; /* 0x0 */
    roblox::intrusive::set<RobloxExtraSpace, RobloxExtraSpace>* _container; /* 0x8 */
    RobloxExtraSpace* prev; /* 0x10 */
    std::shared_ptr<Shared> shared; /* 0x18 */
    char gap_0[0x18]; /* 0x28 */
    std::weak_ptr<uintptr_t> actor; /* 0x40 */
    std::weak_ptr<uintptr_t> script; /* 0x50 */
    char gap_1[0x10]; /* 0x60 */
    roblox::identity identity; /* 0x70 */
    void* scriptContext; /* 0x80 */
    char gap_2[0x18]; /* 0x88 */
    uint64_t capabilities; /* 0xa0 */
    char gap_3[0x18]; /* 0xa8 */
};
static_assert(sizeof(RobloxExtraSpace) == 192, "sizeof(RobloxExtraSpace) == 192");

struct Shared {
    roblox::intrusive::set<RobloxExtraSpace, RobloxExtraSpace> allThreads; /* 0x0 */
    void* engineContext; /* 0x10 */
    void* scriptContext; /* 0x18 */
    int threadCount; /* 0x20 */
    void* scriptVmState; /* 0x28 */
    std::vector<std::shared_ptr<void const>>* needToFree; /* 0x30 */
};
static_assert(sizeof(Shared) == 56, "sizeof(Shared) == 56");
