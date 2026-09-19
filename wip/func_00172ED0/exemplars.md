# Exemplars for func_00172ED0 — the 3 matched functions nearest by address

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

## func_00175090 @ 0x00175090 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
unsigned int *func_00175090(int a, int b, unsigned int *p)
{
    if (((*p >> 8) & 0xFF) != 0)
        return p;
    return p + 1;
}

```
