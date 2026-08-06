// not confirmed prob wrong
// ion dump structs so
#define PROTO_ABSLINEINFO_ENC vmval3
#define PROTO_DEBUGINSN_ENC vmval4
#define PROTO_LINEINFO_ENC vmval1
#define PROTO_LOCVARS_ENC vmval4
#define PROTO_SOURCE_ENC vmval4
#define PROTO_TYPEINFO_ENC vmval4
#define PROTO_UPVALUES_ENC vmval1
#define PROTO_USERDATA_ENC vmval3

typedef struct Proto
{
    CommonHeader; // 0x0
    uint8_t is_vararg; // 0x3
    uint8_t flags; // 0x4
    uint8_t nups; // 0x5
    uint8_t numparams; // 0x6
    uint8_t maxstacksize; // 0x7
    PROTO_USERDATA_ENC<void*> userdata; // 0x8
    PROTO_SOURCE_ENC<TString*> source; // 0x10
    struct Proto** p; // 0x18
    PROTO_UPVALUES_ENC<TString**> upvalues; // 0x20
    uintptr_t exectarget; // 0x28
    PROTO_DEBUGNAME_ENC<TString*> debugname; // 0x30
    void* execdata; // 0x38
    PROTO_DEBUGINSN_ENC<uint8_t*> debuginsn; // 0x40
    GCObject* gclist; // 0x48
    TValue* k; // 0x50
    Instruction* code; // 0x58
    const Instruction* codeentry; // 0x60
    PROTO_LOCVARS_ENC<struct LocVar*> locvars; // 0x68
    uintptr_t field_70; // 0x70
    PROTO_TYPEINFO_ENC<uint8_t*> typeinfo; // 0x78
    PROTO_LINEINFO_ENC<uint8_t*> lineinfo; // 0x80
    uintptr_t field_88; // 0x88
    int sizek; // 0x8C
    int linegaplog2; // 0x90
    int sizelocvars; // 0x94
    int sizep; // 0x98
    int sizecode; // 0x9C
    int bytecodeid; // 0xA0
    int sizelineinfo; // 0xA4
    int sizeupvalues; // 0xA8
    int sizetypeinfo; // 0xAC
    PROTO_ABSLINEINFO_ENC<int*> abslineinfo; // 0xB0
    int sizeabslineinfo; // 0xB8
    int linedefined; // 0xBC
    uintptr_t field_C0; // 0xC0
    uintptr_t field_C8; // 0xC8
    uintptr_t field_D0; // 0xD0
} Proto;
