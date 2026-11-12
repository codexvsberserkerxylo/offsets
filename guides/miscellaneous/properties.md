# GetProperty
search for string `Could not find property descriptor`, LAST valid xref, decompile

you will be somewhere like this:

```c
    if ( v12
      || (sub_xxxx(a1: v10 + 0x1E0, a2: &v16, a3: v15, a4: 0), BYTE4(v16) != 0) // <--- GetPropertyData
      || (v13 = (__int64 *)(*(_QWORD *)(v10 + 0x1F0)
                          + 0x10LL
                          * (unsigned int)(*(_DWORD *)(v10 + 0x1F8)
                                         & *(_DWORD *)(*(_QWORD *)(v10 + 0x1E8) + 4LL * (unsigned int)v16)))) == nullptr
      || (v16 = *v13) == 0 )
    {
      sub_4B4F960(a1: 0, a2: (__int64)"Could not find property descriptor"); // <--- anchor
```

as u can see in the decompiled output thats `GetProperty`

# GetPropertyData
search for string `Unable to cast %s to %s`, 3rd xref, decompile

it will look like this:

```c
    v13 = sub_xxxx(a1: v10, a2: v18); // <--- GetPropertyData
    if ( v13 != 0 )
    {
      v19 = *(_DWORD *)(v13 + 0x30);
      sub_7C6B10(a1: a1 + 1, a2: &v19);
      v14 = sub_7C55D0();
      *a1 = v14;
      if ( v14 == sub_7C55D0() )
      {
        if ( a1[1] == 0 )
          return nullptr;
        return v8;
      }
LABEL_19:
      sub_4B52950(a1: "Variant cast failed");
    }
  }
  v15 = sub_7C5440();
  sub_738A20(a1: *(_QWORD *)(v15 + 8));
  v16 = (const char *)sub_738A20(a1: *(_QWORD *)(*a1 + 8));
  sub_4B52950(a1: "Unable to cast %s to %s", v16, v17); // <--- anchor
```

look in the pseudocode, thats `GetPropertyData`. (you can easily find it by just looking for the function that takes 2 args, then if it gets check != 0 its probably it)

# HashLookup
search for string `data_model_service_init_part3_begin`, 1st xref, decompile

```c
  v343 = *(_OWORD *)sub_71CC90(a1: v363, a2: "data_model_service_init_part3_begin", a3: v166); // <--- anchor
  sub_52CFEF0(a1: v167, a2: &v343);
  sub_36369F0(a1: v82);
  sub_31D5CC0(a1: v82);
  sub_3636A00(a1: v82);
  sub_3636A10(a1: v82);
  sub_3636A20(a1: v82);
  sub_3636A30(a1: v82);
  v168 = sub_xxxx(a1: "GamePassService"); // <--- HashLookup
```

you will know its it when it just takes one arg named `GamePassService`
(also called `HashLookupTable` i think)
