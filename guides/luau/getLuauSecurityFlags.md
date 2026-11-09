# getLuauSecurityFlags
search for string `FrameRateManager`, last xref thats not .rdata, decompile.

you will be here:

```c
strcpy(v18, "FrameRateManager");
```

and then just scroll down till you see this:

```c
          *(float *)(a1 + 0x54) = v47 * 0.0000009536743f; // <---- anchor
        }
        v48 = sub_3580F70(a1: v12);
        if ( v48 != 0 )
        {
          sub_4274D10(a1: v48, a2: &v54); // <---- getLuauSecurityFlags
          *(_DWORD *)(a1 + 0x60) = v54;
        }
```

wow `sub_4274D10` is `getLuauSecurityFlags`

(probably useless asf)
