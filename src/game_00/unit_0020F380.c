#include "common.h"
#include "types.h"

extern s32 D_00522DA0[];

extern s32 D_00522DE8[];

extern s32 D_00522E10[];

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020F380", func_0020F380);

void func_0020F400(int v)
{
    D_00522DA0[0] = v;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020F380", func_0020F410);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020F380", func_0020F4B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020F380", func_0020F530);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020F380", func_0020F650);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020F380", func_0020F690);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020F380", func_0020F6C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020F380", func_0020F850);

s32 func_0020F860(void)
{
    return D_00522DE8[0];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020F380", func_0020F870);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020F380", func_0020F900);

void func_0020F9F0(void)
{
    D_00522E10[0] = 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020F380", func_0020FA00);
