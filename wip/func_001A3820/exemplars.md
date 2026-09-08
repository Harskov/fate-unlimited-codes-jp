# Exemplars for func_001A3820 — the 3 matched functions nearest by address

## func_001A3A80 @ 0x001A3A80 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Obj {
    unsigned char unk_0[0x230];
    int flags;
} Obj;

int func_001A3A80(Obj *o, unsigned short mask)
{
    return o->flags & mask;
}

```

## func_001A3E30 @ 0x001A3E30 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Obj {
    unsigned char unk_0[0x1F0];
    int unk_1F0;
    unsigned char unk_1F4[0x24C0 - 0x1F4];
    int unk_24C0;
} Obj;

typedef struct Node {
    Obj *obj;
    unsigned char unk_4[8];
    struct Node *next;
} Node;

typedef struct Entry {
    unsigned char unk_0[0xC];
    Node *list;
} Entry;

typedef struct Ctx {
    unsigned char unk_0[8];
    int index;
} Ctx;

extern Entry *D_0051C858[];

int func_001A3E30(Ctx *c)
{
    Node *n;

    for (n = D_0051C858[c->index]->list; n != 0; n = n->next) {
        Obj *o = n->obj;
        if (o->unk_1F0 & 0x10)
            return 0;
        if (o->unk_24C0 > 0)
            return 0;
    }
    return 1;
}

```

## func_001A3EA0 @ 0x001A3EA0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Obj {
    unsigned char unk_0[0x1F4];
    int unk_1F4;
    unsigned char unk_1F8[0x24BC - 0x1F8];
    int unk_24BC;
} Obj;

typedef struct Node {
    Obj *obj;
    unsigned char unk_4[8];
    struct Node *next;
} Node;

typedef struct Entry {
    unsigned char unk_0[0xC];
    Node *list;
} Entry;

typedef struct Ctx {
    unsigned char unk_0[8];
    int index;
} Ctx;

extern Entry *D_0051C858[];

int func_001A3EA0(Ctx *c)
{
    Node *n;

    for (n = D_0051C858[c->index]->list; n != 0; n = n->next) {
        Obj *o = n->obj;
        if (o->unk_1F4 & 0x18000)
            return 0;
        if (o->unk_24BC > 0)
            return 0;
    }
    return 1;
}

```
