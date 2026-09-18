# Exemplars for func_00175070 — the 3 matched functions nearest by address

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

## func_00175B10 @ 0x00175B10 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
int func_00175B10(float t)
{
    float v;
    int n;

    v = 60.0f * t;
    if (v > 0.0f)
        n = (int)(0.5f + v);
    else
        n = (int)(v - 0.5f);

    if (n < 0)
        n = 0;
    return n;
}

```
