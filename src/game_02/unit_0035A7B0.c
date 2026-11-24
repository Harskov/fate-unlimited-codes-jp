#include "common.h"

extern s32 D_00531F70[];

extern void func_0035B700(void *);

typedef struct Obj_0035AC10 {
    u8 unk_0[0x3C];
    void *unk_3C;
} Obj_0035AC10;

s32 *func_0016D020(void *);

void func_0035AD40(Obj_0035AC10 *, void *);

int func_0035B3C0(Obj_0035AC10 *, void *);

typedef struct Sub_0035B6B0 {
    u8 pad_0[0xC];
    /* 0x0C */ s32 unk_C;
} Sub_0035B6B0;

typedef struct Elem_0035B6B0 {
    u8 pad_0[0xC];
    /* 0x0C */ Sub_0035B6B0 *unk_C;
    u8 pad_10[0xE0];
} Elem_0035B6B0;

typedef struct Obj_0035B6B0 {
    u8 pad_0[0x6C];
    /* 0x6C */ Elem_0035B6B0 *unk_6C;
} Obj_0035B6B0;

int func_001619C0(Obj_0035B6B0 *h, int i);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0035A7B0", func_0035A7B0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0035A7B0", func_0035A940);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0035A7B0", func_0035AA70);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_0035A7B0", func_0035AB80);

void func_0035ABA0(Obj_0035AC10 *arg0, s32 arg1)
{
    s32 *p;

    if (arg0 != 0) {
        if (arg0->unk_3C != 0) {
            p = func_0016D020(arg0->unk_3C);
            if (p != 0 && arg1 >= 0) {
                *p &= ~0x200000;
                *p |= 0xE00;
            }
        }
    }
}

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

void func_0035ACD0(Obj_0035AC10 *arg0)
{
    void *p;

    if (arg0 == 0)
        return;
    p = arg0->unk_3C;
    if (p == 0)
        return;
    if (func_0035B3C0(arg0, p) != 0)
        func_0035AD40(arg0, p);
}

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

int func_0035B6B0(Obj_0035B6B0 *h, int i)
{
    int idx = func_001619C0(h, i);
    if (idx < 0)
        return 0;
    return func_002E6C10(h->unk_6C[idx].unk_C->unk_C);
}

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
