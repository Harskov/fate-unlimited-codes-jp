#include "common.h"

extern char D_00507258[];

int scePrintf(const char *fmt, ...);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00355180", sceCdMmode);

int func_00355250(void)
{
    scePrintf(D_00507258);
    return 2;
}
