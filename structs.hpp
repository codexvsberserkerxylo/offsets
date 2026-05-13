//NOT MINE

typedef struct Closure
{
    CommonHeader;

    uint8_t stacksize; // 3
    uint8_t preload; // 4
    uint8_t isC; // 5
    uint8_t nupvalues; // 6

    GCObject* gclist; // 8
    struct LuaTable* env; // 16

    union
    {
        struct
        {
            lua_CFunction f; // 24
            CLOSURE_DEBUGNAME_ENC<const char*> debugname; // 32
            CLOSURE_CONT_ENC<lua_Continuation> cont; // 40
            TValue upvals[1]; // 48
        } c;

        struct
        {
            struct Proto* p; // 24 old 32
            TValue uprefs[1]; // 32 old 24
        } l;
    };
} Closure; 

typedef struct LuaTable
{
    CommonHeader;

    uint8_t nodemask8; 
    uint8_t lsizenode; 
    uint8_t tmcache; 
    uint8_t readonly;
    uint8_t safeenv; 

    int sizearray; 
    union
    {
        int lastfree;
        int aboundary;
    }; 

    GCObject* gclist; 
    
    TValue* array; 
    LuaNode* node; 
    struct LuaTable* metatable; 
} LuaTable;

typedef struct stringtable
{
    int size; // 0
    uint32_t nuse; // 4
    TString** hash; // 8
} stringtable;

typedef struct TString
{
    CommonHeader;
    // 1 byte padding

    int16_t ldtctinottttdfgdfgd;
    int16_t atom;

    // 2 byte padding

    TString* next; // next string in the hash table bucket

    TSTRING_HASH_ENC<unsigned int> hash;
    unsigned int len;

    char data[1]; // string data is allocated right after the header
} TString;

typedef struct Proto
{
    CommonHeader;
    uint8_t nups; 
    uint8_t is_vararg; 
    uint8_t numparams;
    uint8_t flags;
    uint8_t maxstacksize;
    void* execdata;

    uintptr_t exectarget;

    PROTO_USERDATA_ENC<void*> userdata; 
    PROTO_TYPEINFO_ENC<uint8_t*> typeinfo; 
    PROTO_DEBUGINSN_ENC<uint8_t*> debuginsn; 
    const Instruction* codeentry; 

    TValue* k; 
    Instruction* code; 
    GCObject* gclist; 
    PROTO_LINEINFO_ENC<uint8_t*> lineinfo; 
    PROTO_SOURCE_ENC<TString*> source; 
    struct Proto** p; 
    PROTO_ABSLINEINFO_ENC<int*> abslineinfo; 
    PROTO_UPVALUES_ENC<TString**> upvalues; 
    PROTO_LOCVARS_ENC<struct LocVar*> locvars; 
    PROTO_DEBUGNAME_ENC<TString*> debugname; 

    int sizetypeinfo; 
    int bytecodeid; 
    int sizelineinfo; 
    int linegaplog2; 
    int sizek; 
    int sizelocvars; 
    int sizep; 
    int sizeupvalues;
    int linedefined;
    int sizecode;  // first time me gayed
} Proto;

typedef struct  
{
    size_t GCthreshold; // 0
    size_t totalbytes; // 8

    lua_Alloc frealloc; // 16
    void* ud; // 24

    GCObject* gray; // 32      
    GCObject* grayagain; // 40
    GCObject* weak; // 48

    stringtable strt; // 56

    int gcgoal; // 72                                                    
    int gcstepmul; // 76
    int gcstepsize; // 80

    uint8_t currentwhite; // 84
    uint8_t gcstate; // 85

    UpVal uvhead; // 88

    struct lua_Page* freegcopages[LUA_SIZECLASSES];
    struct lua_Page* sweepgcopage; // 448
    struct lua_Page* allpages; // 456
    struct lua_Page* freepages[LUA_SIZECLASSES];
    struct lua_State* mainthread; // 784
    struct lua_Page* allgcopages; // 792

    TString* tmname[TM_N]; // 800
    TString* ttname[LUA_T_COUNT]; // 968
    struct LuaTable* mt[LUA_T_COUNT]; // 1064

    TValue pseudotemp; // 1160

    TValue registry; // 1176
    int registryfree; // 1192


    lua_Callbacks cb; // 1200

    uint64_t rngstate; // 1280
    struct lua_jmpbuf* errorjmp; 
    uint64_t ptrenckey[4]; // 1288

    lua_ExecutionCallbacks ecb; // 1328

    alignas(16) uint8_t ecbdata[LUA_EXECUTION_CALLBACK_STORAGE]; // 1392

    lua_UdataDirectAccessData udatadirect[UTAG_INTERNAL_LIMIT]; // 1904

    size_t memcatbytes[LUA_MEMORY_CATEGORIES]; // 11264

    void (*udatagc[LUA_UTAG_LIMIT])(lua_State*, void*); // 13312
    LuaTable* udatamt[LUA_UTAG_LIMIT]; // 14336

    TString* lightuserdataname[LUA_LUTAG_LIMIT]; // 15360

    struct LuaTable* udatadirectfields[UTAG_INTERNAL_LIMIT]; // 16384

    GCStats gcstats; // 17424
#ifdef LUAI_GCMETRICS
    GCMetrics gcmetrics; // 17608
#endif
} global_State; // shit

struct RobloxExtraSpace
{
    struct Shared
    {
        char  Pad0[0x18];
        void* ScriptContext; 
    };

    char    Pad1[0x18];
    Shared* SharedExtraSpace;
    char    Pad2[0x28];
    uintptr_t Identity;       
    char    Pad3[0x10];
    uintptr_t Capabilities;   
    char    Pad4[0x30];
    std::weak_ptr<uintptr_t> Script; 
}


struct lua_State
{
    CommonHeader;
    uint8_t status; // 3  // correct
    uint8_t activememcat; // 4 // correct

    bool isactive; // 5 // correct
    bool singlestep; // 6 // correct 

    LSTATE_STACKSIZE_ENC<int> stacksize; // 8 // correct
    int size_ci; // 12 // correct

    GCObject* gclist; //  16 // correct

    global_State* global; // 24 //correct  
    StkId stack_last; // 32 //correct  
    StkId top; // 40       //correct  
    StkId stack; // 48   //correct 
    CallInfo* ci; // 56  /ccorect                        
    StkId base; // 64  //correct                                                                  
    TString* namecall; // 72   //cprrect

    RobloxExtraSpace* userdata; // 80 //correct  

    CallInfo* end_ci; // 088    //cprrect              
    CallInfo* base_ci; // 096 //cprrect

    unsigned short nCcalls; // 104   //cprrect  
    unsigned short baseCcalls; // 106 //cprrect

    int cachedslot; // 108 //cprrect

    LuaTable* gt; // 112 //cprrect
    UpVal* openupval; // 120 //cprrect
};

struct lua_Callbacks
{
    void* userdata; // 0
    void (*interrupt)(lua_State* L, int gc); // 8
    void (*debugprotectederror)(lua_State* L); // 16
    void (*debuginterrupt)(lua_State* L, lua_Debug* ar); // 24
    void (*onallocate)(lua_State* L, size_t osize, size_t nsize); // 32
    void (*debugstep)(lua_State* L, lua_Debug* ar); // 40
    void (*debugbreak)(lua_State* L, lua_Debug* ar); // 48
    int16_t(*useratom)(lua_State* L, const char* s, size_t l); // 56
    void (*panic)(lua_State* L, int errcode); // 64
    void (*userthread)(lua_State* LP, lua_State* L); // 72
};
