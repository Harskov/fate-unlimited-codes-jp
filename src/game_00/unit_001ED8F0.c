#include "common.h"

typedef struct Obj_001F0C60 {
    unsigned char pad[0x60];
    s32 unk_60;
} Obj_001F0C60;

typedef struct Obj_001F0C70 {
    u8 pad_0[0x3C];
    f32 unk_3C;
    f32 unk_40;
} Obj_001F0C70;

typedef struct Obj_001F0C80 {
    u8 pad_0[0x14];
    s32 unk_14;
    u8 pad_18[0x2C];
    s32 unk_44;
    s32 unk_48;
    s32 unk_4C;
    s32 unk_50;
} Obj_001F0C80;

typedef struct Obj_001F0CC0 {
    u8 pad_0[0x24];
    s32 unk_24;
    s32 unk_28;
} Obj_001F0CC0;

void func_0015D130();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001ED8F0", func_001ED8F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001ED8F0", func_001EDDF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001ED8F0", func_001EE390);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001ED8F0", func_001EE590);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001ED8F0", func_001EEA20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001ED8F0", func_001EED40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001ED8F0", func_001EF530);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001ED8F0", func_001EFBD0);

f32 func_001EFE00(f32 *arg0)
{
    f32 y = arg0[1];
    f32 x = arg0[0];
    f32 z = arg0[2];

    return x * x + y * y + z * z;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001ED8F0", func_001EFE20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001ED8F0", func_001F03E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001ED8F0", func_001F04B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001ED8F0", func_001F0660);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001ED8F0", func_001F08A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001ED8F0", func_001F0A70);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001ED8F0", func_001F0AF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001ED8F0", func_001F0BD0);

void func_001F0C60(Obj_001F0C60 *p, s32 arg1)
{
    p->unk_60 = arg1;
}

void func_001F0C70(Obj_001F0C70 *p, f32 arg1, f32 arg2)
{
    p->unk_3C = arg1;
    p->unk_40 = arg2;
}

void func_001F0C80(Obj_001F0C80 *p, s32 arg1, s32 arg2, s32 arg3)
{
    p->unk_50 = 0;
    p->unk_44 = arg1;
    p->unk_48 = arg2;
    p->unk_4C = arg3;
    p->unk_14 = 1;
    if (arg1 <= 0) {
        if (arg2 == 0) {
            p->unk_14 = 2;
        } else {
            p->unk_14 = 0;
        }
    }
}

void func_001F0CC0(Obj_001F0CC0 *p, s32 arg1, s32 arg2)
{
    if (p != 0) {
        p->unk_24 = arg1;
        func_0015D130(&p->unk_28, arg2);
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001ED8F0", func_001F0CF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001ED8F0", func_001F0D10);
