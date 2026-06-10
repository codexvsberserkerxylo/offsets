// Roblox Version: decrypted_version-76173e47a79145c7
#pragma once

#include <cstdint>

#define CommonHeader uint8_t memcat; uint8_t tt; uint8_t marked

struct Closure {
    CommonHeader; // 0x0
    uint8_t isC; // 0x3
    uint8_t stacksize; // 0x4
    uint8_t nupvalues; // 0x5
    uint8_t preload; // 0x6
    uint64_t usage; // 0x8
    GCObject* gclist; // 0x10
    struct LuaTable* env; // 0x18
    union {
        struct {
            CLOSURE_DEBUGNAME_ENC<const char*> debugname; // 0x0
            CLOSURE_CONT_ENC<lua_Continuation> cont; // 0x8
            lua_CFunction f; // 0x10
            TValue upvals[1]; // 0x18 (calculated)
        } c; // 0x0 (calculated)
        struct {
            Proto* p; // 0x0
            TValue uprefs[1]; // 0x8 (calculated)
        } l; // 0x0 (calculated)
    }; // 0x20 (calculated)
};

struct lua_Callbacks {
    void* userdata; // 0x0
    void (*debugbreak)(CosmicState* L, lua_Debug* ar); // 0x3
    void (*interrupt)(CosmicState* L, int gc); // 0x8
    void (*debugstep)(CosmicState* L, lua_Debug* ar); // 0x10 (calculated)
    void (*onallocate)(CosmicState* L, size_t osize, size_t nsize); // 0x18
    void (*userthread)(CosmicState* LP, CosmicState* L); // 0x20
    void (*debuginterrupt)(CosmicState* L, lua_Debug* ar); // 0x28 (calculated)
    void (*debugprotectederror)(CosmicState* L); // 0x30
    void (*panic)(CosmicState* L, int errcode); // 0x38 (calculated)
    char __padding1[0x8];
    int16_t (*useratom)(CosmicState* L, const char* s, size_t l); // 0x48
};

struct Shared {
    char __padding1[0x8];
    void* scriptContext; // 0x8
};

struct global_State {
    size_t GCthreshold; // 0x0
    size_t totalbytes; // 0x8
    GCObject* weak; // 0x10
    GCObject* grayagain; // 0x18
    GCObject* gray; // 0x20
    uint8_t currentwhite; // 0x28
    uint8_t gcstate; // 0x29
    lua_Alloc frealloc; // 0x30
    void* ud; // 0x38
    int gcstepsize; // 0x40
    int gcstepmul; // 0x44
    int gcgoal; // 0x48
    stringtable strt; // 0x50
    struct lua_Page* sweepgcopage; // 0x60
    struct lua_Page* allpages; // 0x68 (calculated)
    struct CosmicState* mainthread; // 0x70
    struct lua_Page* allgcopages; // 0x78
    struct lua_Page* freepages[40]; // 0x80
    UpVal uvhead; // 0x1C0
    struct lua_Page* freegcopages[40]; // 0x1E8
    TString* tmname[21]; // 0x328
    TString* ttname[14]; // 0x3D0
    struct LuaTable* mt[14]; // 0x440
    TValue pseudotemp; // 0x4B0
    TValue registry; // 0x4C0
    int registryfree; // 0x4D0
    struct lua_jmpbuf* errorjmp; // 0x4D8 (calculated)
    lua_Callbacks cb; // 0x4E0
    uint64_t rngstate; // 0x530
    uint64_t ptrenckey[4]; // 0x538
    lua_ExecutionCallbacks ecb; // 0x558
    alignas(16) uint8_t ecbdata[512]; // 0x5A0 (calculated)
    lua_UdataDirectAccessData udatadirect[130]; // 0x7A0
    size_t memcatbytes[256]; // 0x2C30
    lua_Destructor udatagc[128]; // 0x3430
    LuaTable* udatamt[128]; // 0x3830
    TString* lightuserdataname[128]; // 0x3C30
    struct LuaTable* udatadirectfields[130]; // 0x4030
    GCStats gcstats; // 0x4440
    uint32_t lastprotoid; // 0x44F8
    GCMetrics gcmetrics; // 0x4500
};

struct stringtable {
    TString** hash; // 0x0
    uint32_t nuse; // 0x8
    int size; // 0xC
};

struct Proto {
    CommonHeader; // 0x0
    uint8_t maxstacksize; // 0x3
    uint8_t numparams; // 0x4
    uint8_t flags; // 0x5
    uint8_t is_vararg; // 0x6
    uint8_t nups; // 0x7
    const Instruction* codeentry; // 0x8
    struct Proto** p; // 0x10
    PROTO_DEBUGNAME_ENC<TString*> debugname; // 0x18
    PROTO_DEBUGINSN_ENC<uint8_t*> debuginsn; // 0x20
    PROTO_UPVALUES_ENC<TString**> upvalues; // 0x28
    PROTO_ABSLINEINFO_ENC<int*> abslineinfo; // 0x30
    void* execdata; // 0x38
    uintptr_t exectarget; // 0x40
    PROTO_USERDATA_ENC<void*> userdata; // 0x48 (calculated)
    PROTO_LINEINFO_ENC<uint8_t*> lineinfo; // 0x50
    PROTO_LOCVARS_ENC<struct LocVar*> locvars; // 0x58
    PROTO_TYPEINFO_ENC<uint8_t*> typeinfo; // 0x60
    PROTO_SOURCE_ENC<TString*> source; // 0x68
    TValue* k; // 0x70
    Instruction* code; // 0x78
    GCObject* gclist; // 0x80
    int sizek; // 0x88
    int sizeupvalues; // 0x8C
    int sizep; // 0x90
    int linedefined; // 0x94
    int bytecodeid; // 0x98
    int sizetypeinfo; // 0x9C
    int linegaplog2; // 0xA0
    int sizelineinfo; // 0xA4
    int sizecode; // 0xA8
    int sizelocvars; // 0xAC
    FeedbackVectorSlot* feedbackvec; // 0xB0
    uint32_t feedbackvecsize; // 0xB8
    uint32_t funid; // 0xBC
};

struct CallInfo {
    StkId base; // 0x0
    StkId func; // 0x8
    StkId top; // 0x10
    const Instruction* savedpc; // 0x18 (calculated)
    int nresults; // 0x20
    unsigned int flags; // 0x24
};

struct LuaTable {
    CommonHeader; // 0x0
    uint8_t lsizenode; // 0x3
    uint8_t safeenv; // 0x4 (calculated)
    uint8_t nodemask8; // 0x5
    uint8_t tmcache; // 0x6
    uint8_t readonly; // 0x7
    int sizearray; // 0x8
    union {
        int lastfree; // 0x0 (calculated)
        int aboundary; // 0x0 (calculated)
    }; // 0xC (calculated)
    struct LuaTable* metatable; // 0x10
    TValue* array; // 0x18
    GCObject* gclist; // 0x20
    LuaNode* node; // 0x28
};

struct CosmicState {
    CommonHeader; // 0x0
    uint8_t status; // 0x3
    uint8_t activememcat; // 0x4
    bool isactive; // 0x5
    bool singlestep; // 0x6
    unsigned short nCcalls; // 0x8
    unsigned short baseCcalls; // 0xA
    int cachedslot; // 0xC
    CallInfo* end_ci; // 0x10
    CallInfo* base_ci; // 0x18
    GCObject* gclist; // 0x20
    global_State* global; // 0x28
    StkId base; // 0x30
    StkId top; // 0x38
    StkId stack; // 0x40
    CallInfo* ci; // 0x48
    StkId stack_last; // 0x50
    TString* namecall; // 0x58
    LuaTable* gt; // 0x60
    void* userdata; // 0x68
    UpVal* openupval; // 0x70
    LSTATE_STACKSIZE_ENC<int> stacksize; // 0x78
    int size_ci; // 0x7C
};

struct RobloxExtraSpace {
    RobloxExtraSpace* next; // 0x0
    uintptr_t _container; // 0x8
    RobloxExtraSpace* prev; // 0x10
    std::shared_ptr<Shared> shared; // 0x18
    char __padding1[0x8];
    Identity identity; // 0x30
    std::weak_ptr<uintptr_t> source; // 0x48
    uint64_t capabilities; // 0x58
    char __padding2[0x20];
    std::weak_ptr<uintptr_t> actor; // 0x80
    char __padding3[0x8];
    std::unique_ptr<SContinuations> continuations; // 0x98
};

struct lua_Page {
    lua_Page* listprev; // 0x0
    lua_Page* listnext; // 0x8
    lua_Page* prev; // 0x10
    lua_Page* next; // 0x18
    int pageSize; // 0x20
    int blockSize; // 0x24
    void* freeList; // 0x28
    int freeNext; // 0x30
    int busyBlocks; // 0x34
    char __padding1[0x8];
    char data[1]; // 0x40
};

struct TString {
    CommonHeader; // 0x0
    int16_t flag; // 0x4
    int16_t atom; // 0x6
    TString* next; // 0x8
    TSTRING_HASH_ENC<unsigned int> hash; // 0x10
    unsigned int len; // 0x14
    char data[1]; // 0x18
};
