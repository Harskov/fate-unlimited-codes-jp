#include "common.h"

extern s32 D_00522D30[];

extern s32 D_00522D34[];

void func_002024D0(s32, s32, u8 *);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00201620", func_00201620);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00201620", func_002016C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00201620", func_00201A30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00201620", func_00201E10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00201620", func_00201E40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00201620", func_00201F90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00201620", func_00202010);

int func_00202050(void)
{
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00201620", func_00202060);

s32 func_00202120(void)
{
    return D_00522D30[0];
}

s32 func_00202130(void)
{
    return D_00522D34[0];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00201620", func_00202140);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00201620", func_00202470);

void func_002024C0(s32 arg0, s32 arg1, s32 arg2, u8 *arg3)
{
    func_002024D0(arg0, arg2, arg3 + 0x10);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00201620", func_002024D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00201620", func_00202860);
