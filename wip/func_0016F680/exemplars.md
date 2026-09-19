# Exemplars for func_0016F680 — the 3 matched functions nearest by address

## func_0016F6D0 @ 0x0016F6D0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Vec {
    float unk_0;
    float unk_4;
    float unk_8;
    float unk_C;
} Vec;

void func_0016F6D0(Vec *dst, Vec *a, Vec *b)
{
    dst->unk_0 = a->unk_0 + b->unk_0;
    dst->unk_4 = a->unk_4 + b->unk_4;
    dst->unk_8 = a->unk_8 + b->unk_8;
    dst->unk_C = a->unk_C + b->unk_C;
}

```

## func_001711F0 @ 0x001711F0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef unsigned int u32;

extern u32 D_0051D8A0[];

int func_001711F0(void)
{
    u32 v = D_0051D8A0[0] & 0x20000000;
    return (v != 0) ^ 1;
}

```

## func_00175070 @ 0x00175070 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Vec {
    float unk_0;
    float unk_4;
    float unk_8;
    float unk_C;
} Vec;

float func_00175070(Vec *v)
{
    return v->unk_C;
}

```
