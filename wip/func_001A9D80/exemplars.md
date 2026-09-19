# Exemplars for func_001A9D80 — the 3 matched functions nearest by address

## func_001A9A00 @ 0x001A9A00 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Obj {
    unsigned char pad[0x1E0];
    unsigned int flags;
    unsigned char pad2[8];
    unsigned int flags2;
} Obj;

int func_001A9A00(Obj *p)
{
    unsigned int v = p->flags;
    if (v & 0x20000)
        return 1;
    if (v & ~0x1107)
        return 0;
    return !(p->flags2 & 0x10000100);
}

```

## func_001AA1F0 @ 0x001AA1F0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Obj {
    int unk_0;
    unsigned int flags;
} Obj;

void func_001AA1F0(Obj *p)
{
    p->flags &= ~1;
}

```

## func_001AA210 @ 0x001AA210 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Obj {
    int unk_0;
    unsigned int flags;
} Obj;

void func_001AA210(Obj *p)
{
    p->flags = p->flags & 0xFFFFFFFE;
}

```
