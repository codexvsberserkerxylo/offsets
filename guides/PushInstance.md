# PushInstance
search for string `butes)`, xref then decompile bla bla bla

then you will be somewhere like this:

```
  if ( (unsigned __int8)sub_xxxx(&v8, a2) )
  {
    v7[0] = "butes)";
    *(_QWORD *)&v8 = &aButes[-1020150];
    LODWORD(v7[0]) = v2;
    v4 = *(_OWORD *)&qword_xxxx;
    v8 = *(_OWORD *)sub_xxxx(&v10, (__int64 *)&v8);
    v9 = v4;
    sub_xxxx((unsigned int)&v9, v5, (unsigned int)&v8, (_DWORD)a1, (__int64)v7);
  }
```

and `v8` is `PushInstance` boom (idk if this is accurate for each version but i found it on `version-c5aecda2245e4fae`)
