# Exemplars for func_001B5F30 — the 3 matched functions nearest by address

## func_001B5800 @ 0x001B5800 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef int s32;

s32 func_001B5800(s32 arg0, s32 arg1)
{
    return arg0 + arg1;
}

```

## func_001B57E0 @ 0x001B57E0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef int s32;

void func_001B5800();

void func_001B57E0(s32 *arg0, s32 *arg1, s32 arg2)
{
    *arg1 += arg2;
    func_001B5800(arg0, arg2);
}

```

## func_001B4320 @ 0x001B4320 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef int s32;

extern s32 D_0051D728[];

void func_001B4320(void)
{
    D_0051D728[0] = 0;
}

```
