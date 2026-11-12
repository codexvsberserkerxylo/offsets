# SetFFlag
search for string `[FLog::FastLogValueChanged] Setting variable {}`, 1st (and only) xref:
```c
__int64 __fastcall sub_4ABE970(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
```

wowww `sub_4ABE970` is `SetFFlag`!

<details>

<summary><b>other strings</b></summary>

`[FLog::FastLogValueChanged] ...(previously unknown)...`,
`[FLog::FastLogValueChanged] ...(IXP Data) to value {}`,
`[FLog::FastLogValueChanged] ...(rollout) to value {}`,
`[FLog::FastLogValueChanged] ...(universe filter) to value {}`,
`[FLog::FastLogValueChanged] ...(place filter) to value {}`,
`[FLog::FastLogValueChanged] ...(datacenter filter) to value {}`,
`[FLog::FastLogValueChanged] ...to value {}`

</details>

# GetFFlag
search for string `[FLog::ResetFilters] ParseAndSetFilterValue saving {} = {} for {}`, 1st (and only) xref:
```c
                v8 = sub_4ABF470(v12, v10, &local_B0, 1);  // <--- this is getfflag
                if (v8) {
                    if (*(_QWORD *)0x81A5860 >= 6) {
                        v8 = *(_QWORD *)0x81A5860 >> 8;
                        if (*(_QWORD *)0x81A5860 >> 8 >= 5) {
                            local_E0 = 0x8AE6F70;
                            if (*(_QWORD *)(v10 + 0x18) >= 0x10) {
                                v11 = *(_QWORD *)v10;
                            }
                            local_138 = "[FLog::ResetFilters] ParseAndSetFilterValue saving {} = {} for {}";
```

boom `sub_4ABF470` is `GetFFlag`!

# (kinda weird looking output since im using my own ida clone btw)

# FFlagPointer
js search for a random fflag name like `EnableLoadModule`, always 2nd xref:
```c
__int64 __fastcall sub_4305BC0(void)
{
    __int64 local_28;  // [rbp-28h] BYREF

    sub_89F0(*(_QWORD *)0x8E1B0D0 + 0x40); // <--- this qword is the FFlagPointer
    local_28 = "EnableLoadModule";
    sub_4AC6690(*(_QWORD *)0x8E1B0D0, &local_28, 0x8A21BF0, 1); // <--- ...and this one too
    return sub_8B30(*(_QWORD *)0x8E1B0D0 + 0x40); // <--- ...well and this one too
}
```

so the `FFlagPointer` offset is `0x8E1B0D0` / `qword_8E1B0D0`

# CrashPadPtr
search for string `crashpad_init_end`, 1st xref, decompile

```c
      qword_8621EE8 = (__int64)SetUnhandledExceptionFilter(lpTopLevelExceptionFilter: TopLevelExceptionFilter); // <--- CrashPadPtr
      sub_6021C60(a1: 0x16, a2: sub_5268140);
      v423.m128i_i64[0] = (__int64)"crashpad_init_end"; // <--- anchor
```

`qword_8621EE8` is `CrashPadPtr`.

# CrashPtr
string `[LOGCHANNELS + 1] RBXCRASH: %s (%s)`, 1st xref

```c
  if ( CrashPtr != nullptr ) // <--- this
    CrashPtr(); // <--- this
  if ( a1 == nullptr )
    goto LABEL_14;
  if ( a2 != nullptr )
  {
    if ( *a1 == 0 )
      goto LABEL_14;
    if ( *a2 != 0 )
    {
      LOWORD(v10) = 0x306;
      v8.m128i_i16[0] = 0x306;
      v8.m128i_i64[1] = (__int64)&qword_72EA520;
      sub_4B50A20(a1: &v8, a2: "[LOGCHANNELS + 1] RBXCRASH: %s (%s)", a1, a2); // <--- anchor
```

first thing in the whole func

# FLogHookPtr
search for string `TotalBytesWrittenCumulative`, 1st xref, decompile

it will look somewhat like this:

```c
      if ( qword_8658D48 != 0 ) // <--- FLogHookPtr
        v4 = sub_2A74820();
      v39.m128i_i64[0] = (__int64)"TotalBytesWrittenCumulative"; // <--- anchor
```
