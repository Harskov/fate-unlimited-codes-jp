#include "common.h"

extern s32 D_003D7A90[];

extern s16 D_0051FDE8[];

extern s32 D_00522DB0[];

void func_0020F180();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_001FE660);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_001FE7F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_001FE8A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_001FE9A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_001FEA40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_001FEB20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_001FEC10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_001FED00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_001FEDF0);

s32 func_001FEEE0(void)
{
    return D_003D7A90[0];
}

s32 func_001FEEF0(s32 arg0)
{
    D_003D7A90[0] = arg0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_001FEF00);

void func_001FEFB0(s32 arg0)
{
    func_0020F180(D_00522DB0, arg0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_001FEFC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_001FF000);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_001FFDC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_002002E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_00200360);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_002003C0);

s16 func_00200420(void)
{
    return D_0051FDE8[0];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_00200430);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_002004B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_00200550);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_00200580);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_00200630);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_00200650);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_00200690);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_002009A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_00200A90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_00200BB0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FE660", func_00200DF0);

int func_00200E30(int arg0)
{
    return arg0 & 0x0E0F7FFF;
}
