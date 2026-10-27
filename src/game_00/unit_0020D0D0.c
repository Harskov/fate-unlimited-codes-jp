#include "common.h"

void func_00165EA0();

void func_00165EE0();

void func_0016CFD0(f32 *v, f32 x, ...);

f32 func_0016E8F0();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020D0D0", func_0020D0D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020D0D0", func_0020D1C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020D0D0", func_0020D420);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020D0D0", func_0020D610);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020D0D0", func_0020D6A0);

void func_0020D750(s32 arg0, s32 arg1, s32 arg2)
{
    f32 v[4];

    func_0016CFD0(v, -1.0f);
    func_0016CFD0(v, 2.0f * func_0016E8F0(arg2, v), arg2);
    func_00165EA0(v, v, arg2);
    func_00165EE0(arg0, v);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020D0D0", func_0020D7D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020D0D0", func_0020D9E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020D0D0", func_0020DBB0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020D0D0", func_0020DDA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020D0D0", func_0020DE10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020D0D0", func_0020DEC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020D0D0", func_0020DF80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020D0D0", func_0020DFE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020D0D0", func_0020E040);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020D0D0", func_0020E0A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020D0D0", func_0020E200);

f32 func_0020E410(f32 a, f32 b, f32 t)
{
    return a - t * (a - b);
}
