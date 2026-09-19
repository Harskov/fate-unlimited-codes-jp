# Exemplars for func_001BB2F0 — the 3 matched functions nearest by address

## func_001BB2B0 @ 0x001BB2B0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef int s32;

s32 func_001BB2B0(char *arg0)
{
    s32 *p;
    s32 v;

    if (arg0 == 0)
        return 0;
    if (*(s32 *)(arg0 + 0xC) != 5)
        return 0;
    p = (s32 *)(arg0 + 0x2524);
    if (p != 0) {
        v = *p;
        v ^= 0;
        return v == 0;
    }
    return 0;
}

```

## func_001BB270 @ 0x001BB270 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef int s32;

s32 func_001BB270(char *arg0)
{
    s32 *p;

    if (arg0 == 0)
        return 0;
    if (*(s32 *)(arg0 + 0xC) != 0xC)
        return 0;
    p = (s32 *)(arg0 + 0x2524);
    if (p != 0)
        return *p > 0;
    return 0;
}

```

## func_001BB220 @ 0x001BB220 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef int s32;

s32 func_001BB220(char *arg0)
{
    s32 *p;

    if (arg0 == 0)
        return 0;
    if (*(s32 *)(arg0 + 0xC) != 0xD)
        return 0;
    p = *(s32 **)(arg0 + 0x2508);
    if (p == 0)
        return 0;
    if (*(s32 *)(arg0 + 0xC) == 0xD && *(s32 *)((char *)p + 0x53C) == 0x10FA)
        return 1;
    return 0;
}

```
