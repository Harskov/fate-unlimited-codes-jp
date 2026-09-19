# Exemplars for func_001B0380 — the 3 matched functions nearest by address

## func_001AE860 @ 0x001AE860 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Sub001AE860 {
    unsigned char unk_0[2];
    unsigned char flags;
    unsigned char unk_3;
} Sub001AE860;

typedef struct Item001AE860 {
    int mask;
    short id;
    unsigned char unk_6[6];
    Sub001AE860 *sub;
} Item001AE860;

typedef struct Group001AE860 {
    unsigned char unk_0[0x19C];
    int count;
    Item001AE860 *items;
} Group001AE860;

typedef struct Ctx001AE860 {
    unsigned char unk_0[0x3C];
    Group001AE860 *group;
} Ctx001AE860;

void func_001AE860(Ctx001AE860 *c, int id, int on, int mask, int keep)
{
    int f;
    Sub001AE860 *s;
    int i;
    Item001AE860 *it;

    it = c->group->items;
    if (it == 0)
        return;

    for (i = 0; i < c->group->count; i++, it++) {
        if ((mask & it->mask) != 0) {
            s = it->sub;
            f = s->flags;
            if (id == it->id) {
                if (on != 0) {
                    f |= 4;
                } else {
                    f &= ~4;
                }
            } else if (keep == 0) {
                f &= ~4;
            }
            s->flags = f;
        }
    }
}

```

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
