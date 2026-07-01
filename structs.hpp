// idk
#define CommonHeader \
    uint8_t marked; /* offset 0 */ \
    uint8_t tt; /* offset 1 */ \
    uint8_t memcat; /* offset 2 */

struct LuaTable
{
    CommonHeader; /* offset 0 */
    unsigned char lsizenode; /* offset 3 */
    unsigned char safeenv; /* offset 4 */
    unsigned char nodemask8; /* offset 5 */
    unsigned char tmcache; /* offset 6 */
    unsigned char readonly; /* offset 7 */
    int sizearray; /* offset 8 */
    union
    {
        int lastfree;
        int aboundary;
    };
    LuaNode * node; /* offset 16 */
    TValue * array; /* offset 24 */
    LuaTable * metatable; /* offset 32 */
    GCObject* gclist; /* offset 40 */
};

struct global_State
{
    int gcstepsize; /* offset 0 */
    int gcstepmul; /* offset 4 */
    int gcgoal; /* offset 8 */
    unsigned char currentwhite; /* offset 12 */
    unsigned char gcstate; /* offset 13 */
    size_t GCthreshold; /* offset 16 */
    size_t totalbytes; /* offset 24 */
    GCObject* weak; /* offset 32 */
    GCObject* grayagain; /* offset 40 */
    GCObject* gray; /* offset 48 */
    lua_Alloc frealloc; /* offset 56 */
    void* ud; /* offset 64 */
    struct stringtable strt; /* offset 72 */
    lua_Page* sweepgcopage; /* offset 88 */
    lua_State* mainthread; /* offset 96 */
    lua_Page* freegcopages[40]; /* offset 104 */
    UpVal uvhead; /* offset 424 */  
    lua_Page* allgcopages; /* offset 464 */
    struct lua_Page* allpages;
    lua_Page* freepages[40]; /* offset 480 */
    TString* tmname[21]; /* offset 800 */
    TString* ttname[14]; /* offset 968 */
    LuaTable* mt[14]; /* offset 1080 */
    TValue pseudotemp; /* offset 1192 */
    TValue registry; /* offset 1208 */
    registryfree_t registryfree; /* offset 1224 */
    struct lua_jmpbuf* errorjmp;
    lua_Callbacks cb; /* offset 1240 */
    unsigned __int64 ptrenckey[4]; /* offset 1320 */
    unsigned __int64 rngstate; /* offset 1352 */
    lua_ExecutionCallbacks ecb; /* offset 1360 */
    unsigned char gap_67[8];
    unsigned char ecbdata[512]; /* offset 1440 */
    lua_UdataDirectAccessData udatadirect[130]; /* offset 1952 */
    size_t memcatbytes[256]; /* offset 11312 */
    void (*udatagc[128])(struct lua_State*, void*); /* offset 13360 */
    LuaTable* udatamt[128]; /* offset 14384 */
    TString* lightuserdataname[128]; /* offset 15408 */
    struct LuaTable* udatadirectfields[130]; /* offset 16432 */
    struct GCStats gcstats; /* offset 17472 */
    unsigned int lastprotoid; /* offset 17656 */
#ifdef LUAI_GCMETRICS
    GCMetrics gcmetrics; /* offset 17664 */
#endif
};

struct Udata
{
    CommonHeader; /* offset 0 */
    unsigned char tag; /* offset 3 */
    int len; /* offset 4 */
    UDATA_META_ENC<LuaTable*> metatable; /* offset 8 */
    char data[1]; /* offset 16 */
};

struct TString
{
    CommonHeader; /* offset 0 */
    unsigned char gap_00[0x1]; /* offset 3 */
    uint16_t atomflag; /* offset 4 */
    uint16_t atom; /* offset 6 */
    TString * next; /* offset 8 */
    TSTRING_HASH_ENC<unsigned int> hash; /* offset 16 */
    unsigned int len; /* offset 20 */
    char data; /* offset 24 */
};

struct Proto
{
    CommonHeader; /* offset 0 */
    unsigned char flags; /* offset 3 */
    unsigned char maxstacksize; /* offset 4 */
    unsigned char is_vararg; /* offset 5 */
    unsigned char numparams; /* offset 6 */
    unsigned char nups; /* offset 7 */
    GCObject* gclist; /* offset 8 */
    Proto** p; /* offset 16 */
    PROTO_TYPEINFO_ENC<unsigned char*> typeinfo; /* offset 24 */
    PROTO_UPVALUES_ENC<TString**> upvalues; /* offset 32 */
    unsigned int* codeentry; /* offset 40 */
    PROTO_LOCVARS_ENC<struct LocVar*> locvars; /* offset 48 */
    PROTO_DEBUGNAME_ENC<TString*> debugname; /* offset 56 */
    TValue* k; /* offset 64 */
    unsigned int* code; /* offset 72 */
    PROTO_DEBUGINSN_ENC<unsigned char*> debuginsn; /* offset 80 */
    void* execdata; /* offset 88 */
    uintptr_t exectarget;
    PROTO_SOURCE_ENC<TString*> source; /* offset 104 */
    PROTO_USERDATA_ENC<void*> userdata; /* offset 112 */
    PROTO_ABSLINEINFO_ENC<int*> abslineinfo; /* offset 120 */
    PROTO_LINEINFO_ENC<unsigned char*> lineinfo; /* offset 128 */
    int sizelineinfo; /* offset 136 */
    int sizetypeinfo; /* offset 140 */
    int sizelocvars; /* offset 144 */
    int sizek; /* offset 148 */
    int linedefined; /* offset 152 */
    int sizecode; /* offset 156 */
    int linegaplog2; /* offset 160 */
    int sizeupvalues; /* offset 164 */
    int bytecodeid; /* offset 168 */
    int sizep; /* offset 172 */
    struct FeedbackVectorSlot* feedbackvec; /* offset 176 */
    int feedbackvecsize; /* offset 184 */
    int funid; /* offset 188 */
    Proto* optimized; /* offset 192 */
    Proto* deoptimized; /* offset 200 */
};

struct Closure
{
    CommonHeader; /* offset 0 */
    unsigned char isC; /* offset 3 */
    unsigned char stacksize; /* offset 4 */
    unsigned char nupvalues; /* offset 5 */
    unsigned char preload; /* offset 6 */
    GCObject* gclist;
    struct LuaTable* env; /* offset 16 */
    union /* offset 24 */
    {
        struct
        {
            lua_CFunction f; /* offset 0 */
            CLOSURE_CONT_ENC<lua_Continuation> cont; /* offset 8 */
            CLOSURE_DEBUGNAME_ENC<const char*> debugname; /* offset 16 */
            TValue upvals[1]; /* offset 24 */
        } c;
        struct
        {
            Proto* p; /* offset 0 */
            TValue uprefs[1]; /* offset 8 */
        } l;
    };
};

struct CallInfo
{
    TValue* base; /* offset 0 */
    TValue* top; /* offset 8 */
    Proto* p; /* offset 16 */
    TValue* func; /* offset 24 */
    union /* offset 32 */
    {
        const Instruction* savedpc; /* offset 0 */
        int errfunc; /* offset 0 */
    };
    int nresults; /* offset 40 */
    unsigned int flags; /* offset 44 */
};


struct Shared
{
    unsigned char gap_00[0x28]; /* offset 0 */
    void* scriptContext; /* offset 40 */
};
struct RobloxExtraSpace
{
    unsigned char gap_00[0x18]; /* offset 0 */
    std::shared_ptr<Shared> shared; /* offset 24 */
    unsigned char gap_01[0x38]; /* offset 40 */
    uint64_t capabilities; /* offset 96 */
    unsigned char gap_03[0x10]; /* offset 104 */
    uint64_t identity; /* offset 120 */
    unsigned char gap_04[0x10];
    std::weak_ptr<uintptr_t> script; // offset 144

};

struct lua_State
{
    CommonHeader; /* offset 0 */
    unsigned char status; /* offset 3 */
    unsigned char activememcat; /* offset 4 */
    bool isactive; /* offset 5 */
    bool singlestep; /* offset 6 */
    GCObject* gclist; /* offset 8 */
    LSTATE_STACKSIZE_ENC<int> stacksize; /* offset 16 */
    int size_ci; /* offset 20 */
    TString* namecall; /* offset 24 */
    unsigned short nCcalls; /* offset 32 */
    unsigned short baseCcalls; /* offset 34 */
    unsigned int cachedslot; /* offset 36 */
    struct RobloxExtraSpace* userdata; /* offset 40 */
    TValue* top; /* offset 48 */
    global_State* global; /* offset 56 */
    TValue* stack_last; /* offset 64 */
    TValue* stack; /* offset 72 */
    CallInfo* ci; /* offset 80 */
    TValue* base; /* offset 88 */
    UpVal* openupval;    
    LuaTable* gt; /* offset 104 */
    CallInfo* end_ci; /* offset 112 */
    CallInfo* base_ci; /* offset 120 */
};

struct lua_Debug
{
    unsigned char isvararg; /* offset 0 */
    unsigned char nparams; /* offset 1 */
    unsigned char nupvals; /* offset 2 */
    unsigned char gap_00[0x1]; /* offset 3 */
    int linedefined; /* offset 4 */
    int currentline; /* offset 8 */
    unsigned char gap_01[0x4]; /* offset 12 */
    const char * source; /* offset 16 */
    const char * short_src; /* offset 24 */
    const char * name; /* offset 32 */
    const char * what; /* offset 40 */
    void * userdata; /* offset 48 */
    char ssbuf[256]; /* offset 56 */
};

struct stringtable
{
    struct TString ** hash; /* offset 0 */
    int nuse; /* offset 8 */
    int size; /* offset 12 */
};
