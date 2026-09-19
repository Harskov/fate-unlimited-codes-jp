# Exemplars for func_001B8250 — the 3 matched functions nearest by address

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

## func_001B76B0 @ 0x001B76B0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef int s32;

extern s32 D_0051D77C[];

s32 func_001B76B0(s32 arg0)
{
    if (arg0 >= 0 && arg0 < 4)
        return D_0051D77C[arg0];
    return 0;
}

```
