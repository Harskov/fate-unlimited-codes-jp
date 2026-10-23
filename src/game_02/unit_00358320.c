#include "common.h"

typedef struct Obj_00358C00 {
    u8 pad_0[0x10];
    /* 0x10 */ s32 flags_10;
    /* 0x14 */ s32 flags_14;
    /* 0x18 */ s32 flags_18;
    u8 pad_1C[0x150 - 0x1C];
    s32 unk_150;
} Obj_00358C00;

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00358320", func_00358320);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00358320", func_00358450);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00358320", func_00358550);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00358320", func_003586C0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00358320", func_00358970);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00358320", func_00358B50);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00358320", func_00358BB0);

s32 func_00358C00(Obj_00358C00 *arg0, Obj_00358C00 *arg1)
{
    s32 r;
    s32 flags0;
    s32 flags1;

    r = 1;
    if (arg0->unk_150 == 0x10 && arg1->unk_150 == 0x10) {
        r = 0;
    }
    flags0 = arg0->flags_18;
    if ((flags0 & 0x4) && (arg1->flags_10 & 0x1)) {
        r = 0;
    }
    flags1 = arg1->flags_18;
    if ((flags1 & 0x4) && (arg0->flags_10 & 0x1)) {
        r = 0;
    }
    if ((flags0 & 0x8) && (arg1->flags_10 & 0x2)) {
        r = 0;
    }
    if ((flags1 & 0x8) && (arg0->flags_10 & 0x2)) {
        r = 0;
    }
    if ((flags0 & 0x20) && (arg1->flags_14 & 0x400000)) {
        r = 0;
    }
    if ((flags1 & 0x20) && (arg0->flags_14 & 0x400000)) {
        r = 0;
    }
    return r;
}

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00358320", func_00358D00);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00358320", func_00358DF0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00358320", func_00358E10);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00358320", func_00358EE0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00358320", func_00358FF0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_00358320", func_003591D0);
