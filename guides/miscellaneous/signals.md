# FireTouchInterest
search for string `new overlap in different world`, SECOND xref:
(or just go through each xref till you find a small-ish function like this that returns a sub_ and thats gonna be the right function)

```c
__int64 __fastcall sub_18C1030(__int64 a1)
{
    __int64 v1;  // cse1

    if (!*(_QWORD *)(*(_QWORD *)(a1 + 0x10) + 0x178)) {
        loc_18C1076:
        sub_4AA5FA0("new overlap in different world", 0x6690155); // <--- anchor string
        __debug_break();
    }
    if (!*(_QWORD *)(*(_QWORD *)(a1 + 0x20) + 0x178)) {
        goto loc_18C1076;
    }
    if (*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 0x10) + 0x178) + 0x200) != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 0x20) + 0x178) + 0x200)) {
        goto loc_18C1076;
    }
    v1 = *(_QWORD *)(*(_QWORD *)(a1 + 0x10) + 0x178);
    return sub_155E790(*(_QWORD *)(v1 + 0x200), v1, *(_QWORD *)(*(_QWORD *)(a1 + 0x20) + 0x178), 0); // <--- this is FireTouchInterest!
}
```

and wow so easy `sub_155E790` is `FireTouchInterest` wow

# Overlap, Primitive
search for string `All parts passed to ArePartsTouchingOthers must be in the WorldRoot`, 1st xref:

```c
    if (*(_QWORD *)(*(_QWORD *)(v3 + 0x178) + 0x200) != *(_QWORD *)(a1 + 0x3F8)) { // <--- 1st is Primitive 2nd is Overlap
        sub_4AA83A0("All parts passed to ArePartsTouchingOthers must be in the WorldRoot");
    }
```

boom `0x178` is `Primitive`, `0x200` is `Overlap`!


# FireProximityPrompt
search for string `ProximityPrompt_Triggered`, 1st xref

(this might not work in normal ida since idfk its js gonna say "xref not found" or wtv)

```c
*(__m128 *)v2 = *(__m128 *)"ProximityPrompt_Triggered";
```

this is where you will be (or strcpy on ida)

then just scroll up and the sub_ at the xref is `FireProximityPrompt` wow:

```c
void __fastcall sub_312C010(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
```

takes 4 args

# FireMouseClick
pretty much easiest thing ive found:

search for the string `[FLog::DragDetectorLog] DragDetector::updateMouseState LeftMouseDown`, 1st xref:

youll be somewhere like this:

```c
if (!*(_BYTE *)("[FLog::DragDetectorLog] DragDetector::updateMouseState LeftMouseDown" + (v6 + 1 + 1))) {
```

as you see the function youre in has 8 args, just scroll up till you see an sub_ that uses the functions a1 for its a1, and the functions a4 for its a3:
```c
if (*(_BYTE *)(a1 + 0x130)) {
    v6 = sub_3C7E520(a1, v10, a4); // <--- FireMouseClick
}
```

make sure that its `0x130` and NOT `0x131`

and thats `FireMouseClick`

# FireRightMouseClick

follow the exact same guide as the `FireMouseClick` offset,

but just find the thing that does `a1 + 0x131` and not `a1 + 0x130` since 0x130 would be FireMouseClick

so like this:

```c
if (*(_BYTE *)(a1 + 0x131)) {
    v6 = sub_3C7E6C0(a1, v10, a4); // <--- FireRightMouseClick
}
```

## so like i cant find any strings for FireMouseHoverLeave and FireMouseHoverEnter, so just use sigs for them ig

# DisconnectConnection
search for string `Function Connection.Disconnect is not safe to call in parallel`, 1st xref

boom youre in the `DisconnectConnection` function

# CastArgs
search for string `Argument %d missing or nil`, 1st xref:

```c
        if (!a6) {
            sub_4AA81E0(&local_B8, "Argument %d missing or nil", 1); // <--- anchor string
            v1 = sub_5E19160(&local_B8, 0x80E6698);
            __debug_break();
        }
        *(_QWORD *)a1 = 0;
        *(_QWORD *)(a1 + 8) = 0;
        *(_QWORD *)a1 = *(_QWORD *)a6;
        *(_QWORD *)(a1 + 8) = *(_QWORD *)(a6 + 8);
        *(_DWORD *)(a1 + 0x10) = *(_DWORD *)(a6 + 0x10);
        *(_DWORD *)(a1 + 0x14) = *(_DWORD *)(a6 + 0x14);
        *(_DWORD *)(a1 + 0x18) = *(_DWORD *)(a6 + 0x18);
        *(_BYTE *)(a1 + 0x1C) = *(_BYTE *)(a6 + 0x1C);
        *(_BYTE *)(a1 + 0x1D) = *(_BYTE *)(a6 + 0x1D);
        loc_7F6001:
        sub_5DF7300(local_30 ^ v2);
        return;
    }
    v1 = sub_7F1B30(a1);
    local_80 = v1;
    local_B8 = _mm_setzero_ps();
    v1 = sub_41C68B0(a2, (_DWORD)((a3 + 1)), &local_80, 1); // <--- castargs
```

`sub_41C68B0` is `CastArgs`