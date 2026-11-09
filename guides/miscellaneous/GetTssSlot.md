# GetTssSlot
search for string `Current identity is %d`, theres only one xref, decompile
then you will be at the `printf` offset, just scroll up a little
and the first sub_xxxx in the func is `GetTssSlot`:
```c
v2 = sub_xxxx(qword_xxxxxx); // <--- GetTssSlot(IdentityPtr);
```

and then boom you have found the `GetTssSlot` offset
