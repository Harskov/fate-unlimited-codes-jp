#include "common.h"

f32 func_0020E740(f32 arg0, f32 arg1);

void func_00165EE0(f32 *arg0, f32 *arg1);

void func_00165EA0(f32 *arg0);

void func_0016CFD0(f32 *arg0, f32 *arg1, f32 arg2);

void func_0016E9E0(void *arg0, void *arg1, f32 *arg2);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001723B0", func_001723B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001723B0", func_001727B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001723B0", func_00172D80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001723B0", func_00172ED0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001723B0", func_00172F60);

void func_00172FF0(f32 *arg0)
{
    arg0[0] = func_0020E740(-1.0f, 1.0f);
    arg0[1] = func_0020E740(-1.0f, 1.0f);
    arg0[2] = func_0020E740(-1.0f, 1.0f);
    func_00165EE0(arg0, arg0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001723B0", func_00173070);

void func_00173130(void *arg0, s32 arg1, void *arg2, f32 arg3)
{
    f32 v[4];

    func_00165EA0(v);
    func_0016CFD0(v, v, arg3);
    func_0016E9E0(arg0, arg2, v);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001723B0", func_00173190);

void func_001734F0(void *arg0, f32 *arg1)
{
    f32 zero = 0.0f;

    if (zero == arg1[0] && zero == arg1[1] && zero == arg1[2])
        arg1[0] = 0.0001f;
    func_00173550();
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001723B0", func_00173550);
