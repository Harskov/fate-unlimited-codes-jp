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

typedef struct Obj_0031C3E0 {
    s32 unk_0;
    s32 unk_4;
    /* 0x08 */ struct Obj_0031C3E0 *next;
} Obj_0031C3E0;

typedef struct Obj_0018A100 {
    u8 pad_0[0xC];
    Obj_0031C3E0 *unk_C;
} Obj_0018A100;

extern s32 D_0051A8B0[];

extern Obj_0018A100 *func_0018A100();

extern void func_0015D710();

extern void func_00210D60();

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

void func_0031C3E0(s32 arg0)
{
    Obj_0031C3E0 *n;
    s32 v;

    n = func_0018A100(arg0)->unk_C;
    v = n->unk_0;
    while (v != 1) {
        func_0015D710(D_0051A8B0[0], v);
        n = n->next;
        v = n->unk_0;
    }
    func_00210D60(arg0);
}

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
