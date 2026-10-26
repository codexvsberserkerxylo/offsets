# FLogDataBank
search for string `WindowsThemeInit`, 1st (and only) xref:
```c
__int64 sub_xxxxx()
{
  return sub_xxxxx(qword_xxxxx, "WindowsThemeInit", &qword_xxxxx, 2);
}
```

and that `qword` behind the string is `FLogDataBank`

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

# to get the other fflag things just runtime dump them
