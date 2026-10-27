#include "common.h"

extern s32 D_0051EC78[];

void func_00254520(s32 arg0);

void func_002544C0(s32 arg0, s32 arg1, f32 arg2);

s32 func_0015B240(s32 arg0);

void func_00254560(s32 arg0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CDE30", func_001CDE30);

void func_001CDE70(void)
{
    func_00254520(1);
    func_00254520(2);
    func_002544C0(3, 0x1E, 1.0f);
    if (func_0015B240(0) == 0)
        func_002544C0(0, 0x1E, 1.0f);
}

void func_001CDEE0(void)
{
    func_00254560(1);
    func_00254560(2);
    func_002544C0(3, 0x1E, 0.33f);
    if (func_0015B240(0) == 0)
        func_002544C0(0, 0x1E, 0.33f);
}

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
