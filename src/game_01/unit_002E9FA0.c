#include "common.h"

extern s32 D_00508F04;

extern s32 D_00508F08;

void func_002E9FA0(s32 arg0, s32 arg1)
{
    D_00508F04 = arg0;
    D_00508F08 = arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_002E9FA0", func_002E9FB0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_002E9FA0", func_002EA0B0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_002E9FA0", func_002EA120);
