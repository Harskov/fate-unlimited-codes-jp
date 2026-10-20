#include "common.h"

extern s32 D_00522D80[];

void func_00123470();

s32 func_0020E430(s32 a, s32 b, f32 t)
{
    f32 fa = (f32)a;
    f32 fb = (f32)b;
    return (s32)(fa - t * (fa - fb));
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020E430", func_0020E470);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020E430", func_0020E4A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020E430", func_0020E520);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020E430", func_0020E570);

s32 func_0020E5A0(s32 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 clamped;

    clamped = 0;
    *arg0 += arg1;
    if (*arg0 < arg2) {
        *arg0 = arg2;
        clamped = 1;
    }
    if (*arg0 > arg3) {
        *arg0 = arg3;
        clamped = 1;
    }
    return clamped;
}

s32 func_0020E5F0(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    arg0 += arg1;
    if (arg0 < arg2)
        arg0 = arg2;
    if (arg3 < arg0)
        arg0 = arg3;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020E430", func_0020E620);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020E430", func_0020E6B0);

void func_0020E720(s32 arg0)
{
    if (arg0 == 0)
        arg0 += 1;
    D_00522D80[0] = arg0;
    func_00123470();
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020E430", func_0020E740);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020E430", func_0020E7D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020E430", func_0020E850);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020E430", func_0020E8C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020E430", func_0020E920);

void func_0020EB50(void)
{
}
