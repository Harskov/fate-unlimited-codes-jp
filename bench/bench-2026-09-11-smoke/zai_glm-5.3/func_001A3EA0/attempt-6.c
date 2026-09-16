typedef unsigned int u32;
typedef int s32;

typedef struct Ent {
    unsigned char pad[0x1F4];
    u32 unk_1F4;
    unsigned char pad2[0x22C4];
    s32 unk_24BC;
} Ent;

typedef struct Node {
    Ent *ent;
    unsigned char pad[8];
    struct Node *next;
} Node;

typedef struct Holder {
    unsigned char pad[0xC];
    Node *head;
} Holder;

typedef struct Ctrl {
    unsigned char pad[8];
    s32 idx;
} Ctrl;

extern Holder *D_0051C858[];

int func_001A3EA0(Ctrl *a)
{
    Node *n;

    for (n = D_0051C858[a->idx]->head; n != 0; n = n->next) {
        Ent *e = n->ent;
        if ((e->unk_1F4 & 0x18000) != 0)
            return 0;
        if (e->unk_24BC > 0)
            return 0;
    }
    return 1;
}
