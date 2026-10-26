omg so useful everyones gonna use this

# Push
search for string `Unable to create an Instance of type "{}"`, 1st xref:

```c
    sub_1712170("Unable to create an Instance of type \"{}\"", v6 + 0x40); // <--- anchor string
}
*(__m128 *)(v6 - 0x30) = _mm_setzero_ps();
if (*(_QWORD *)(v2 + 0xA0)) {
    *(_QWORD *)(v6 - 0x30) = *(_QWORD *)(v2 + 0x98);
    *(_QWORD *)(v6 - 0x28) = *(_QWORD *)(v2 + 0xA0);
    v8 = *(_QWORD *)(v6 - 0x38);
}
sub_1D5EE30(*(_QWORD *)(v6 - 0x20), v6 - 0x30);
v5 = sub_4246E90(a1, v6 - 0x20); // <--- Push
```

# fromExisting
search for string `Instance.fromExisting is not safe to call in parallel.` func at xref

# Index
string `InstanceHandle is not enabled yet!` func at xref

# GetChildren
string `GetChildren` func at xref

# FindFirstChildOfClass
string `FindFirstChildOfClass` func at xref

# new
string `Unable to create an Instance of type \"%s\"` func at xref

# FindFirstChild
string `FindFirstChildOfClass` func at xref

# SetAttribute
string `%s is not a supported attribute type` func at xref

# GetAttribute
string `[DFLog::HugeHugePersistentLog] Part {} is too large, treating as persistent` and wow i wonder what it is now def not func at xref tho right???

# FindFirstAncestorWhichIsA
string `FindFirstAncestorWhichIsA` func at xref

# SetParent
string `Attempt to set {} as its own parent` func at xref

# WaitForChild
string `illegal argument #2 (timeOut must be greater than 0)` func at xref

# GetValues (?)
string `Invalid table key type used` func at xref

# AddTag
string `Attempt to assign tag {}. CoreScript permission required` or `addTag` func at xref

# Clone
string `%s cannot be cloned` func at xref

# Destroy (?)
string `The Parent property of %s is locked` func at xref

# IsPropertyModified
string `call IsPropertyModified() on {}.{}` func at xref

# ResetPropertyToDefault
string `Invalid argument to ResetPropertyToDefault(): {}.{} is read-only` decompile, check xrefs for the function of the string and the only xref that calls the function is it

# QueryDescendants
string `Expected at least one filter` func at xref

