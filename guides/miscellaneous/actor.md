# WriteLock
search for string `[FLog::Error] [VideoDeviceInput::raiseWithDMWriteLock] Unable to raise property change due to no DataModel.`, 1st xref, decompile

you will be somewhere like this

```c
      sub_4AFA090(
        a1: (unsigned __int8 *)&v11,
        a2: (__int64)"[FLog::Error] [VideoDeviceInput::raiseWithDMWriteLock] Unable to raise property change due to no DataModel.", // <---- anchor
        a3: 0,
        a4: 0,
        a5: 0,
        a6: 0,
        a7: 0);
```

now just scroll up till you see:

```&RBX::PropertyChangedSignalData::`vftable';```

right above it you will see:

```c
if ( *(_QWORD *)(v5 + 0x6D0) == sub_C8A0() )
```

boom `0x6D0` is `WriteLock`

# ParallelFlag
search for `FilterDescendantsInstances is not safe to modify in parallel`, 1st xref, decompile.

you will see this instantly:

```c
  if ( v3 != 0 && *(_BYTE *)(v3 + 0x53D) != 0 ) // <---- ParallelFlag
    sub_4AFBA30(a1: "FilterDescendantsInstances is not safe to modify in parallel"); // <---- anchor
```

pretty simple `0x53D` is `ParallelFlag`

# Parent
search for string `Scripts that connect in parallel must be rooted under an Actor.`, 1st xref, decompile.

you will see something like this

```c
        if ( v30 == 0 )
          sub_4AFBA30(a1: "Scripts that connect in parallel must be rooted under an Actor."); // <---- anchor
        v29 = v53.m128i_i64[1];
```

so do u see how it does `if ( v30 == 0 )` before our anchor?

well now find where `v30` gets defined,

it will be somewhat like this:

```c
v30 = sub_423E200(a1: v21);
```

and well then just double click the sub_ function, you will instantly see this:

```c
v1 = *(_QWORD *)(a1 + 0x60); // <---- Actor.Parent
```

(basically first thing in the whole function)

boom `0x60` is `Actor.Parent`
