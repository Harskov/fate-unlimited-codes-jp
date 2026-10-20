#include "common.h"
#include "types.h"

extern s32 D_0051A894[];

typedef struct Obj_0031C790 {
    u8 pad_0[0x60];
    s32 unk_60;
    f32 unk_64;
    f32 unk_68;
    f32 unk_6C;
    f32 unk_70;
    f32 unk_74;
} Obj_0031C790;

INCLUDE_ASM("asm/nonmatchings/game_01/unit_0031A5C0", func_0031A5C0);

s32 func_0031A720(void)
{
    return D_0051A894[0];
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_0031A5C0", func_0031A730);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_0031A5C0", func_0031AC00);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_0031A5C0", func_0031AD60);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_0031A5C0", func_0031B490);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_0031A5C0", func_0031B6B0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_0031A5C0", func_0031BBA0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_0031A5C0", func_0031BEB0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_0031A5C0", func_0031C3E0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_0031A5C0", func_0031C450);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_0031A5C0", func_0031C5B0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_0031A5C0", func_0031C720);

void func_0031C790(Obj_0031C790 *arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5)
{
    f32 v;

    arg0->unk_60 = arg1;
    v = (f32)arg2;
    arg0->unk_6C = v;
    arg0->unk_64 = v;
    arg0->unk_68 = (f32)arg3;
    arg0->unk_70 = arg4;
    arg0->unk_74 = arg5;
}
