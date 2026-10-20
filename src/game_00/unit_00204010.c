#include "common.h"

void func_00204740();

extern s32 D_003D7B18[];

extern s32 D_00522B08[];

extern s32 *D_00522B0C[];

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00204010", func_00204010);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00204010", func_00204090);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00204010", func_00204270);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00204010", func_002043E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00204010", func_00204420);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00204010", func_002044A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00204010", func_00204650);

void func_00204730(s32 arg0, s32 arg1)
{
    func_00204740(arg0, arg1, 1);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00204010", func_00204740);

void func_002047D0(int arg0, int arg1)
{
    func_00204740(arg0, arg1, 0);
}

int func_002047E0(void)
{
    return 0;
}

s32 *func_002047F0(void)
{
    return D_003D7B18;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00204010", func_00204800);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00204010", func_00204860);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00204010", func_00204900);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00204010", func_00204A10);

void func_00204A70(void)
{
}

s32 func_00204A80(s32 idx)
{
    s32 *tbl = D_00522B0C[0];
    s32 r;

    if (idx > 0 && idx < D_00522B08[0]) {
        r = tbl[idx];
    } else {
        r = tbl[2];
    }
    return r;
}
