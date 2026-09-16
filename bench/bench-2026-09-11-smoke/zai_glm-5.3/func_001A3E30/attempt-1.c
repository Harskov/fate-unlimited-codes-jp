typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;

typedef struct Obj {
    unsigned char unk_0[0x1F0];
    u32 unk_1F0;
    unsigned char unk_1F4[0x22CC];
    s32 unk_24C0;
} Obj;

typedef struct Node {
    Obj *unk_0;
    unsigned char unk_4[8];
    struct Node *unk_C;
} Node;

typedef struct Ent {
    unsigned char unk_0[0xC];
    Node *unk_C;
} Ent;

typedef struct Ctrl {
    unsigned char unk_0[8];
    s32 unk_8;
} Ctrl;

extern Ent *D_0051C858[];

int func_001A3E30(Ctrl *arg0)
{
    Node *n;

    n = D_0051C858[arg0->unk_8]->unk_C;
    if (n == 0)
        return 1;
    do {
        Obj *o = n->unk_0;
        if (o->unk_1F0 & 0x10)
            return 0;
        if (o->unk_24C0 > 0)
            return 0;
        n = n->unk_C;
    } while (n != 0);
    return 1;
}
