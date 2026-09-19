# Exemplars for func_001B4330 — the 3 matched functions nearest by address

## func_001B4320 @ 0x001B4320 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef int s32;

extern s32 D_0051D728[];

void func_001B4320(void)
{
    D_0051D728[0] = 0;
}

```

## func_001B4240 @ 0x001B4240 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef int s32;

extern s32 D_0051D728[];

void func_001B4240(char *arg0)
{
    D_0051D728[0] -= 1;
    *(s32 *)(arg0 + 0x14) = -1;
}

```

## func_001B3920 @ 0x001B3920 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef int s32;

void func_001B3920(char *arg0, s32 arg1)
{
    s32 off = arg1 * 0xC8;
    char *p = arg0 + off + 0x5D0;

    if (*(s32 *)(p + 4) == 0) {
        return;
    }
    *(s32 *)p |= 1;
}

```
