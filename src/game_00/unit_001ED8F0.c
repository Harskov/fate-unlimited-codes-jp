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

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001ED8F0", func_001ED8F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001ED8F0", func_001EDDF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001ED8F0", func_001EE390);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001ED8F0", func_001EE590);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001ED8F0", func_001EEA20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001ED8F0", func_001EED40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001ED8F0", func_001EF530);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001ED8F0", func_001EFBD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001ED8F0", func_001EFE00);

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

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001ED8F0", func_001F0C80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001ED8F0", func_001F0CC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001ED8F0", func_001F0CF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001ED8F0", func_001F0D10);
