# Exemplars for func_001B3920 — the 3 matched functions nearest by address

## func_001B38F0 @ 0x001B38F0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef int s32;

void func_001B38F0(char *arg0, s32 arg1)
{
    s32 off = arg1 * 0xC8;

    *(s32 *)((s32)arg0 + off + 0x5D0) &= ~1;
}

```

## func_001B35C0 @ 0x001B35C0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef int s32;

void func_001B35C0(char *arg0, s32 arg1, s32 arg2)
{
    s32 off = arg1 * 0xC8;

    *(s32 *)(off + (s32)arg0 + 0x694) = arg2;
}

```

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
