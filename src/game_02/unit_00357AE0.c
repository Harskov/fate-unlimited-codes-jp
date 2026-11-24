#include "common.h"

void func_0019CA40();

void func_00358250();

extern s32 D_00531F20[];

#include "libc.h"

extern s32 D_004DC2C0[];

int func_00254290();

extern s32 D_004DC040[][4];

extern s32 D_004DC180[][4];

int func_0019CB40();

int func_002542F0();

int func_0015AFB0(s32);

typedef struct Elem_00358250 {
    u8 unk_0[0x10];
    /* 0x10 */ u32 flags_10;
    u8 unk_14[8];
    /* 0x1C */ u32 flags_1C;
    u8 unk_20[0x130];
    s32 unk_150;
} Elem_00358250;

typedef struct Link_00358250 {
    Elem_00358250 *unk_0;
    u8 unk_4[4];
    /* 0x08 */ struct Link_00358250 *next;
} Link_00358250;

typedef struct Obj_00358250 {
    u8 unk_0[0x23E8];
    Link_00358250 *unk_23E8;
} Obj_00358250;

int func_00357AE0(void)
{
    int v;
    int i;

    v = func_00254290(0);
    if (v < 0)
        return 0;
    for (i = 0; i < 0x12; i++) {
        if (v == D_004DC2C0[i])
            return 0;
    }
    return 1;
}

int func_00357B40(void)
{
    if (func_002542F0(0) == 0)
        return 1;
    return func_0015AFB0(0) >= 1;
}

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00357AE0", func_00357B80);

void func_00357C20(void)
{
    memset(D_00531F20, 0, 0x48);
}

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00357AE0", func_00357C40);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00357AE0", func_00357DB0);

int func_00357E20(int arg0, int arg1)
{
    if (func_0019CB40())
        return D_004DC180[arg0][arg1];
    return D_004DC040[arg0][arg1];
}

int func_00357EA0(int arg0, int arg1, int arg2)
{
    return arg2 * 21 + func_00357E20(arg0, arg1);
}

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00357AE0", func_00357EE0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00357AE0", func_00357F50);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00357AE0", func_00357FB0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00357AE0", func_00358030);

void func_00358250(Obj_00358250 *arg0, Obj_00358250 *arg1)
{
    Link_00358250 *link;
    Elem_00358250 *elem;

    if (arg0 != arg1) {
        link = arg0->unk_23E8;
        elem = link->unk_0;
        if (elem != (Elem_00358250 *)1) {
            do {
                if (!(elem->flags_1C & 0x80000000) && !(elem->flags_10 & 0x80000000) && elem->unk_150 != 0x1C) {
                    elem->flags_1C = elem->flags_1C | 0x08000000;
                }
                link = link->next;
                elem = link->unk_0;
            } while (elem != (Elem_00358250 *)1);
        }
    }
}

void func_003582D0(s32 arg0)
{
    func_0019CA40(func_00358250, arg0);
}

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00357AE0", func_003582E0);
