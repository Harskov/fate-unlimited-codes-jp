# Exemplars for func_001B74E0 — the 3 matched functions nearest by address

## func_001B74A0 @ 0x001B74A0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef int s32;

extern s32 D_0051D7A8[];

s32 func_001B74A0(s32 arg0)
{
    if (arg0 >= 0 && arg0 < 4)
        return D_0051D7A8[arg0];
    return 0;
}

```

## func_001B7460 @ 0x001B7460 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef int s32;
typedef short s16;

extern s16 D_0051D750[];

s16 *func_001B7460(s32 arg0)
{
    if (arg0 >= 0 && arg0 < 4)
        return D_0051D750 + arg0 + 0x28;
    return 0;
}

```

## func_001B7230 @ 0x001B7230 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef int s32;

extern s32 D_0051D760[];

s32 func_001B7230(s32 *arg0)
{
    if (arg0 != 0) {
        D_0051D760[0] += 1;
        *arg0 |= 0x100;
    }
    return D_0051D760[0];
}

```
