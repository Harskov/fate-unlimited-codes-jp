# Exemplars for func_001B3AD0 — the 3 matched functions nearest by address

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
