# lua_newstate

search for the string

`Failed to create Lua state` xref it, decompile

then you will be somewhere like this:

```
  v11 = sub_xxxx(sub_xxxx);
  v12 = v11;
  v734 = v11;
  if ( !v11 )
    raiseerror("Failed to create Lua state");
```

and `v11` is `lua_newstate`

## extra:
if you go inside of `lua_newstate` and scroll to the end of the func you will be somewhere like this:

```
  if ( (unsigned int)luaD_rawrunprotected(v5, sub_xxxx, 0) )
  {
    sub_xxxx(v5);
    return 0;
  }
  return v5;
```

and well theres `luaD_rawrunprotected` but anyways:

the thing we want is `sub_xxxx(v5);`

if you double click that func you need to scroll to the bottom of it (its not that big)

and then you will see something like this: 

```
  sub_xxxx(a1, a1, (unsigned __int8 (__fastcall *)(__int64, __int64, __int64))sub_xxxx);
  sub_xxxx(a1, **(_QWORD **)(a1 + 24), 8LL * *(int *)(*(_QWORD *)(a1 + 24) + 8LL), 0);
  sub_xxxx(a1, *(_QWORD *)(a1 + 72), 48LL * *(int *)(a1 + 132), *(unsigned __int8 *)(a1 + 1));
  sub_xxxx(                                    
    a1,
    *(_QWORD *)(a1 + 48),
    16 * (((int)a1 + 128) ^ (unsigned __int64)*(int *)(a1 + 128)),
    *(unsigned __int8 *)(a1 + 1));
  v11 = *(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 24) + 1760LL);
  if ( v11 )
    v11(a1);
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(v3 + 56))(*(_QWORD *)(v3 + 64), a1, 19808, 0);
```

and theres 2 free offsets here already: 

`luaM_free`

and

`deletegco`

`luaM_free` are the `3` last funcs

`deletegco` is this: 

```
 sub_xxxx(a1, a1, (unsigned __int8 (__fastcall *)(__int64, __int64, __int64))sub_xxxx);
```

its the `2nd` sub_xxxx

so you want to now double click on `deletegco`, then you will see something like this:

```
char __fastcall deletegco(__int64 a1, __int64 a2, __int64 a3)
{
  sub_xxxx(a1, a3, a2);
  return 1;
}
```

and theres `freeobj` (the only sub_xxxx)
now you want to double click on `freeobj`, and then you need to scroll to the bottom, then you will be somewhere like this:

```
    case 0xF:
      return luaF_freeproto(a1, a2, a3);        // luaF_freeproto
    case 0x10:
LABEL_55:
      v8 = 40;
      return luaM_freegco(a1, a2, v8, *(_BYTE *)(a2 + 1), a3);
    default:
      return (unsigned int)*(unsigned __int8 *)(a2 + 2) - 5;
  }
  while ( v13 != a2 )
  {
    v12 = (__int64 *)(v13 + 8);
    v13 = *(_QWORD *)(v13 + 8);
    if ( !v13 )
      goto LABEL_19;
  }
  *v12 = *(_QWORD *)(v13 + 8);
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 12LL);
LABEL_19:
  v14 = *(_WORD *)(a2 + 4) - ((*(_WORD *)(a2 + 4) >> 1) & 0x5555);
  v15 = (unsigned __int16)((v14 & 0x3333) + ((v14 >> 2) & 0x3333));
  if ( (unsigned __int16)((257 * (((unsigned __int16)v15 + (unsigned __int16)(v15 >> 4)) & 0xF0F)) >> 8) < 8u )
    *(_DWORD *)(*(_QWORD *)(a1 + 24) + 1584LL) &= ~0x20000000u;
  v8 = *(unsigned int *)(a2 + 20) + 25LL;
  return luaM_freegco(a1, a2, v8, *(_BYTE *)(a2 + 1), a3);
```

and then theres `luaM_freegco` and `luaF_freeproto` (`luaF_freeproto` is in the `case 0xF`)

and `luaM_freegco` is just the last sub in the func

and in `case 0xB` theres `luaM_freegcocaged` and in `case 7` theres gonna be an `unk_xxxx` and thats `luaH_dummynode`

boom now you have even more offsets from ONE string
