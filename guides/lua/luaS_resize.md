# luaS_resize
follow the [lua_newstate](https://github.com/codexvsberserkerxylo/offsets/blob/main/guides/lua/lua_newstate.md) guide


if you have found `f_luaopen` then you want to double click it


just scroll down till around line `~480` and then you need to look for something like this:


```c
  if ( byte_xxxxx != 0 )
  {
    sub_xxxxx(a1, a2: 0x20, a3: *v58, a4: v58[1]);
  }
```

and the `sub` is `luaS_resize`

# saltflag
exact same thing like `luaS_resize`


```c
  if ( byte_xxxxx != 0 )
  {
    sub_xxxxx(a1, a2: 0x20, a3: *v58, a4: v58[1]);
  }
```


the `byte` is `saltflag`


ok hi bye
