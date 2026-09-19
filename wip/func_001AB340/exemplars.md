# Exemplars for func_001AB340 — the 3 matched functions nearest by address

## func_001AB330 @ 0x001AB330 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Obj {
    unsigned char pad[0x3C];
    void *field_3C;
} Obj;

void func_001F27D0();

void func_001AB330(Obj *p)
{
    func_001F27D0(p->field_3C);
}

```

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
