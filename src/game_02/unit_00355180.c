#include "common.h"

extern s32 D_00507258[];

extern s32 scePrintf(s32 *);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00355180", sceCdMmode);

s32 func_00355250(void)
{
    scePrintf(D_00507258);
    return 2;
}
