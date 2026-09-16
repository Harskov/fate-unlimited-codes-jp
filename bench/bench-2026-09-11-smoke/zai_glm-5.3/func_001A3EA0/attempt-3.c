typedef struct Ent {
    unsigned char pad[0x1F4];
    int unk_1F4;
    unsigned char pad2[0x2C4];
    int unk_24BC;
} Ent;

typedef struct Node {
    Ent *ent;
    unsigned char pad[8];
    struct Node *next;
} Node;

typedef struct Head {
    unsigned char pad[0xC];
    Node *head;
} Head;

typedef struct Ctrl {
    unsigned char pad[8];
    int idx;
} Ctrl;

extern Head *D_0051C858[];

int func_001A3EA0(Ctrl *a)
{
    Node *n;

    for (n = D_0051C858[a->idx]->head; n != 0; n = n->next) {
        Ent *e = n->ent;
        if ((e->unk_1F4 & 0x18000) == 0) {
            if (e->unk_24BC > 0)
                return 0;
        } else {
            return 0;
        }
    }
    return 1;
}
