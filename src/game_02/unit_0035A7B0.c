#include "common.h"

extern s32 D_00531F70[];

extern void func_0035B700(void *);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0035A7B0", func_0035A7B0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0035A7B0", func_0035A940);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0035A7B0", func_0035AA70);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0035A7B0", func_0035AB80);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0035A7B0", func_0035ABA0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0035A7B0", func_0035AC10);

void func_0035AC80(s32 *arg0)
{
    s32 flags;

    if (arg0 == 0)
        return;
    flags = *arg0;
    *arg0 = flags | 0x02000000;
}

void func_0035ACA0(s32 *arg0)
{
    if (arg0 != 0)
        *arg0 &= 0xFDFFFFFF;
}

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0035A7B0", func_0035ACD0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0035A7B0", func_0035AD40);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0035A7B0", func_0035AE90);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0035A7B0", func_0035AF30);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0035A7B0", func_0035AFC0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0035A7B0", func_0035B150);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0035A7B0", func_0035B260);

int func_0035B390(void *arg0)
{
    if (arg0 != 0)
        return func_0036C450(arg0) != 0;
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0035A7B0", func_0035B3C0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0035A7B0", func_0035B530);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0035A7B0", func_0035B6B0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0035A7B0", func_0035B700);

void func_0035B820(void)
{
    func_0035B700(D_00531F70);
}

void func_0035B830(void)
{
    D_00531F70[0] = 0xF1;
    func_0035B700(D_00531F70);
    D_00531F70[0] = -1;
}
