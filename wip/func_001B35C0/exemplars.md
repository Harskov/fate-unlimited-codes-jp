# Exemplars for func_001B35C0 — the 3 matched functions nearest by address

## func_001B2E60 @ 0x001B2E60 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef int s32;

extern s32 D_00523B38[];
void func_001E7D20();

void func_001B2E60(char *arg0, s32 *arg1)
{
    s32 *p;

    if (*(s32 *)(arg0 + 0x1EC) & 0x2000) {
        p = (s32 *)arg1[1];
        *p |= 0x10;
    } else {
        p = (s32 *)arg1[1];
        *p &= ~0x10;
    }
    if (arg1[0] & 2) {
        p = (s32 *)arg1[1];
        *p |= 0x1000;
    } else {
        p = (s32 *)arg1[1];
        *p &= ~0x1000;
    }
    func_001E7D20(arg1[1], *(s32 *)*(s32 *)(arg0 + 0x3C), D_00523B38[*(s32 *)arg0]);
}

```

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
