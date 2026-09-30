#include "common.h"
#include "types.h"

extern s32 D_003D7BC8[];

extern u32 D_00522E08[];

extern u32 D_00522E18[];

extern s32 DelayThread(s32 usec);

extern s32 D_00522E10[];

s32 func_0020FA40(void)
{
    return D_00522E10[0];
}

void func_0020FA50(void)
{
    if (D_003D7BC8[0] != -1 && D_00522E08[0] <= D_00522E18[0]) {
        do {
            DelayThread(1);
        } while (D_00522E08[0] <= D_00522E18[0]);
    }
}

void func_0020FAC0(u32 v)
{
    D_00522E18[0] = v;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020FA40", func_0020FAD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020FA40", func_0020FAE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020FA40", func_0020FC50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020FA40", func_0020FCD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020FA40", func_0020FFD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020FA40", func_002108E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020FA40", func_00210AF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020FA40", func_00210B30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020FA40", func_00210BB0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020FA40", func_00210C00);
