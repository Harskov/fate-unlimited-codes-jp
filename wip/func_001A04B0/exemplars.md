# Exemplars for func_001A04B0 — the 3 matched functions nearest by address

## func_001A27C0 @ 0x001A27C0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Inner001A27C0 {
    unsigned char unk_0[0x5C];
    int unk_5C;
} Inner001A27C0;

typedef struct Outer001A27C0 {
    unsigned char unk_0[0xC];
    Inner001A27C0 *unk_C;
} Outer001A27C0;

int func_001A27C0(Outer001A27C0 *o, int n)
{
    return o->unk_C->unk_5C + n;
}

```

## func_001A2930 @ 0x001A2930 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
int func_001A2930(void)
{
    return 0;
}

```

## func_0019DCC0 @ 0x0019DCC0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Sub {
    unsigned char pad[0xC];
    int unkC;
} Sub;

typedef struct Obj {
    unsigned char pad[0x2510];
    Sub *unk2510;
} Obj;

int func_0019DCC0(Obj *arg0)
{
    Sub *s = arg0->unk2510;
    if (s == 0)
        return 0x282;
    if (s->unkC == 1)
        return 0x284;
    return 0x282;
}

```
