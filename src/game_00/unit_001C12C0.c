#include "common.h"

typedef struct Obj_001C2AD0 {
    u8 unk_0[0x1E0];
    /* 0x1E0 */ u32 flags;
    u8 unk_1E4[0x358];
    s32 unk_53C;
} Obj_001C2AD0;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C12C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C1310);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C14B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C1550);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C17A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C1A40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C1AF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C1D90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C1F90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C2060);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C2290);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C24A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C2530);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C2640);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C2900);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C2A10);

s32 func_001C2AD0(Obj_001C2AD0 *arg0)
{
    if (arg0 == 0) {
        return 0;
    }
    if (arg0->flags & 0x800000) {
        return 1;
    }
    switch (arg0->unk_53C) {
    case 0x62:
    case 0x63:
    case 0x33:
    case 0x35:
    case 0x34:
        return 1;
    default:
        return 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C2B50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C2D40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C2E30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C12C0", func_001C2E70);
