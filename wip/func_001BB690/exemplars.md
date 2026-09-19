# Exemplars for func_001BB690 — the 3 matched functions nearest by address

## func_001BB5B0 @ 0x001BB5B0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef int s32;

s32 func_001BB5B0(char *arg0)
{
    s32 *p;
    s32 v;

    if (arg0 == 0)
        return 0;
    if (*(s32 *)(arg0 + 0xC) != 3)
        return 0;
    p = (s32 *)(arg0 + 0x2524);
    if (p != 0) {
        v = *p;
        return (v != 0) ^ 1;
    }
    return 0;
}

```

## func_001BB3C0 @ 0x001BB3C0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef int s32;

s32 func_001BB3C0(char *arg0)
{
    s32 *p;
    s32 v;

    if (arg0 == 0)
        return 0;
    if (*(s32 *)(arg0 + 0xC) != 7)
        return 0;
    p = *(s32 **)(arg0 + 0x2508);
    if (p == 0)
        return 0;
    v = *(s32 *)((char *)p + 0x53C);
    if (v == 0xB4 && v == 0x38)
        return 1;
    return 0;
}

```

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
