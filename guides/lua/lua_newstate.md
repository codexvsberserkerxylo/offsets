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
