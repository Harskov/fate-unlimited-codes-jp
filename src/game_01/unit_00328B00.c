#include "common.h"

typedef struct Rec005319A8 {
    int unk_0;
    int unk_4;
    int unk_8;
} Rec005319A8;

extern Rec005319A8 D_005319A8[];

typedef struct Obj_00328BD0 {
    u8 pad[0x34];
    s32 unk_34;
} Obj_00328BD0;

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00328B00", func_00328B00);

void *func_00328BD0(Obj_00328BD0 *o)
{
    return &o->unk_34;
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00328B00", func_00328BE0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00328B00", func_00328D10);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00328B00", func_00328DD0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00328B00", func_00328EA0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00328B00", func_00328FB0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00328B00", func_00328FE0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00328B00", func_00329000);

void func_00329020(Obj_00328BD0 *o, int i, int v)
{
    if (o != 0) {
        s32 *base = *(s32 **)o->unk_34;
        base[i] = v;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00328B00", func_00329050);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00328B00", func_00329120);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00328B00", func_003291B0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00328B00", func_003291D0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00328B00", func_00329380);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00328B00", func_003294D0);

void func_00329650(int i, int v)
{
    Rec005319A8 *r = &D_005319A8[i];

    r->unk_0 = v;
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00328B00", func_00329670);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00328B00", func_003296C0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00328B00", func_00329720);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00328B00", func_003297B0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00328B00", func_00329830);

void func_00329960(void)
{
}

void func_00329970(void)
{
}

int func_00329980(void)
{
    return 0x110;
}
