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
