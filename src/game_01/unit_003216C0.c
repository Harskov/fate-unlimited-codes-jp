#include "common.h"

typedef struct Obj_00324A30 {
    u8 unk_0[0x24];
    /* 0x24 */ s32 flags;
} Obj_00324A30;

void func_00324A30();

void func_0032FF80();

void func_00324A80();

void func_0032FF90();

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003216C0", func_003216C0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003216C0", func_00321A20);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003216C0", func_00322AC0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003216C0", func_00322CE0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003216C0", func_003237A0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003216C0", func_00323A70);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003216C0", func_00323E50);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_003216C0", func_003241B0);

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
