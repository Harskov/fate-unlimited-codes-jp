# Exemplars for func_001B74A0 — the 3 matched functions nearest by address

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

## func_001B6F00 @ 0x001B6F00 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef float f32;

typedef struct Vec { f32 x; f32 y; f32 z; } Vec;

void func_001B6F00(f32 *out, Vec *a, Vec *b, Vec *c)
{
    if (out == 0)
        return;
    if (a == 0)
        return;
    if (b == 0)
        return;
    if (c == 0)
        return;

    out[0] = (b->y - a->y) * (c->z - a->z) - (b->z - a->z) * (c->y - a->y);
    out[1] = (b->z - a->z) * (c->x - a->x) - (b->x - a->x) * (c->z - a->z);
    out[2] = (b->x - a->x) * (c->y - a->y) - (b->y - a->y) * (c->x - a->x);
}

```
