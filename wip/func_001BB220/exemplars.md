# Exemplars for func_001BB220 — the 3 matched functions nearest by address

## func_001BB140 @ 0x001BB140 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef int s32;

s32 func_001BB140(char *arg0)
{
    s32 *p;

    if (arg0 == 0)
        return 0;
    if (*(s32 *)(arg0 + 0xC) != 0x11)
        return 0;
    p = (s32 *)(arg0 + 0x2524);
    if (p != 0)
        return *p > 0;
    return 0;
}

```

## func_001B7BE0 @ 0x001B7BE0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef float f32;

extern f32 D_003D6E30[];

f32 func_001B7BE0(void)
{
    return D_003D6E30[0];
}

```

## func_001B7BD0 @ 0x001B7BD0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef float f32;

extern f32 D_003D6E30[];

void func_001B7BD0(f32 fparg0)
{
    D_003D6E30[0] = fparg0;
}

```
