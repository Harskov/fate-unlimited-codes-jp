# Exemplars for func_001AB2B0 — the 3 matched functions nearest by address

## func_001AA880 @ 0x001AA880 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Obj {
    unsigned char pad[0x1E4];
    unsigned int flags;
} Obj;

void func_001AA880(Obj *p)
{
    p->flags &= ~0x20;
}

```

## func_001AA4C0 @ 0x001AA4C0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Obj {
    int unk_0;
    unsigned int flags;
} Obj;

void func_001AA4C0(Obj *p)
{
    if (p->flags & 1) {
        p->flags |= 2;
    }
}

```

## func_001AA490 @ 0x001AA490 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Obj {
    int unk_0;
    unsigned int flags;
} Obj;

void func_001AA490(Obj *p)
{
    if (p->flags & 1) {
        p->flags |= 2;
    }
}

```
