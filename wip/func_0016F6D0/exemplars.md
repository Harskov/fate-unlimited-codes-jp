# Exemplars for func_0016F6D0 — the 3 matched functions nearest by address

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

## func_00175080 @ 0x00175080 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Vec {
    float unk_0;
    float unk_4;
    float unk_8;
    float unk_C;
} Vec;

float func_00175080(Vec *v)
{
    return v->unk_8;
}

```
