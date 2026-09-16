# luaV_doarithimpl

to find all of the variants of `luaV_doarithimpl` you need to first search for the string
`
attempt to perform arithmetic (%s) on %s and %s
`
(or `attempt to perform arithmetic (%s) on %s`)

and then xref it, decompile obviously and then you will be in `luaG_aritherror`.

it will look like this:
```
void __fastcall __noreturn luaG_aritherror(__int64 a1, int *a2, int *a3, int a4)
{
  __int64 v4; // rdi
  const char *v7; // rsi
  const char *v8; // rax
  const char *v9; // r8

  v4 = a4;
  v7 = (const char *)(luaT_objtypename(a1, a2) + 24);
  v8 = (const char *)(luaT_objtypename(a1, a3) + 24);
  v9 = (const char *)(*((_QWORD *)&off_63EABD0 + v4) + 2LL);
  if ( v7 == v8 )
    luaG_runerrorL(a1, (__int64)"attempt to perform arithmetic (%s) on %s", v9, v7);
  luaG_runerrorL(a1, (__int64)"attempt to perform arithmetic (%s) on %s and %s", v9, v7, v8);
}
```

(2 more free offsets)

and if you press X on `luaG_aritherror` (the sub you are inside) you will see the xrefs to it,
and every xref to it is one `luaV_doarithimpl` variant
so it goes like this:
`luaV_doarithimpl_TM_ADD` (first xref)
to 
`luaV_doarithimpl_TM_UNM` (last xref)
and all inbetween are
`
luaV_doarithimpl_TM_SUB
`,
`
luaV_doarithimpl_TM_MUL
`,
`
luaV_doarithimpl_TM_DIV
`,
`
luaV_doarithimpl_TM_IDIV
`,
`
luaV_doarithimpl_TM_MOD
`,
`
luaV_doarithimpl_TM_POW
`
(in order)

and well boom you have all `luaV_doarithimpl` variants and their offsets
