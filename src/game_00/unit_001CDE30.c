#include "common.h"

extern s32 D_0051EC78[];

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CDE30", func_001CDE30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CDE30", func_001CDE70);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CDE30", func_001CDEE0);

s32 func_001CDF50(s32 arg0)
{
    return D_0051EC78[arg0];
}

s32 func_001CDF70(s32 arg0, s32 arg1)
{
    s32 *p = &D_0051EC78[arg0];

    if (arg1 < *p)
        return 0;
    *p = arg1;
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CDE30", func_001CDFB0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CDE30", func_001CE060);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CDE30", func_001CE0F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CDE30", func_001CE2B0);

void func_001CE510(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CDE30", func_001CE520);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CDE30", func_001CE770);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CDE30", func_001CE8E0);
