// dumped by nick (@skiddingonthescene)
// version-2c6fd5e09aaf4cfa
// date: 2026-11-21 00:04:34
// success rate: 100.0%

#pragma once

#include <cstdint>
#include <cstddef>
#include <atomic>
#include <memory>
#include <vector>
#include <rblx/helper.hpp>

// credits to thorioum for this
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

#define CLOSURE_CONT_ENC vmval3
#define PROTO_ABSLINEINFO_ENC vmval1
#define PROTO_DEBUGINSN_ENC vmval2
#define PROTO_LINEINFO_ENC vmval4
#define PROTO_LOCVARS_ENC vmval2
#define PROTO_TYPEINFO_ENC vmval1
#define PROTO_UPVALUES_ENC vmval1
#define PROTO_USERDATA_ENC vmval4
#define TSTRING_HASH_ENC vmval4
#define UDATA_META_ENC vmval4
#define LSTATE_STACKSIZE_ENC vmval1
#define PROTO_DEBUGNAME_ENC vmval4
#define PROTO_SOURCE_ENC vmval4

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
    uint8_t maxstacksize; /* 0x3 */
    uint8_t numparams; /* 0x4 */
    uint8_t is_vararg; /* 0x5 */
    uint8_t flags; /* 0x6 */
    uint8_t nups; /* 0x7 */
    PROTO_ABSLINEINFO_ENC<int*> abslineinfo; /* 0x8 */
    struct Proto** p; /* 0x10 */
    PROTO_DEBUGNAME_ENC<TString*> debugname; /* 0x18 */
    const Instruction* codeentry; /* 0x20 */
    PROTO_USERDATA_ENC<uint64_t*> userdata; /* 0x28 */
    PROTO_DEBUGINSN_ENC<uint8_t*> debuginsn; /* 0x30 */
    uint8_t execflags; /* 0x38 */
    char gap_0[0x7]; /* 0x39 */
    PROTO_SOURCE_ENC<TString*> source; /* 0x40 */
    PROTO_LOCVARS_ENC<struct LocVar*> locvars; /* 0x48 */
    PROTO_UPVALUES_ENC<TString**> upvalues; /* 0x50 */
    uint32_t execcount; /* 0x58 */
    char gap_1[0x4]; /* 0x5c */
    void* execdata; /* 0x60 */
    uintptr_t exectarget; /* 0x68 */
    TValue* k; /* 0x70 */
    Instruction* code; /* 0x78 */
    GCObject* gclist; /* 0x80 */
    PROTO_LINEINFO_ENC<uint8_t*> lineinfo; /* 0x88 */
    PROTO_TYPEINFO_ENC<uint8_t*> typeinfo; /* 0x90 */
    int sizetypeinfo; /* 0x98 */
    int linegaplog2; /* 0x9c */
    int sizelineinfo; /* 0xa0 */
    int sizelocvars; /* 0xa4 */
    int linedefined; /* 0xa8 */
    int sizecode; /* 0xac */
    int bytecodeid; /* 0xb0 */
    int sizep; /* 0xb4 */
    int sizek; /* 0xb8 */
    int sizeupvalues; /* 0xbc */
    FeedbackVectorSlot* feedbackvec; /* 0xc0 */
    uint32_t feedbackvecsize; /* 0xc8 */
    uint32_t funid; /* 0xcc */
    Proto* optimized; /* 0xd0 */
    Proto* deoptimized; /* 0xd8 */
    uint64_t cost; /* 0xe0 */
    struct LuauLazyChunk* lazychunk; /* 0xe8 */
};
static_assert(sizeof(Proto) == 240, "sizeof(Proto) == 240");

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
static_assert(sizeof(TString) == 32, "sizeof(TString) == 32");

struct Udata {
    CommonHeader; /* 0x0 */
    uint8_t tag; /* 0x3 */
    int len; /* 0x4 */
    UDATA_META_ENC<struct LuaTable*> metatable; /* 0x8 */
    alignas(8) char data[1]; /* 0x10 */
};
static_assert(sizeof(Udata) == 24, "sizeof(Udata) == 24");

struct stringtable {
    uint32_t saltmult; /* 0x0 */
    uint32_t saltadd; /* 0x4 */
    uint8_t hashshift; /* 0x8 */
    char gap_0[0x7]; /* 0x9 */
    TString** hash; /* 0x10 */
    uint32_t nuse; /* 0x18 */
    int size; /* 0x1c */
};
static_assert(sizeof(stringtable) == 32, "sizeof(stringtable) == 32");

struct Closure {
    CommonHeader; /* 0x0 */
    unsigned char stacksize; /* 0x3 */
    uint8_t nupvalues; /* 0x4 */
    uint8_t preload; /* 0x5 */
    uint8_t isC; /* 0x6 */
    char gap_0[0x1]; /* 0x7 */
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
    GCObject* gclist; /* 0x18 */
    TValue* array; /* 0x20 */
    LuaNode* node; /* 0x28 */
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
static_assert(sizeof(CallInfo) == 48, "sizeof(CallInfo) == 48");

struct lua_State {
    CommonHeader; /* 0x0 */
    uint8_t status; /* 0x3 */
    uint8_t activememcat; /* 0x4 */
    bool isactive; /* 0x5 */
    bool singlestep; /* 0x6 */
    char gap_0[0x1]; /* 0x7 */
    GCObject* gclist; /* 0x8 */
    LSTATE_STACKSIZE_ENC<int> stacksize; /* 0x10 */
    int size_ci; /* 0x14 */
    CallInfo* end_ci; /* 0x18 */
    CallInfo* base_ci; /* 0x20 */
    TString* namecall; /* 0x28 */
    unsigned short nCcalls; /* 0x30 */
    unsigned short baseCcalls; /* 0x32 */
    int cachedslot; /* 0x34 */
    LuaTable* finalizers; /* 0x38 */
    UpVal* openupval; /* 0x40 */
    RobloxExtraSpace* userdata; /* 0x48 */
    LuaTable* gt; /* 0x50 */
    CallInfo* ci; /* 0x58 */
    StkId stack_last; /* 0x60 */
    global_State* global; /* 0x68 */
    StkId stack; /* 0x70 */
    StkId base; /* 0x78 */
    StkId top; /* 0x80 */
};
static_assert(sizeof(lua_State) == 136, "sizeof(lua_State) == 136");

struct lua_Callbacks {
    void* userdata; /* 0x0 */
    void (*panic)(lua_State* L, int errcode); /* 0x8 */
    void (*debugbreak)(lua_State* L, lua_Debug* ar); /* 0x10 */
    void (*postresume)(lua_State* L); /* 0x18 */
    void (*interrupt)(lua_State* L, int gc); /* 0x20 */
    void (*userthread)(lua_State* LP, lua_State* L); /* 0x28 */
    int16_t (*useratom)(lua_State* L, const char* s, size_t l); /* 0x30 */
    void (*onallocate)(lua_State* L, void* block, size_t osize, size_t nsize, uint8_t memcat, int tt, int tag); /* 0x38 */
    void (*debugstep)(lua_State* L, lua_Debug* ar); /* 0x40 */
    void (*onfree)(lua_State* L, void* block); /* 0x48 */
    void (*debuginterrupt)(lua_State* L, lua_Debug* ar); /* 0x50 */
    void (*debugprotectederror)(lua_State* L); /* 0x58 */
    void (*preresume)(lua_State* L); /* 0x60 */
    void (*userfinalizer)(lua_State* L, lua_State* co); /* 0x68 */
};
static_assert(sizeof(lua_Callbacks) == 112, "sizeof(lua_Callbacks) == 112");

struct global_State {
    stringtable strt; /* 0x0 */
    lua_Alloc frealloc; /* 0x20 */
    void* ud; /* 0x28 */
    size_t GCthreshold; /* 0x30 */
    size_t totalbytes; /* 0x38 */
    GCObject* gray; /* 0x40 */
    GCObject* weak; /* 0x48 */
    GCObject* grayagain; /* 0x50 */
    unsigned char currentwhite; /* 0x58 */
    uint8_t gcdisabled; /* 0x59 */
    unsigned char gcstate; /* 0x5a */
    char gap_0[0x1]; /* 0x5b */
    int gcgoal; /* 0x5c */
    int gcstepmul; /* 0x60 */
    int gcstepsize; /* 0x64 */
    struct lua_Page* freepages[LUA_SIZECLASSES]; /* 0x68 */
    struct lua_Page* allgcopages; /* 0x1a8 */
    struct lua_Page* freegcopages[LUA_SIZECLASSES]; /* 0x1b0 */
    struct lua_State* mainthread; /* 0x2f0 */
    struct lua_Page* allpages; /* 0x2f8 */
    struct lua_Page* sweepgcopage; /* 0x300 */
    UpVal uvhead; /* 0x308 */
    struct LuaTable* mt[LUA_T_COUNT]; /* 0x330 */
    TString* tmname[TM_N]; /* 0x398 */
    TString* ttname[LUA_T_COUNT]; /* 0x440 */
    lua_CageAlloc cagealloc; /* 0x4a8 */
    struct lua_Page* allgcopages_cage; /* 0x4b0 */
    struct lua_Page* freegcopages_cage[LUA_SIZECLASSES]; /* 0x4b8 */
    struct lua_Page* sweepgcopage_cage; /* 0x5f8 */
    void* cageud; /* 0x600 */
    TValue pseudotemp; /* 0x608 */
    TValue registry; /* 0x618 */
    registry_free registryfree; /* 0x628 */
    char gap_1[0x4]; /* 0x62c */
    lua_Callbacks cb; /* 0x630 */
    uint64_t ptrenckey[4]; /* 0x6a0 */
    uint64_t rngstate; /* 0x6c0 */
    struct lua_jmpbuf* errorjmp; /* 0x6c8 */
    lua_ExecutionCallbacks ecb; /* 0x6d0 */
    alignas(16) uint8_t ecbdata[LUA_EXECUTION_CALLBACK_STORAGE]; /* 0x730 */
    lua_UdataDirectAccessData udatadirect[UTAG_INTERNAL_LIMIT]; /* 0x930 */
    LuauPageset taggedpageset[TAGGED_PAGESET_SIZE]; /* 0x2dc0 */
    int sweeppageset; /* 0x3840 */
    char gap_2[0x4]; /* 0x3844 */
    size_t memcatbytes[LUA_MEMORY_CATEGORIES]; /* 0x3848 */
    void (*udatagc[LUA_UTAG_LIMIT])(lua_State*, void*); /* 0x4048 */
    lua_UserdataMark udatamark[LUA_UTAG_LIMIT]; /* 0x4448 */
    LuaTable* udatamt[LUA_UTAG_LIMIT]; /* 0x4848 */
    TValue weakregistry; /* 0x4c48 */
    int weakregistryfree; /* 0x4c58 */
    int weakregistrytop; /* 0x4c5c */
    lua_EmbedderGc embeddergc; /* 0x4c60 */
    TString* lightuserdataname[LUA_LUTAG_LIMIT]; /* 0x4c68 */
    LuaTable* udatadirectfields[UTAG_INTERNAL_LIMIT]; /* 0x5068 */
    struct Closure* builtinPcall; /* 0x5478 */
    struct Closure* builtinXpcall; /* 0x5480 */
    uint64_t ptrenckeynew[8]; /* 0x5488 */
    bool ptrencactive; /* 0x54c8 */
    char gap_3[0x7]; /* 0x54c9 */
    GCStats gcstats; /* 0x54d0 */
    uint32_t lastprotoid; /* 0x5588 */
    uint32_t lastclassid; /* 0x558c */
#ifdef LUAI_GCMETRICS
    GCMetrics gcmetrics; /* 0x5590 */
#endif
};
#ifdef LUAI_GCMETRICS
static_assert(sizeof(global_State) == 22384, "sizeof(global_State) == 22384");
#else
static_assert(sizeof(global_State) == 21904, "sizeof(global_State) == 21904");
#endif

struct RobloxExtraSpace {
    RobloxExtraSpace* next; /* 0x0 */
    roblox::intrusive::set<RobloxExtraSpace, RobloxExtraSpace>* _container; /* 0x8 */
    RobloxExtraSpace* prev; /* 0x10 */
    std::shared_ptr<Shared> shared; /* 0x18 */
    char gap_0[0x8]; /* 0x28 */
    roblox::identity identity; /* 0x30 */
    void* scriptContext; /* 0x40 */
    uint64_t capabilities; /* 0x48 */
    char gap_1[0x18]; /* 0x50 */
    std::weak_ptr<uintptr_t> script; /* 0x68 */
    std::weak_ptr<uintptr_t> actor; /* 0x78 */
    std::weak_ptr<roblox::instance const> InstanceDefiningCapabilities; /* 0x88 */
    char gap_2[0x20]; /* 0x98 */
};
static_assert(sizeof(RobloxExtraSpace) == 184, "sizeof(RobloxExtraSpace) == 184");

struct Shared {
    int threadCount; /* 0x0 */
    char gap_0[0x4]; /* 0x4 */
    void* scriptContext; /* 0x8 */
    void* engineContext; /* 0x10 */
    std::vector<std::shared_ptr<void const>>* needToFree; /* 0x18 */
    roblox::intrusive::set<RobloxExtraSpace, RobloxExtraSpace> allThreads; /* 0x20 */
    void* scriptVmState; /* 0x30 */
};
static_assert(sizeof(Shared) == 56, "sizeof(Shared) == 56");

struct lua_Page {
    struct lua_Page* listprev; /* 0x0 */
    struct lua_Page* listnext; /* 0x8 */
    struct lua_Page* prev; /* 0x10 */
    struct lua_Page* next; /* 0x18 */
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
