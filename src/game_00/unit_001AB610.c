#include "common.h"
#include "game_00/obj2524.h"
#include "game_00/tbl_0051C858.h"

typedef struct Obj001AD0E0 {
    int idx;
    unsigned char unk_4[4];
    int group;
    unsigned char unk_C[0x1F8 - 0xC];
    int flags;
    unsigned char unk_1FC[0x23A4 - 0x1FC];
    int unk_23A4;
    unsigned char unk_23A8[4];
    int slots[10];
    int unk_23D4;
} Obj001AD0E0;

typedef struct Sub {
    unsigned char pad[0x10];
    int field_10;
} Sub;

typedef struct Obj {
    unsigned char pad[0x1DC];
    int field_1DC;
    unsigned char pad1[0x238C - 0x1DC - 4];
    int field_238C;
    unsigned char pad2[0x2398 - 0x238C - 4];
    int field_2398;
    unsigned char pad3[0x23A8 - 0x2398 - 4];
    int field_23A8;
    unsigned char pad4[0x2440 - 0x23A8 - 4];
    int field_2440;
    unsigned char pad5[0x2448 - 0x2440 - 4];
    Sub *field_2448;
    unsigned char pad6[0x2508 - 0x2448 - 4];
    int field_2508;
} Obj;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AB610", func_001AB610);

void func_001AB770(Obj2524 *p, Obj53C *v)
{
    if (p != 0) {
        p->unk_2508 = v;
        if (p->unk_2448 != 0) {
            p->unk_2448->unk_10 = v;
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AB610", func_001AB7A0);

int func_001AB7D0(Obj *p)
{
    int v;
    if (p->field_2440 == 0 || p->field_2448 == 0 || (v = p->field_2448->field_10) == 0)
        v = p->field_2508;
    return v;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AB610", func_001AB810);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AB610", func_001AB9A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AB610", func_001ABA50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AB610", func_001ABC50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AB610", func_001ABFD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AB610", func_001AC240);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AB610", func_001AC280);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AB610", func_001AC2C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AB610", func_001AC300);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AB610", func_001AC400);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AB610", func_001AC640);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AB610", func_001ACC40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AB610", func_001ACD00);

void func_001AD0E0(Obj001AD0E0 *self, int index, int value, int bits)
{
    Node0051C858 *n;
    int i;
    int end;

    if (index < 0) {
        i = 0;
        end = 2;
    } else {
        i = index;
        end = index + 1;
    }

    self->flags |= 1;
    if (self->unk_23D4 <= 0)
        self->unk_23D4 = value;

    for (; i < end; i++) {
        if (self != 0 && (bits & 4) != 0 && i == self->group)
            continue;
        for (n = D_0051C858[i]->list; n != 0; n = n->next) {
            if ((bits & 2) != 0 && self == n->obj)
                continue;
            ((Obj001AD0E0 *)n->obj)->slots[self->idx] = value;
            ((Obj001AD0E0 *)n->obj)->unk_23A4 = bits;
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AB610", func_001AD1D0);

int func_001AD250(Obj *p, int arg1)
{
    if (p->field_23A8 != 0)
        goto ret1;
    if (p->field_238C != 0)
        goto ret1;
    if (arg1 == 0)
        goto ret0;
    if (p->field_2398 == 0)
        goto ret0;
    return 1;
ret1:
    return 1;
ret0:
    return 0;
}

int func_001AD2A0(Obj *p, int arg1)
{
    if (p->field_1DC & 0x80)
        return 0;
    if (p->field_23A8 != 0 || p->field_238C != 0)
        return 0;
    if (arg1 == 0 || p->field_2398 == 0)
        return 1;
    return 0;
}
