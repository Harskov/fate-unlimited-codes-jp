# Exemplars for func_001AE860 — the 3 matched functions nearest by address

## func_001AE7D0 @ 0x001AE7D0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Obj {
    unsigned char pad[0x3C];
    void *field_3C;
} Obj;

void func_002032B0(void *);

void func_001AE7D0(Obj *p)
{
    func_002032B0(p->field_3C);
}

```

## func_001AE7A0 @ 0x001AE7A0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Sub {
    unsigned char pad[0xC];
    int field_C;
} Sub;

typedef struct Mid {
    unsigned char pad[0x58];
    Sub *field_58;
} Mid;

typedef struct Obj {
    unsigned char pad[0x3C];
    Mid *field_3C;
} Obj;

void func_001AE7A0(Obj *p)
{
    Mid *m = p->field_3C;
    if (m != 0) {
        Sub *s = m->field_58;
        if (s != 0) {
            s->field_C |= 0x2000;
        }
    }
}

```

## func_001AE2F0 @ 0x001AE2F0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Sub {
    int field_0;
    int field_4;
    int field_8;
    float field_C;
    unsigned char pad[0x8];
    int field_18;
    unsigned char pad2[0x20];
    int field_3C;
} Sub;

typedef struct Obj {
    unsigned char pad[0x44];
    void *field_44[0x40];
    unsigned char pad2[0x184 - 0x44 - 0x100];
    Sub sub;
    unsigned char pad3[0x53C - 0x184 - sizeof(Sub)];
    int field_53C;
    unsigned char pad4[0x5C0 - 0x53C - 4];
    float field_5C0;
} Obj;

void func_001AE2F0(Obj *p, int arg1)
{
    Sub *s = &p->sub;
    if (arg1 < 0)
        return;
    s->field_0 = arg1;
    s->field_4 = 0;
    s->field_8 = 0;
    s->field_C = p->field_5C0;
    s->field_18 = p->field_53C;
    if (arg1 < 0x40) {
        void *v = p->field_44[arg1];
        if (v != 0) {
            s->field_3C = *(int *)((char *)v + 0x38);
        }
    }
}

```
