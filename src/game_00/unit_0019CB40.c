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
    short flags;
    unsigned char unk_2[0x62];
} Rec00522E90;

typedef struct Ctx {
    int unk_0;
    int index;
} Ctx;

typedef struct Node {
    unsigned char pad[0xC];
    struct Node *next;
    struct Node *prev;
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
    if (i < 0)
        goto fail;
    if (i >= 10)
        goto fail;
    return D_0051C874[i].owner;
fail:
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019CB40", func_0019D0F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019CB40", func_0019D1E0);

void func_0019D4E0(Ctx *c, int clear)
{
    Rec00522E90 *r;

    if (c->unk_0 < 2) {
        r = &D_00522E90[c->index];
        if (clear != 0) {
            r->flags = r->flags & ~8;
        } else {
            r->flags = r->flags | 8;
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019CB40", func_0019D540);

void func_0019D6A0(int *p)
{
    int i = *p;

    D_0051C870[i].used = 0;
    D_0051C874[*p].owner = 0;
}

void func_0019D6E0(int *p)
{
    int i;

    for (i = 0; i < 10; i++) {
        if (D_0051C870[i].used == 0) {
            D_0051C870[i].used = 1;
            D_0051C874[i].owner = p;
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

Node *func_0019D850(Node *n)
{
    Node *prev = n->prev;
    prev->next = n->next;
    if (n->next != 0)
        n->next->prev = prev;
    return prev->next;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019CB40", func_0019D880);
