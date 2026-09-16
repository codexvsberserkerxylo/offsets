# luaG_runerrorL

search for the string `table overflow`, xref any of it then you will be somewhere like this:

```
sub_xxxx((__int64)a1, (__int64)"table overflow", 0xFFFFFFFFLL, v36);
```

and thats the `luaG_runerrorL` offset

## extra:
if you double click `luaG_runerrorL` then theres gonna be around `4` sub funcs inside of it

the `2nd` one is `luaD_growstack`,
the `3rd` one is `luaG_pusherror`,
the `4th` one is `luaD_throw`

and if you double click `luaD_throw` you will see only one sub_xxxx inside of it and thats `lua_exception` 

(you can easily identify it because if you double click it you will see something like this ```*(_QWORD *)a1 = &lua_exception::`vftable';```)

more funcs (func at xref)
`luaG_readonlyerror` = `attempt to modify a readonly table`
`luaG_typeerrorL` = `attempt to %s a %s value` (theres `luaT_objtypenamestr` before the string, it just returns `luaT_objtypename` so 2 more free offsets)
`luaG_forerrorL` = `invalid 'for' %s (number expected, got %s)`
`luaG_concaterror` = `attempt to concatenate %s with %s`
`luaG_aritherror` = `attempt to perform arithmetic (%s) on %s` (or `attempt to perform arithmetic (%s) on %s and %s`)
`luaG_ordererror` = `attempt to compare %s %s %s`
`luaG_indexerror` = `attempt to index %s with '%s'` (or `attempt to index %s with %s`)
`luaG_missingmembererror` = `this %s does not have a key named '%s'` (or `cannot index %s with a %s`)
`luaG_methoderror` = `attempt to call missing method '%s' of %s`

btw in `luaG_pusherror` theres `pushfstring_nocheck` (sub at the `stack overflow` string and the last sub like this `return sub_xxxx(a1, (int)"%s:%d: %s", v8, v12, v3);`),

`luaC_step`, `lua_checkstack`, `luaM_newgco`, `luaM_newpage`, `luaM_allocgco`, `luaM_toobig`, `luaO_chunkid` (`2` subs before `pushfstring_nocheck` at the `return`)
