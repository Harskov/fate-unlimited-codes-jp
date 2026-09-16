typedef unsigned int u32;

typedef struct Flags {
    unsigned char pad[0x1F4];
    u32 unk_1F4;
} Flags;

typedef struct Cnt {
    unsigned char pad[0x24BC];
    int unk_24BC;
} Cnt;

typedef struct Node {
    void *obj;
    unsigned char pad[8];
    struct Node *next;
} Node;

typedef struct ListHead {
    unsigned char pad[0xC];
    Node *head;
} ListHead;

typedef struct Holder {
    unsigned char pad[8];
    u32 idx;
} Holder;

extern ListHead *D_0051C858[];

int func_001A3EA0(Holder *h)
{
    Node *e;

    e = D_0051C858[h->idx]->head;
    while (e != 0) {
        void *o = e->obj;
        if ((((Flags *)o)->unk_1F4 & 0x18000) == 0) {
            if (((Cnt *)o)->unk_24BC > 0)
                return 0;
        }
        e = e->next;
    }
    return 1;
}
