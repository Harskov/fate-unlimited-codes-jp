#include "common.h"

extern s32 D_0051A894[];

extern s32 D_0051A89C[];

void func_003115F8();

typedef struct Obj_0018BE30 {
    s32 unk_0;
    s32 unk_4;
    /* 0x08 */ struct Obj_0018BE30 *link_8;
    /* 0x0C */ struct Obj_0018BE30 *link;
} Obj_0018BE30;

extern f32 D_0051A610[];

extern f32 D_0051A618[];

extern f32 D_0051A620[];

extern f32 D_0051A628[];

typedef struct Obj_00188B50 {
    u8 unk_0[0x1C];
    f32 unk_1C;
    f32 unk_20;
} Obj_00188B50;

typedef struct Obj_0018BDA0 {
    s32 unk_0;
    s32 unk_4;
    u8 unk_8[0x5C];
    Obj_0018BE30 *unk_64;
} Obj_0018BDA0;

extern s32 D_0051A8C8[];

extern s32 D_0051A920[];

void func_00179380();

void func_0015D710();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001873A0", func_001873A0);

int func_00187940(void)
{
    if ((u32)D_0051A894[0] < 0x200) {
        D_0051A894[0]++;
        return 1;
    }
    return 0;
}

int func_00187970(s32 *arg0)
{
    if ((u32)D_0051A894[0] < 0x200) {
        *arg0 = D_0051A89C[0] + D_0051A894[0] * 0x24;
        return 1;
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001873A0", func_001879B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001873A0", func_00187FA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001873A0", func_001884A0);

void func_00188B50(s32 arg0, Obj_00188B50 *arg1, f32 arg2, f32 arg3)
{
    if (arg0 & 0x800) {
        if (arg2 < D_0051A628[0]) {
            arg1->unk_1C = D_0051A628[0];
        } else if (arg2 > D_0051A620[0]) {
            arg1->unk_1C = D_0051A620[0];
        } else {
            arg1->unk_1C = arg2;
        }
        if (arg3 < D_0051A618[0]) {
            arg1->unk_20 = D_0051A618[0];
        } else if (arg3 > D_0051A610[0]) {
            arg1->unk_20 = D_0051A610[0];
        } else {
            arg1->unk_20 = arg3;
        }
    } else {
        arg1->unk_1C = arg2;
        arg1->unk_20 = arg3;
    }
}

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

// walks the list at +0x64 up to its end marker (1), handing each entry and then the
// object itself to the same two calls; the entries go to D_0051A920, the object to D_0051A8C8.
// The caller passes the object as the list's word, so it arrives as an s32.
void func_0018BDA0(s32 arg0)
{
    Obj_0018BDA0 *obj;
    Obj_0018BE30 *node;
    Obj_0018BDA0 *elem;

    obj = (Obj_0018BDA0 *)arg0;
    node = obj->unk_64;
    elem = (Obj_0018BDA0 *)node->unk_0;
    while (elem != (Obj_0018BDA0 *)1) {
        func_00179380(&elem->unk_4);
        func_0015D710(D_0051A920[0], elem);
        node = node->link_8;
        elem = (Obj_0018BDA0 *)node->unk_0;
    }
    func_00179380(&obj->unk_4);
    func_0015D710(D_0051A8C8[0], obj);
}

void func_0018BE30(s32 *arg0)
{
    Obj_0018BE30 *node;

    node = ((Obj_0018BE30 *)func_0018A100(arg0))->link;
    while (node->unk_0 != 1) {
        func_0018BDA0(node->unk_0);
        node = node->link_8;
    }
    func_00210D60(arg0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001873A0", func_0018BEA0);
