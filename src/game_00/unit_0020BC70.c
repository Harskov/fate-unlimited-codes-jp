#include "common.h"
#include "game_00/unit_0020D0D0.h"

void func_002DC248(void);


f32 fabsf(f32);

void func_0015D130(f32 *arg0, f32 *arg1);

void func_0015EE20(f32 *arg0, f32 x, f32 y, f32 z);

void func_00165EE0(f32 *arg0, f32 *arg1);

void func_0016E920(f32 *arg0, f32 *arg1, f32 *arg2);

void func_0020D070(f32 (*arg0)[4]);

void func_0020D0C0(f32 (*arg0)[4]);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020BC70", func_0020BC70);

void func_0020BDE0(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020BC70", func_0020BDF0);

void func_0020BE50(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020BC70", func_0020BE60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020BC70", func_0020BEF0);

void func_0020BF20(f32 *arg0)
{
    func_0020DBB0(arg0[2], arg0[0]);
}

void func_0020BF30(void)
{
    func_002DC248();
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020BC70", func_0020BF40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020BC70", func_0020C060);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020BC70", func_0020C1B0);

/* Probably builds three rows from arg2 and a reference axis (x when arg2's y is near
   vertical, else y), each derived row passed through func_00165EE0; arg1 picks which
   row lands where, and any other value takes the deliberate fault. */
void func_0020C340(f32 (*arg0)[4], s32 arg1, f32 *arg2, s32 arg3)
{
    f32 vec0[4];
    f32 vec1[4];

    if (fabsf(arg2[1]) > 0.9f) {
        func_0015EE20(vec0, 1.0f, 0.0f, 0.0f);
    } else {
        func_0015EE20(vec0, 0.0f, 1.0f, 0.0f);
    }
    func_0016E920(vec1, arg2, vec0);
    func_00165EE0(vec1, vec1);
    func_0016E920(vec0, vec1, arg2);
    func_00165EE0(vec0, vec0);

    if (arg3 == 0) {
        func_0020D070(arg0);
    }

    switch (arg1) {
    case 0:
        func_0015D130(arg0[0], arg2);
        func_0015D130(arg0[1], vec0);
        func_0015D130(arg0[2], vec1);
        break;
    case 1:
        func_0015D130(arg0[0], vec1);
        func_0015D130(arg0[1], arg2);
        func_0015D130(arg0[2], vec0);
        break;
    case 2:
        func_0015D130(arg0[0], vec0);
        func_0015D130(arg0[1], vec1);
        func_0015D130(arg0[2], arg2);
        break;
    default:
        *(long long *)1 = 0;
        break;
    }

    func_0020D0C0(arg0);
}
