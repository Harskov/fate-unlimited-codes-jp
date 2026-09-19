# Exemplars for func_001AB7D0 — the 3 matched functions nearest by address

## func_001AB770 @ 0x001AB770 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Sub {
    unsigned char pad[0x10];
    int field_10;
} Sub;

typedef struct Obj {
    unsigned char pad[0x2448];
    Sub *field_2448;
    unsigned char pad2[0x2508 - 0x2448 - 4];
    int field_2508;
} Obj;

void func_001AB770(Obj *p, int v)
{
    if (p != 0) {
        p->field_2508 = v;
        if (p->field_2448 != 0) {
            p->field_2448->field_10 = v;
        }
    }
}

```

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
