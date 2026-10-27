#include "common.h"
#include "types.h"

void func_002E58F0(void);

extern s32 D_00522D18[];

void func_002C1CE0();

void func_00200F30();

void func_002059D0();

void func_0020A1B0();

extern s8 D_00522D19[];

extern s8 D_00522D1A[];

void func_00209950();

void func_00253870();

void func_002098A0(void)
{
}

void func_002098B0(s32 arg0, s32 arg1)
{
    void func_002099F0(s32 arg0);

    func_002099F0(arg0);
    func_002098A0();
    func_00209950(arg0, 0);
    if (arg1 != 0) {
        func_00253870();
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002098A0", func_00209910);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002098A0", func_00209950);

void func_002099F0(s32 arg0)
{
    func_00200F30();
    func_002059D0();
    func_0020A1B0(arg0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002098A0", func_00209A30);

void func_00209A70(void)
{
}

void func_00209A80(s8 arg0, s8 arg1, s8 arg2)
{
    ((s8 *)D_00522D18)[0] = arg0;
    D_00522D19[0] = arg1;
    D_00522D1A[0] = arg2;
}

s32 *func_00209AA0(void)
{
    return D_00522D18;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002098A0", func_00209AB0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002098A0", func_00209B60);

void func_00209C60(void)
{
    func_002E58F0();
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002098A0", func_00209C70);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002098A0", func_00209D00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002098A0", func_00209DF0);

void func_00209E70(void)
{
    f32 vals[6];

    vals[5] = -150.0f;
    vals[4] = -150.0f;
    vals[3] = -150.0f;
    vals[2] = 150.0f;
    vals[1] = 150.0f;
    vals[0] = 150.0f;

    func_002C1CE0(vals);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002098A0", func_00209EB0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002098A0", func_00209EE0);
