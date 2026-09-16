# FLogDataBank

search for the string `WindowsThemeInit`, xref and decompile
then you will be somewhere like this:
```
__int64 sub_xxxxx()
{
  return sub_xxxxx(qword_xxxxx, "WindowsThemeInit", &qword_xxxxx, 2);
}
```

and well the first `qword` (before the string) is the `FLogDataBank` offset / qword.
