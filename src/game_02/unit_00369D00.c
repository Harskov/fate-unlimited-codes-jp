#include "common.h"

void func_0036ABD0();

typedef struct Obj_0036C3D0 {
    unsigned char unk_0[0x53C];
    int unk_53C;
} Obj_0036C3D0;

typedef struct Obj_0036ABD0 {
    /* 0x00 */ f32 unk_0[3];
    /* 0x0C */ f32 unk_C[3];
    /* 0x18 */ f32 unk_18[3];
    /* 0x24 */ f32 unk_24[3];
} Obj_0036ABD0;

typedef struct Obj_0036CE00 {
    /* 0x00 */ int unk_0;
    /* 0x04 */ void *unk_4;
} Obj_0036CE00;

void func_0036D0B0(void *arg0);

void func_0036CEB0(Obj_0036CE00 *arg0, int arg1, void *arg2, int arg3, int arg4);

void func_0036CFD0(void *arg0, int arg1, Obj_0036CE00 *arg2, int arg3, int arg4);

typedef struct Obj_0036A0D0 {
    /* 0x00 */ int unk_0;
    /* 0x04 */ int unk_4;
    /* 0x08 */ u8 unk_8[0x64];
    /* 0x6C */ f32 unk_6C;
} Obj_0036A0D0;

typedef struct Obj_00171E40 {
    /* 0x00 */ int unk_0;
    /* 0x04 */ int unk_4;
} Obj_00171E40;

void * func_0020CEB0(void *);

void func_0020D070(f32 (*)[4]);

int func_002E6C10(int);

Obj_00171E40 *func_00171E40(int arg0, int arg1);

f32 *func_0020CE80(void *arg0);

void func_0015D130(f32 *arg0, f32 *arg1);

void func_00165EA0(f32 *arg0, f32 *arg1, f32 *arg2);

void func_0036AD10(int arg0, int arg1, int arg2);

void func_0036BC90(f32 (*arg0)[4], int arg1, int arg2, int arg3);

void func_002E65E0(int arg0, f32 (*arg1)[4], int arg2);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00369D00", func_00369D00);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00369D00", func_00369DB0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00369D00", func_00369E80);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00369D00", func_00369F20);

// bit 0x2 of arg1's first word is cleared on entry and set again only when the whole chain completes
void func_0036A0D0(int arg0, Obj_0036A0D0 *arg1, f32 arg2)
{
    f32 vec0[4];
    f32 vec1[4];
    f32 mat[4][4];
    Obj_00171E40 *e;
    int k;
    int h0;
    f32 *p0;
    int h1;
    int h2;
    f32 *p2;
    f32 *p1;

    if (arg0 != 0 && arg1 != 0) {
        k = arg1->unk_4;
        func_0020D070(mat);
        e = func_00171E40(arg0, k);
        if (e != 0) {
            h0 = func_002E6C10((int)e);
            if (h0 != 0) {
                p0 = func_0020CE80((void *)h0);
                if (p0 != 0) {
                    arg2 += arg1->unk_6C;
                    arg1->unk_0 &= ~2;
                    if (p0[1] < arg2) {
                        h1 = e->unk_4;
                        if (h1 != 0) {
                            h2 = func_002E6C10(h1);
                            if (h2 != 0) {
                                p1 = func_0020CE80((void *)h2);
                                if (p1 != 0) {
                                    p2 = func_0020CEB0((void *)h2);
                                    if (p2 != 0) {
                                        func_0015D130(vec0, p0);
                                        vec0[1] = arg2;
                                        func_00165EA0(vec1, vec0, p1);
                                        func_0015D130(p2, vec1);
                                        func_0036AD10(0x58, h2, h2);
                                        func_0036BC90(mat, h1, 0, h2);
                                        p0 = func_0020CE80(mat);
                                        func_0015D130(p0, func_0020CE80((void *)(h1 + 0x10)));
                                        func_002E65E0(h1, mat, 0);
                                        arg1->unk_0 |= 2;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00369D00", func_0036A280);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00369D00", func_0036A4B0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00369D00", func_0036A830);

void func_0036ABA0(int arg0, int arg1, int arg2, int arg3)
{
    if (arg2 != 0 && arg3 != 0) {
        func_0036ABD0(arg2, arg3);
    }
}

/* Moves each of the three values a fraction of the way towards its goal when that
   fraction is below one, then clamps each between the upper bound at +0xC and the
   lower bound at +0x18. */
void func_0036ABD0(f32 *arg0, Obj_0036ABD0 *arg1)
{
    if (arg1->unk_24[0] < 1.0f) {
        arg0[0] = arg0[0] + arg1->unk_24[0] * (arg1->unk_0[0] - arg0[0]);
    }
    if (arg1->unk_24[1] < 1.0f) {
        arg0[1] = arg0[1] + arg1->unk_24[1] * (arg1->unk_0[1] - arg0[1]);
    }
    if (arg1->unk_24[2] < 1.0f) {
        arg0[2] = arg0[2] + arg1->unk_24[2] * (arg1->unk_0[2] - arg0[2]);
    }

    if (arg0[0] > arg1->unk_C[0]) {
        arg0[0] = arg1->unk_C[0];
    }
    if (arg0[0] < arg1->unk_18[0]) {
        arg0[0] = arg1->unk_18[0];
    }
    if (arg0[1] > arg1->unk_C[1]) {
        arg0[1] = arg1->unk_C[1];
    }
    if (arg0[1] < arg1->unk_18[1]) {
        arg0[1] = arg1->unk_18[1];
    }
    if (arg0[2] > arg1->unk_C[2]) {
        arg0[2] = arg1->unk_C[2];
    }
    if (arg0[2] < arg1->unk_18[2]) {
        arg0[2] = arg1->unk_18[2];
    }
}

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00369D00", func_0036AD10);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00369D00", func_0036B090);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00369D00", func_0036B3A0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00369D00", func_0036B520);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00369D00", func_0036BC90);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00369D00", func_0036BD30);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00369D00", func_0036C320);

int func_0036C3D0(Obj_0036C3D0 *arg0, int arg1, int *arg2)
{
    if (arg0 == 0)
        return 0;
    if (arg1 == 0)
        return 0;
    if (arg2 == 0)
        return 0;
    if ((*arg2 & 0x10) && arg0->unk_53C == 0)
        return 1;
    return 0;
}

int func_0036C420(void *arg0)
{
    if (arg0 != 0)
        return func_0036C450(arg0) != 0;
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00369D00", func_0036C450);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00369D00", func_0036C710);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00369D00", func_0036CAB0);

int func_0036CE00(Obj_0036CE00 *arg0, int arg1, int arg2, int arg3)
{
    void *sub;

    if (arg0 == 0)
        return 0;
    if (arg1 == 0)
        return 0;
    if (arg2 == 0)
        return 0;
    sub = arg0->unk_4;
    if (sub == 0)
        return 0;
    func_0036D0B0(sub);
    func_0036CEB0(arg0, arg1, sub, arg2, arg3);
    func_0036CFD0(sub, arg2, arg0, arg1, arg3);
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00369D00", func_0036CEB0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00369D00", func_0036CFD0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00369D00", func_0036D0B0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00369D00", func_0036D140);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00369D00", func_0036D260);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00369D00", func_0036D660);
