#include "common.h"

typedef struct Obj_0037C120 {
    /* 0x00 */ s32 flags;
    /* 0x04 */ s32 unk_4;
    /* 0x08 */ s32 unk_8;
    /* 0x0C */ s32 unk_C;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
} Obj_0037C120;

extern s32 D_0051D8A0[];

void func_0037C170();

typedef struct Obj_0037C980 {
    /* 0x00 */ u8 pad_0[0x74];
    /* 0x74 */ f32 unk_74[4];
} Obj_0037C980;

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037BA30", func_0037BA30);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037BA30", func_0037BB20);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037BA30", func_0037BB70);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037BA30", func_0037BC00);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037BA30", func_0037BC60);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037BA30", func_0037BCB0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037BA30", func_0037BD40);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037BA30", func_0037BDF0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037BA30", func_0037BE80);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037BA30", func_0037BF40);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037BA30", func_0037BFF0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037BA30", func_0037C090);

s32 func_0037C120(s32 arg0, Obj_0037C120 *arg1)
{
    if (D_0051D8A0[0] & arg1->unk_14) {
        func_0037C170(arg1);
    }
    return arg1->flags & 1;
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037BA30", func_0037C170);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037BA30", func_0037C1E0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037BA30", func_0037C260);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037BA30", func_0037C570);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037BA30", func_0037C670);

void func_0037C980(Obj_0037C980 *arg0, s32 arg1, f32 arg2)
{
    if (arg0 != 0 && arg1 >= 0 && arg1 < 4) {
        arg0->unk_74[arg1] = arg2;
    }
}
