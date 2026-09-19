# Exemplars for func_0016CFD0 — the 3 matched functions nearest by address

## func_0016D000 @ 0x0016D000 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Vec {
    float unk_0;
    float unk_4;
    float unk_8;
    float unk_C;
} Vec;

void func_0016D000(Vec *dst, float x, float y, float z, float w)
{
    dst->unk_0 = x;
    dst->unk_4 = y;
    dst->unk_8 = z;
    dst->unk_C = w;
}

```

## func_0016D070 @ 0x0016D070 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Vec {
    float unk_0;
    float unk_4;
    float unk_8;
    float unk_C;
} Vec;

void func_0016D070(Vec *dst, Vec *src, float s)
{
    dst->unk_0 = src->unk_0 * s;
    dst->unk_4 = src->unk_4 * s;
    dst->unk_8 = src->unk_8 * s;
    dst->unk_C = src->unk_C * s;
}

```

## func_0016D0B0 @ 0x0016D0B0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Vec {
    float unk_0;
    float unk_4;
    float unk_8;
    float unk_C;
} Vec;

void func_0016D0B0(Vec *dst, Vec *a, Vec *b)
{
    dst->unk_0 = a->unk_0 - b->unk_0;
    dst->unk_4 = a->unk_4 - b->unk_4;
    dst->unk_8 = a->unk_8 - b->unk_8;
    dst->unk_C = a->unk_C - b->unk_C;
}

```
