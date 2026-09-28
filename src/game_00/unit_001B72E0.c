#include "common.h"

extern s16 D_0051D750[];

extern s32 D_0051D7A8[];

extern s32 D_0051D77C[];

extern f32 D_003D6E30[];

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B72E0", func_001B72E0);

s16 *func_001B7460(s32 arg0)
{
    if (arg0 >= 0 && arg0 < 4)
        return D_0051D750 + arg0 + 0x28;
    return 0;
}

s32 func_001B74A0(s32 arg0)
{
    if (arg0 >= 0 && arg0 < 4)
        return D_0051D7A8[arg0];
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B72E0", func_001B74E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B72E0", func_001B7560);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B72E0", func_001B7600);

s32 func_001B76B0(s32 arg0)
{
    if (arg0 >= 0 && arg0 < 4)
        return D_0051D77C[arg0];
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B72E0", func_001B76F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B72E0", func_001B7760);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B72E0", func_001B7820);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B72E0", func_001B7950);

void func_001B7BD0(f32 fparg0)
{
    D_003D6E30[0] = fparg0;
}

f32 func_001B7BE0(void)
{
    return D_003D6E30[0];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B72E0", func_001B7BF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B72E0", func_001B7C70);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B72E0", func_001B7CC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B72E0", func_001B7E60);
