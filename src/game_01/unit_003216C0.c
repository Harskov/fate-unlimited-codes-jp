#include "common.h"

typedef struct Obj_00324A30 {
    /* 0x00 */ u32 flags_0;
    /* 0x04 */ u8 pad_4[0x20];
    /* 0x24 */ s32 flags;
} Obj_00324A30;

void func_00324A30();

void func_0032FF80();

void func_00324A80();

void func_0032FF90();

extern s32 D_0051D8A0[];

void func_00323A70(Obj_00324A30 *arg0);

void func_00323E50(Obj_00324A30 *arg0);

s32 func_0032F780(void *arg0, s32 arg1);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003216C0", func_003216C0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003216C0", func_00321A20);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003216C0", func_00322AC0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003216C0", func_00322CE0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003216C0", func_003237A0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003216C0", func_00323A70);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003216C0", func_00323E50);

void func_003241B0(void *arg0, Obj_00324A30 *arg1, s32 arg2)
{
    s32 skip;

    skip = (D_0051D8A0[0] & 0x12000000) && (arg1->flags_0 & 0x100000);
    if (skip) {
        return;
    }
    if ((arg1->flags & 2) && func_0032F780(arg1, arg2) == 0) {
        return;
    }
    if (arg1->flags_0 & 8) {
        return;
    }
    if (arg1->flags_0 & 4) {
        func_00323A70(arg1);
    } else {
        func_00323E50(arg1);
    }
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003216C0", func_00324260);

void func_00324A30(void *arg0, Obj_00324A30 *arg1)
{
    s32 v;

    v = arg1->flags;
    if (v == 0) {
        return;
    }
    if (v & 2) {
        func_0032FF80(arg1);
    }
    return;
}

void func_00324A80(void *arg0, Obj_00324A30 *arg1)
{
    s32 v;

    v = arg1->flags;
    if (v == 0) {
        return;
    }
    if (v & 2) {
        func_0032FF90(arg1);
    }
    return;
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003216C0", func_00324AD0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003216C0", func_00324D10);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003216C0", func_00324F50);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003216C0", func_00325190);
