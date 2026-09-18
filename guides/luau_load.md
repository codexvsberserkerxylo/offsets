# luau_load
(currently inlined i think)

search for string `%s: bytecode corrupted` and then scroll to the top of the func, and thats `luau_load`

## extra:

theres `lua_pushfstringL` right at the xref:

`result = lua_pushfstringL(v3, "%s: bytecode corrupted", v17);`

and `luaO_chunkid` is right before it:

```
  v17 = (const char *)luaO_chunkid(v1058, 256, v7, v16);
  result = lua_pushfstringL(v3, "%s: bytecode corrupted", v17);
```

if you look at the xrefs to `luau_load` you will see `4` xrefs that are in the same func and thats `luaVM_load`
