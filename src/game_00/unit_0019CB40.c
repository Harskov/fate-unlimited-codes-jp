#include "common.h"
#include "game_00/tbl_0051C870.h"

typedef struct Ent00531B60 {
    unsigned char unk_0[0x3C];
    int unk_3C;
    int unk_40[4];
    unsigned char unk_50[0x24];
} Ent00531B60;

typedef struct Obj {
    unsigned char unk_0[0x24FC];
    int unk_24FC;
} Obj;

typedef struct Rec00522E90 {
    /* 0x00 */ short unk_0;
    unsigned char unk_2[0x62];
} Rec00522E90;

typedef struct Ctx {
    int unk_0;
    /* 0x04 */ int unk_4;
} Ctx;

typedef struct Node {
    unsigned char unk_0[0xC];
    /* 0x0C */ struct Node *link_C;
    /* 0x10 */ struct Node *link_10;
} Node;

extern Ent00531B60 D_00531B60[];

extern Rec00522E90 D_00522E90[];

extern int D_0051C860[];

int func_0019CB40(void)
{
    Ent00531B60 *e;
    int i;
    int j;

    for (i = 0; i < 2; i++) {
        e = &D_00531B60[i];
        if (e->unk_3C != 0)
            return 1;
        for (j = 0; j < 4; j++) {
            if (e->unk_40[j] != 0)
                return 1;
        }
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019CB40", func_0019CBB0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019CB40", func_0019CDB0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019CB40", func_0019CFA0);

int func_0019CFF0(Obj *p)
{
    return p->unk_24FC;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019CB40", func_0019D000);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019CB40", func_0019D040);

int *func_0019D0B0(int i)
{
    if (i < 0 || i >= 10)
        return 0;
    return D_0051C874[i].unk_0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019CB40", func_0019D0F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019CB40", func_0019D1E0);

void func_0019D4E0(Ctx *c, int clear)
{
    Rec00522E90 *r;

    if (c->unk_0 < 2) {
        r = &D_00522E90[c->unk_4];
        if (clear != 0) {
            r->unk_0 = r->unk_0 & ~8;
        } else {
            r->unk_0 = r->unk_0 | 8;
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019CB40", func_0019D540);

void func_0019D6A0(int *p)
{
    int i = *p;

    D_0051C870[i].unk_0 = 0;
    D_0051C874[*p].unk_0 = 0;
}

void func_0019D6E0(int *p)
{
    int i;

    for (i = 0; i < 10; i++) {
        if (D_0051C870[i].unk_0 == 0) {
            D_0051C870[i].unk_0 = 1;
            D_0051C874[i].unk_0 = p;
            *p = i;
            break;
        }
    }
}

int func_0019D750(void)
{
    return D_0051C860[0];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019CB40", func_0019D760);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019CB40", func_0019D7F0);

Node *func_0019D850(Node *arg0)
{
    Node *p = arg0->link_10;
    p->link_C = arg0->link_C;
    if (arg0->link_C != 0)
        arg0->link_C->link_10 = p;
    return p->link_C;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019CB40", func_0019D880);
