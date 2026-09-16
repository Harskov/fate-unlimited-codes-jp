typedef struct Ent {
    unsigned char pad[0x1F4];
    s32 unk_1F4;
    unsigned char pad2[0x2C4];
    s32 unk_24BC;
} Ent;

typedef struct Node {
    Ent *ent;
    unsigned char pad[8];
    struct Node *next;
} Node;

typedef struct Ctrl {
    unsigned char pad[8];
    s32 idx;
} Ctrl;

extern s32 D_0051C858[];

int func_001A3EA0(Ctrl *a)
{
    Node *n;

    for (n = *(Node **)&D_0051C858[a->idx]; n != 0; n = n->next) {
        Ent *e = n->ent;
        if ((e->unk_1F4 & 0x18000) || e->unk_24BC > 0)
            return 0;
    }
    return 1;
}
