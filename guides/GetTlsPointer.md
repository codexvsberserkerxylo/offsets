# GetTlsPointer
search for string `Current identity is %d`, theres only one xref, decompile
then you will be at the print offset, just scroll up a little
and the first sub_xxxx in the func is `GetTlsPointer`:
```
v2 = sub_xxxx(qword_xxxxxx);
```

and then boom you have found the `GetTlsPointer` offset

(the qword is the IdentityPtr btw)
