#include "common.h"

extern s32 D_00531F70[];

extern void func_0035B700(void *);

typedef struct Obj_0035AC10 {
    u8 unk_0[0x3C];
    void *unk_3C;
} Obj_0035AC10;

s32 *func_0016D020(void *);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0035A7B0", func_0035A7B0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0035A7B0", func_0035A940);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0035A7B0", func_0035AA70);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0035A7B0", func_0035AB80);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0035A7B0", func_0035ABA0);

void func_0035AC10(Obj_0035AC10 *arg0, s32 arg1)
{
    s32 *p;

    if (arg0 != 0) {
        if (arg0->unk_3C != 0) {
            p = func_0016D020(arg0->unk_3C);
            if (p != 0 && arg1 >= 0) {
                *p |= 0x200000;
                *p &= ~0xE00;
            }
        }
    }
}

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
