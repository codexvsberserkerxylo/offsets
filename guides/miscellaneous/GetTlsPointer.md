# GetTlsPointer
search for string `Current identity is %d`, theres only one xref, decompile
then you will be at the `printf` offset, just scroll up a little
and the first sub_xxxx in the func is `GetTlsPointer`:
```c
v2 = sub_xxxx(qword_xxxxxx); // <--- GetTlsPointer(IdentityPtr);
```

and then boom you have found the `GetTlsPointer` offset