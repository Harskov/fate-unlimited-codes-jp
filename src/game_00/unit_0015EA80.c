#include "common.h"

typedef struct Obj16 {
    f32 unk_0;
    f32 unk_4;
    f32 unk_8;
    s32 unk_C;
} Obj16;

extern s32 D_00523EB4[];

extern f32 D_00523FB4[];

extern f32 D_00523FB8[];

extern f32 D_00523FBC[];

extern s32 D_005240B8[];

void func_0015BD90();

s32 func_0015EA80(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5)
{
    return arg5;
}

s32 func_0015EA90(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5)
{
    return arg5;
}

s32 func_0015EAA0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5)
{
    return arg5;
}

s32 func_0015EAB0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5)
{
    return arg5;
}

s32 func_0015EAC0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5)
{
    return arg5;
}

s32 func_0015EAD0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5)
{
    return arg5;
}

s32 func_0015EAE0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5)
{
    return arg5;
}

s32 func_0015EAF0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5)
{
    return arg5;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015EA80", func_0015EB00);

Obj16 *func_0015EBF0(s32 arg0, s32 arg1, s32 arg2, Obj16 *arg3)
{
    D_005240B8[0] = arg2;
    D_00523FB4[0] = arg3->unk_0;
    D_00523FB8[0] = arg3->unk_4;
    D_00523FBC[0] = arg3->unk_8;
    D_00523EB4[0] = arg3->unk_C;
    func_0015BD90(0x8000, 1);
    return arg3 + 1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015EA80", func_0015EC60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015EA80", func_0015ED00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015EA80", func_0015EE20);
