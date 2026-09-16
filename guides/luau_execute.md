# luau_execute

search for the string `iterate over`
xref it, decompile (its 9k+ lines so it will take some time)
and if its done you are in `luau_execute_false`

now to get luau_execute you will need to scroll to the top of the func, xref the func you are in (`luau_execute_false`)
and the only `jmp` xref to `luau_execute_false` is well `luau_execute`

so if you xref and decompile the `jmp` one (its around 10 lines big)

you are somewhere like this:
`
__int64 __fastcall sub_xxxxxx(__int64 a1, __int64 a2, signed __int64 n)
{
  if ( *(_BYTE *)(a1 + 6) )
    return sub_xxxxxx(a1);
  else
    return sub_xxxxxx(a1, a2, n);
}
`

and well thats it, that func is `luau_execute`

the first sub_xxxx is `luau_execute_true`, last one is `luau_execute_false` btw
