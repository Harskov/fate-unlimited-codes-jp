#include "common.h"

typedef struct Obj_00327C90 {
    unsigned char pad[0x358];
    s32 unk_358;
} Obj_00327C90;

typedef struct Obj {
    unsigned char unk_0[0x1C];
    int unk_1C;
} Obj;

void func_00328250(void);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327C00", func_00327C00);

int func_00327C20(Obj *p)
{
    return p->unk_1C;
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327C00", func_00327C30);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327C00", func_00327C40);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327C00", func_00327C50);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327C00", func_00327C60);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327C00", func_00327C70);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327C00", func_00327C80);

void func_00327C90(Obj_00327C90 *p, s32 arg1)
{
    p->unk_358 = arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327C00", func_00327CA0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327C00", func_00327CC0);

void func_00327CE0(void)
{
    func_00328250();
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327C00", func_00327CF0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00327C00", func_00327D10);
