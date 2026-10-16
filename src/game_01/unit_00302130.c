#include "common.h"

extern s32 D_00509048;

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00302130", func_00302130);

s32 func_00302160(s32 arg0)
{
    D_00509048 = arg0;
    return 1;
}

s32 func_00302170(void)
{
    return D_00509048;
}
