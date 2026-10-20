#include "common.h"

typedef struct Obj1D0 {
    u8 pad_0[0xA0];
    s32 unk_A0;
    s32 unk_A4;
} Obj1D0;

typedef struct Obj2524 {
    u8 pad_0[0x2448];
    Obj1D0 *unk_2448;
} Obj2524;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C0810", func_001C0810);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C0810", func_001C0840);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C0810", func_001C09C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C0810", func_001C0A60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C0810", func_001C0B80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C0810", func_001C0F00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C0810", func_001C0FA0);

void func_001C1000(Obj2524 *arg0)
{
    Obj1D0 *c;

    if (arg0 != 0) {
        c = arg0->unk_2448;
        if (c != 0) {
            c->unk_A0 = 0;
            c->unk_A4 = 0;
        }
    }
}

void func_001C1030(Obj2524 *arg0, s64 v, s32 w)
{
    Obj1D0 *c;

    if (arg0 != 0) {
        c = arg0->unk_2448;
        if (c != 0) {
            c->unk_A0 = w;
            c->unk_A4 = (short)v;
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C0810", func_001C1060);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C0810", func_001C1140);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C0810", func_001C11D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C0810", func_001C1210);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C0810", func_001C1250);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C0810", func_001C1290);
