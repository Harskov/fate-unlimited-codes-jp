# Exemplars for func_001B2E60 — the 3 matched functions nearest by address

## func_001B13C0 @ 0x001B13C0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef int s32;

s32 func_001B13C0(char *arg0)
{
    s32 a1 = *(s32 *)(arg0 + 0x1E0);

    if (a1 & 0x05008000)
        return 0;
    if (*(s32 *)(arg0 + 0x1EC) & 0xC00000)
        return 0;
    if (*(s32 *)(arg0 + 0x24B8) > 0)
        return 0;
    if (*(s32 *)(arg0 + 0x1E4) & 0xA00)
        return 0;
    if ((a1 & 0x02120000) && (*(s32 *)(arg0 + 0x53C) != 0x38))
        return 0;
    return 1;
}

```

## func_001B13B0 @ 0x001B13B0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef int s32;

void func_001218C8();

void func_001B13B0(s32 arg0)
{
    func_001218C8(arg0 + 0x14C4, 0, 0xA8);
}

```

## func_001B04D0 @ 0x001B04D0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef int s32;

extern s32 D_003D6DA0[];
extern s32 D_00523900[];

void func_001B04D0(s32 arg0, s32 arg1)
{
    s32 i;
    s32 *src;
    s32 *dst;

    i = 0;
    src = D_003D6DA0 + arg1 * 10;
    dst = D_00523900 + arg0 * 10;
    do {
        i += 5;
        dst[6] = src[0];
        dst[7] = src[1];
        dst[8] = src[2];
        dst[9] = src[3];
        dst[10] = src[4];
        src += 5;
        dst += 5;
    } while (i < 10);
}

```
