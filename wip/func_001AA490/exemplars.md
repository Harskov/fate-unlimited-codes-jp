# Exemplars for func_001AA490 — the 3 matched functions nearest by address

## func_001AA460 @ 0x001AA460 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Obj {
    int unk_0;
    unsigned int flags;
} Obj;

void func_001AA460(Obj *p)
{
    if (p->flags & 1) {
        p->flags |= 2;
    }
}

```

## func_001AA370 @ 0x001AA370 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Obj {
    int unk_0;
    unsigned int flags;
} Obj;

void func_001AA370(Obj *p)
{
    if (p->flags & 1) {
        p->flags &= ~2;
    }
}

```

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
