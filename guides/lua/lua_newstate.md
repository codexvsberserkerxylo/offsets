# lua_newstate

search for the string

`Failed to create Lua state` xref it, decompile

then you will be somewhere like this:

```c
  v11 = lua_newstate(sub_xxxx); // <--- lua_newstate
  v12 = v11;
  v734 = v11;
  if ( !v11 )
    raiseerror("Failed to create Lua state"); // <--- anchor
```

and `v11` is `lua_newstate`, kinda obvious since if `!v11` then it throws `Failed to create Lua state`

well since some people dont know this heres more

# luaD_rawrunprotected

do the exact same thing as lua_newstate, but now double click `lua_newstate`, then scroll to the end of the function 

then youll see this:

```c
    if ( (unsigned int)sub_xxxx(v5, sub_xxxx, 0) )
    {
      sub_xxxx(v5);
      return 0;
    }
```

and wow guess which func is luaD_rawrunprotected?? yea obviously the `sub_xxxx` thats in the if

# f_luaopen

do the exact same thing as luaD_rawrunprotected, then youll be there again well:

```c
    if ( (unsigned int)luaD_rawrunprotected(v5, sub_xxxx, 0) )
    {
      sub_xxxx(v5);
      return 0;
    }
```

and wow the `sub_xxxx` that is `luaD_rawrunprotected`'s `2nd arg` is `f_luaopen`

# close_state

do the exact same thing as f_luaopen

```c
    if ( (unsigned int)luaD_rawrunprotected(v5, f_luaopen, 0) )
    {
      sub_xxxx(v5);
      return 0;
    }
```

wow `sub_xxxx` is `close_state`


easy:


```c
    if (luaD_rawrunprotected(L, f_luaopen, nullptr) != 0)
    {
        // memory allocation error: free partial state
        close_state(L);
        L = nullptr;
    }
```

thats why you should use luau-lang!

https://vscode.dev/github/luau-lang/luau

# deletegco

do the same thing as `close_state`, double click it then you will need to scroll down and then you will be somewhere like this:

```c
  sub_2645890(a1, a1, deletegco); // <---- deletegco
  sub_26455E0(a1, **(_QWORD **)(a1 + 56), 8LL * *(int *)(*(_QWORD *)(a1 + 56) + 12LL), 0);
  sub_26455E0(a1, *(_QWORD *)(a1 + 24), 48LL * *(int *)(a1 + 116), *(unsigned __int8 *)(a1 + 2));
  sub_26455E0(a1, *(_QWORD *)(a1 + 64), 16LL * ((int)a1 + 112 - *(_DWORD *)(a1 + 112)), *(unsigned __int8 *)(a1 + 2));
```

and as you can see theres `deletegco`

# freeobj

pretty simple just double click `deletegco`:

```c
char __fastcall deletegco(__int64 a1, __int64 a2, __int64 a3)
{
  freeobj(a1, a3, a2);
  return 1;
}
```

# luaF_freeproto

double click `freeobj`, scroll completely down and then go to the `case 0xF:` like this:

```c
    case 0xF:
      return luaF_freeproto(a1, a2);
    case 0x10:
```

wow theres `luaF_freeproto`


# luaF_newproto

no reliable way to really get this but i recommend just searching for functions near `luaF_freeproto` till you find one that looks like `luaF_newproto`, the function should be near `3-6` funcs


# luaM_freearray, luaM_freegco

double click `luaF_freeproto`, youll be somewhere like this

```c
__int64 __fastcall luaF_freeproto(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx

  luaM_freearray(a1, *(_QWORD *)(a2 + 136), 4LL * *(int *)(a2 + 184), *(unsigned __int8 *)(a2 + 2));
  luaM_freearray(a1, *(_QWORD *)(a2 + 88), 8LL * *(int *)(a2 + 172), *(unsigned __int8 *)(a2 + 2));
  luaM_freearray(a1, *(_QWORD *)(a2 + 128), 16LL * *(int *)(a2 + 176), *(unsigned __int8 *)(a2 + 2));
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 != a2 + 8 )
    luaM_freearray(a1, (a2 + 8) ^ v6, *(int *)(a2 + 188), *(unsigned __int8 *)(a2 + 2));
  luaM_freearray(a1, *(_QWORD *)(a2 + 96) ^ (a2 + 96), 24LL * *(int *)(a2 + 160), *(unsigned __int8 *)(a2 + 2));
  luaM_freearray(a1, a2 + *(_QWORD *)(a2 + 16) + 16LL, 8LL * *(int *)(a2 + 152), *(unsigned __int8 *)(a2 + 2));
  v7 = *(_QWORD *)(a2 + 144);
  if ( a2 + 144 != v7 )
    luaM_freearray(a1, (a2 + 144) ^ v7, *(int *)(a2 + 184), *(unsigned __int8 *)(a2 + 2));
  if ( *(_QWORD *)(a2 + 72) )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 56) + 1760LL))(a1, a2);
  v8 = *(_QWORD *)(a2 + 64);
  if ( a2 + 64 != v8 )
    luaM_freearray(a1, a2 - v8 + 64, *(int *)(a2 + 180), *(unsigned __int8 *)(a2 + 2));
  v9 = *(_QWORD *)(a2 + 192);
  if ( v9 )
    luaM_freearray(a1, v9, 16LL * *(unsigned int *)(a2 + 200), *(unsigned __int8 *)(a2 + 2));
  return luaM_freegco(a1, a2, 232, *(unsigned __int8 *)(a2 + 2), a3);
}
```

wow theres `luaM_freegco` and `luaM_freearray`, as you can see in luau-lang you can verify this
