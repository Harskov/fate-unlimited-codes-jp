#include "common.h"

extern s32 D_00509088;

extern s32 D_0050908C;

extern s32 D_00509090;

void func_00312818(s32 arg0, s32 arg1)
{
    D_0050908C = arg0;
    D_00509090 = arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00312818", func_00312828);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00312818", func_00312888);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00312818", func_00312918);

s32 func_00312A58(void)
{
    return D_00509088;
}
