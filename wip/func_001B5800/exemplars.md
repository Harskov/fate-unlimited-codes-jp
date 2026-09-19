# Exemplars for func_001B5800 — the 3 matched functions nearest by address

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

## func_001B3F70 @ 0x001B3F70 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef int s32;
typedef float f32;

s32 func_001B3F70(s32 arg0)
{
    f32 step = 0.0f;
    s32 i;
    f32 limit = 25.5f;
    f32 half = 0.5f;

    for (i = 0; i < 10; i++) {
        if ((s32)(half + step) >= arg0) {
            break;
        }
        step += limit;
    }
    return i;
}

```
