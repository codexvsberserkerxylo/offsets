# print
search for string `Current identity is %d`, theres only one xref, decompile it
then you will be somewhere like this:
```c
sub_xxxxxx(0, "Current identity is %d", (_DWORD)v3);
```
and well that `sub_xxxxx` is the `printf` offset

now to get `print` you will need to double click `printf`

then scroll down completely till you see something like this:

```c
  sub_xxxxxx(v1, (int)v18, 4, &v14, (__int64)v17, (__int64)v16, &v15); // <--- print!
  result = v20;
  if ( v20 >= 0x10 )
  {
      ...
  }
  return result;
```

and well by reading the comment you could already tell that that is `print`

