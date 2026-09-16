typedef unsigned int u32;
typedef unsigned char u8;

typedef struct Holder {
    unsigned char pad[8];
    u32 idx;
} Holder;

typedef struct Obj {
    unsigned char pad[0x1F4];
    u32 unk_1F4;
    unsigned char pad2[0x24BC - 0x1F8];
    s32 unk_24BC;
} Obj;

typedef struct Node {
    Obj *obj;
    unsigned char pad[4];
    struct Node *next;
} Node;

typedef struct List {
    unsigned char pad[0xC];
    Node *head;
} List;

extern List D_0051C858[];

int func_001A3EA0(Holder *h)
{
    Node *e;

    for (e = D_0051C858[h->idx].head; e != 0; e = e->next) {
        Obj *o = e->obj;
        if (o->unk_1F4 & 0x18000)
            return 0;
        if (o->unk_24BC > 0)
            return 0;
    }
    return 1;
}
