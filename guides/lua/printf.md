# printf
search for string `Current identity is %d`, theres only one xref, decompile it
then you will be somewhere like this:
```c
sub_xxxxxx(0, "Current identity is %d", (_DWORD)v3);
```
and well that `sub_xxxxx` is the `printf` offset
