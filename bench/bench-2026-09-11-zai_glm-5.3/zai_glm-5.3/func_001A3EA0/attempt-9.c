typedef unsigned int u32;

typedef struct Obj {
    unsigned char pad[0x1F4];
    u32 flags;
    unsigned char pad2[0x22C4];
    int cnt;
} Obj;

typedef struct Node {
    Obj *obj;
    unsigned char pad[8];
    struct Node *next;
} Node;

typedef struct Head {
    unsigned char pad[0xC];
    Node *head;
} Head;

typedef struct Holder {
    unsigned char pad[8];
    int idx;
} Holder;

extern Head *D_0051C858[];

int func_001A3EA0(Holder *h)
{
    Node *e = D_0051C858[h->idx]->head;
    while (e != 0) {
        Obj *o = e->obj;
        if ((o->flags & 0x18000) == 0) {
            if (o->cnt > 0)
                return 0;
        } else {
            return 0;
        }
        e = e->next;
    }
    return 1;
}
