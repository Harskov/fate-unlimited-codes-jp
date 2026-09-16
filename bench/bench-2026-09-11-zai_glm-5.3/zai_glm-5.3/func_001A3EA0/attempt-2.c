typedef int s32;

typedef struct Holder {
    unsigned char pad[8];
    s32 idx;
} Holder;

typedef struct Obj {
    unsigned char pad[0x1F4];
    unsigned : 15;
    unsigned bits : 2;
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

extern List *D_0051C858[];

int func_001A3EA0(Holder *h)
{
    Node *e;

    for (e = D_0051C858[h->idx]->head; e != 0; e = e->next) {
        Obj *o = e->obj;
        if (!o->bits) {
            if (o->unk_24BC > 0)
                return 0;
        } else {
            return 0;
        }
    }
    return 1;
}
