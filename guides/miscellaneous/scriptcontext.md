# Resume
search for string `Can't resume script in this context`, 1st xref

and then youre just in the `ScriptContextResume` function


# ToResume
do the same thing as `Resume`

then fully scroll up to the top of the function
then scroll down and the FIRST thing after variables and shit is:

```c
    v10 = a1 == 0 ? 0xFFFFFFFFFFFFFE68 : a1 - 0x958; // <--- ToResume
    v9 = ((0 == 1 ? 1 : 0) + 2) << 0x30;
    v3 = sub_4A8A590(*(_DWORD *)0x8A21690);
    if (*(_DWORD *)(v10 + 0x1548) >= 3) {
        sub_4AA5F60(0, "Invalid Facet Access"); // <--- string to help you find it
    }
```

and `0x958` is `ScriptContextToResume` woww


# TaskQueue
search for string `ScriptContextTaskQueue`, 1st xref

and then youre just in the `ScriptContextTaskQueue` function wow