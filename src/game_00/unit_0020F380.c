#include "common.h"
#include "types.h"

extern s32 D_00522DA0[];

extern s32 D_00522DE8[];

extern s32 D_00522E10[];

extern s16 D_00522E90[];

extern s16 D_00522EF4[];

extern s32 D_00522E08[];

extern s32 D_00522E20[];

void func_0020FAE0();

extern s32 D_00523D90[];

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020F380", func_0020F380);

void func_0020F400(int v)
{
    D_00522DA0[0] = v;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020F380", func_0020F410);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020F380", func_0020F4B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020F380", func_0020F530);

void func_0020F650(void)
{
    func_0020FAE0(D_00522E90, D_00522E20);
    D_00522E10[0] = D_00522E08[0];
    D_00522E08[0] = 0;
}

void func_0020F690(void)
{
    D_00522E90[0] &= ~8;
    D_00522EF4[0] &= ~8;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020F380", func_0020F6C0);

void *func_0020F850(void *arg0)
{
    return arg0;
}

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

s32 func_0020FA00(void)
{
    D_00522E08[0] += 1;
    D_00523D90[0] += 1;
    asm {
        sync
        ei
    }
    return 0;
}
