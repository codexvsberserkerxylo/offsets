# WriteLock
search for string `Datamodel: %p, job %s, instance %s (%p)[%s], dm amInParallelPhase: %d, dm currentThreadHasWriteLock: %d, write requesting thread: %llu, current thread: %llu, cookie: %llX, history:\n %s`, 1st xref, decompile

you will be somewhere like this

```c
        sub_4B529B0(
          Src,
          Format: "Datamodel: %p, job %s, instance %s (%p)[%s], dm amInParallelPhase: %d, dm currentThreadHasWriteLock: %d, write" // <---- anchor
          " requesting thread: %llu, current thread: %llu, cookie: %llX, history:\n"
          " %s");
```

now just scroll up till you see something like this:
```c
      if ( v9 != 0 && *(_QWORD *)(v9 + 0x700) != sub_C8A0() ) // <---- WriteLock
        v7 = 0;
```

boom `0x700` is `WriteLock`

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


this bs took me 5 minutes to find
like ig
