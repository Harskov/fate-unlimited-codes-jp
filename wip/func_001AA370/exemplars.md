# Exemplars for func_001AA370 — the 3 matched functions nearest by address

## func_001AA340 @ 0x001AA340 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Obj {
    int unk_0;
    unsigned int flags;
} Obj;

void func_001AA340(Obj *p)
{
    if (p->flags & 1) {
        p->flags &= ~2;
    }
}

```

## func_001AA310 @ 0x001AA310 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Obj {
    int unk_0;
    unsigned int flags;
} Obj;

void func_001AA310(Obj *p)
{
    if (p->flags & 1) {
        p->flags &= ~2;
    }
}

```

## func_001AA230 @ 0x001AA230 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Obj {
    int unk_0;
    unsigned int flags;
} Obj;

void func_001AA230(Obj *p)
{
    p->flags = p->flags & 0xFFFFFFFE;
}

```
