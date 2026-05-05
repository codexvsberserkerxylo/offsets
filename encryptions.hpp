// dumped by nick \\
// date: 2026-05-05 13:07:14 \\
// took 8.4s \\
// version-acc4b74f79e743b9 \\

#pragma once

#define LUAU_SHUFFLE2(s, a1, a2)                              a1 s a2
#define LUAU_SHUFFLE3(s, a1, a2, a3)                          a1 s a2 s a3
#define LUAU_SHUFFLE4(s, a1, a2, a3, a4)                      a1 s a2 s a3 s a4
#define LUAU_SHUFFLE5(s, a1, a2, a3, a4, a5)                  a1 s a2 s a3 s a4 s a5
#define LUAU_SHUFFLE6(s, a1, a2, a3, a4, a5, a6)              a1 s a2 s a3 s a4 s a5 s a6
#define LUAU_SHUFFLE7(s, a1, a2, a3, a4, a5, a6, a7)          a1 s a2 s a3 s a4 s a5 s a6 s a7
#define LUAU_SHUFFLE8(s, a1, a2, a3, a4, a5, a6, a7, a8)      a1 s a2 s a3 s a4 s a5 s a6 s a7 s a8
#define LUAU_SHUFFLE9(s, a1, a2, a3, a4, a5, a6, a7, a8, a9)  a1 s a2 s a3 s a4 s a5 s a6 s a7 s a8 s a9

#define VMMutation  0
#define Corountine  1
#define Permutation 2 ^ 4

#define PROTO_LINEINFO_ENC      VMValue4
#define PROTO_ABSLINEINFO_ENC   VMValue1
#define PROTO_LOCVARS_ENC       VMValue1
#define PROTO_UPVALUES_ENC      VMValue2
#define PROTO_SOURCE_ENC        VMValue3

#define PROTO_DEBUGINSN_ENC     VMValue2
#define PROTO_DEBUGNAME_ENC     VMValue1
#define PROTO_TYPEINFO_ENC      VMValue2
#define PROTO_USERDATA_ENC      VMValue3

#define LSTATE_STACKSIZE_ENC    VMValue4
#define LSTATE_GLOBAL_ENC       VMValue1

#define CLOSURE_FUNC_ENC        yClosure
#define CLOSURE_CONT_ENC        VMValue3
#define CLOSURE_DEBUGNAME_ENC   VMValue4

#define UDATA_META_ENC          VMValue4

#define TABLE_MEMBER_ENC        VMValue0
#define TABLE_META_ENC          VMValue0

#define TSTRING_HASH_ENC        VMValue4
#define TSTRING_LEN_ENC         VMValue4

#define GSTATE_TTNAME_ENC       VMMutation
#define GSTATE_TMNAME_ENC       VMMutation
