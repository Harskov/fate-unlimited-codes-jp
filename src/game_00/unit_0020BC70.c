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

extern s32 D_00501A80[];

void func_002052F0();

void func_0020CFD0(f32 (*)[4], f32 (*)[4], f32 (*)[4]);

extern f32 *D_00522D98[];

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020BC70", func_0020BC70);

void func_0020BDE0(void)
{
}

void func_0020BDF0(f32 *arg0)
{
    func_002052F0(D_00501A80, arg0[0], arg0[1], arg0[2]);
}

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

/* Probably builds a rotation of angle arg2 about axis arg1 (0, 1, 2) and applies it to arg0.
   The table at D_00522D98 holds 0x4000 entries; the entry a quarter turn on (+0x1000) is
   read as the cosine (c) of the one at i (s). Each case fills the matrix a column at a time. */
void func_0020BF40(f32 (*arg0)[4], s32 arg1, s32 arg2)
{
    f32 m[4][4];
    s32 i;
    f32 s;
    f32 c;

    i = (arg2 + 2) >> 2;
    s = D_00522D98[0][i & 0x3FFF];
    c = D_00522D98[0][(i + 0x1000) & 0x3FFF];

    switch (arg1) {
    case 0:
        m[0][0] = 1.0f;
        m[1][0] = 0.0f;
        m[2][0] = 0.0f;
        m[3][0] = 0.0f;
        m[0][1] = 0.0f;
        m[1][1] = c;
        m[2][1] = -s;
        m[3][1] = 0.0f;
        m[0][2] = 0.0f;
        m[1][2] = s;
        m[2][2] = c;
        m[3][2] = 0.0f;
        break;
    case 1:
        m[0][0] = c;
        m[1][0] = 0.0f;
        m[2][0] = s;
        m[3][0] = 0.0f;
        m[0][1] = 0.0f;
        m[1][1] = 1.0f;
        m[2][1] = 0.0f;
        m[3][1] = 0.0f;
        m[0][2] = -s;
        m[1][2] = 0.0f;
        m[2][2] = c;
        m[3][2] = 0.0f;
        break;
    case 2:
        m[0][0] = c;
        m[1][0] = -s;
        m[2][0] = 0.0f;
        m[3][0] = 0.0f;
        m[0][1] = s;
        m[1][1] = c;
        m[2][1] = 0.0f;
        m[3][1] = 0.0f;
        m[0][2] = 0.0f;
        m[1][2] = 0.0f;
        m[2][2] = 1.0f;
        m[3][2] = 0.0f;
        break;
    }
    func_0020CFD0(arg0, m, arg0);
}

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
