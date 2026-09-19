# Exemplars for func_0016D070 — the 3 matched functions nearest by address

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

## func_0016E8F0 @ 0x0016E8F0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Vec {
    float unk_0;
    float unk_4;
    float unk_8;
    float unk_C;
} Vec;

float func_0016E8F0(Vec *a, Vec *b)
{
    return a->unk_0 * b->unk_0 + a->unk_4 * b->unk_4 + a->unk_8 * b->unk_8;
}

```

## func_0016E9E0 @ 0x0016E9E0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Vec {
    float unk_0;
    float unk_4;
    float unk_8;
    float unk_C;
} Vec;

void func_0016E9E0(Vec *dst, Vec *a, Vec *b)
{
    dst->unk_0 = a->unk_0 + b->unk_0;
    dst->unk_4 = a->unk_4 + b->unk_4;
    dst->unk_8 = a->unk_8 + b->unk_8;
}

```
