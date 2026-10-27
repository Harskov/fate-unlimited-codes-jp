#include "common.h"

extern s32 D_0051A894[];

extern s32 D_0051A89C[];

void func_003115F8();

typedef struct Obj_0018BE30 {
    s32 unk_0;
    s32 unk_4;
    /* 0x08 */ struct Obj_0018BE30 *link_8;
    struct Obj_0018BE30 *unk_C;
} Obj_0018BE30;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001873A0", func_001873A0);

int func_00187940(void)
{
    if ((u32)D_0051A894[0] < 0x200) {
        D_0051A894[0]++;
        return 1;
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001873A0", func_00187970);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001873A0", func_001879B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001873A0", func_00187FA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001873A0", func_001884A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001873A0", func_00188B50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001873A0", func_00188BD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001873A0", func_00189120);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001873A0", func_00189810);

void func_00189BC0(s32 arg0, s32 arg1)
{
    func_003115F8(D_0051A89C[0], D_0051A894[0], arg0, arg1);
}

void func_00189BE0(void)
{
    D_0051A894[0] = 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001873A0", func_00189BF0);

s32 *func_0018A100(s32 *p)
{
    return p - 1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001873A0", func_0018A110);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001873A0", func_0018A1F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001873A0", func_0018A790);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001873A0", func_0018AD30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001873A0", func_0018B050);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001873A0", func_0018B3D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001873A0", func_0018B8C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001873A0", func_0018BDA0);

void func_0018BE30(s32 *arg0)
{
    Obj_0018BE30 *node;

    node = ((Obj_0018BE30 *)func_0018A100(arg0))->unk_C;
    while (node->unk_0 != 1) {
        func_0018BDA0(node->unk_0);
        node = node->link_8;
    }
    func_00210D60(arg0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001873A0", func_0018BEA0);
