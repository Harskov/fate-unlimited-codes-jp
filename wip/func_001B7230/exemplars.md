# Exemplars for func_001B7230 — the 3 matched functions nearest by address

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

## func_001B6220 @ 0x001B6220 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef int s32;

extern s32 D_0051D754[];

s32 func_001B6220(void)
{
    return D_0051D754[0];
}

```

## func_001B5F30 @ 0x001B5F30 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef int s32;

extern s32 D_0051D740[];

void func_001B5DC0();

void func_001B5F30(s32 arg0)
{
    func_001B5DC0(arg0, D_0051D740);
}

```
