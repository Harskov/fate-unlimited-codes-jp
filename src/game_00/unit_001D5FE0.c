#include "common.h"

void func_0019CA40();

void func_001D6790();

extern s32 D_0051EFA0[];

extern s32 D_0051EE90[];

extern s32 D_0051EF10[];

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D5FE0", func_001D5FE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D5FE0", func_001D6050);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D5FE0", func_001D63B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D5FE0", func_001D6550);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D5FE0", func_001D65D0);

void func_001D6650(void)
{
}

void func_001D6660(s32 arg0, s32 arg1, s32 arg2)
{
    if (arg2 < 0 || arg2 >= 0x20) {
        *(long long *)1 = 0;
    }
    D_0051EE90[arg2] = arg1;
}

void func_001D66A0(void)
{
}

void func_001D66B0(s32 arg0, s32 arg1, s32 arg2)
{
    if (arg2 < 0 || arg2 >= 0x20) {
        *(long long *)1 = 0;
    }
    D_0051EF10[arg2] = arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D5FE0", func_001D66F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D5FE0", func_001D6790);

void func_001D6800(s32 arg0)
{
    func_0019CA40(func_001D6790, arg0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D5FE0", func_001D6810);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001D5FE0", func_001D68E0);

void func_001D6DA0(s32 arg0)
{
    s32 i;

    for (i = 0; i < 100; i++) {
        if (arg0 == D_0051EFA0[i])
            D_0051EFA0[i] = -1;
    }
}

s32 func_001D6DE0(void)
{
    s32 i;

    for (i = 0; i < 100; i++) {
        if (D_0051EFA0[i] == -1) {
            D_0051EFA0[i] = i + 1000;
            return D_0051EFA0[i];
        }
    }
    return -1;
}

void func_001D6E30(void)
{
    s32 i;

    for (i = 0; i < 100; i++) {
        D_0051EFA0[i] = -1;
    }
}
