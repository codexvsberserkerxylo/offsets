# RequireBypass
## (and IsCoreScript, identity, capabilities, userdata)

search for the string `Cannot require a RobloxScript module from a non RobloxScript context`, xref it then decompile obviously
and you will be somewhere like this:
```
  if ( !*(_BYTE *)(v28 + 2996) )
  {
    v29 = *(_QWORD *)(a1 + 96);
    v157[0] = *(_OWORD *)(v29 + 48);
    v157[1] = *(_OWORD *)(v29 + 64);
    if ( (sub_xxxxx(v157, v28, v25) & 8) != 0 )
    {
      if ( (*(_BYTE *)(v130 + 360) & 1) == 0 )
        raiseerror("Cannot require a non-RobloxScript module from a RobloxScript");
    }
    else if ( (*(_BYTE *)(v130 + 360) & 1) != 0 )
    {
      raiseerror("Cannot require a RobloxScript module from a non RobloxScript context");
    }
  }
```

(the func you are inside is `GetModuleFromVMStateMap` and theres `raiseerror` too as you can see in the pseudocode) 

the big decimal offset (`4 numbers`) is the `RequireBypass` offset (press h to turn it into hex),

`v29` is `userdata`,

`v157[0]` is `identity`,

`v157[1]` is `capabilities`,

the `decimal` in the if before the xref (`360` in my case) is `IsCoreScript` 

boom now you have the offsets for `RequireBypass, IsCoreScript, identity, userdata, capabilities`
