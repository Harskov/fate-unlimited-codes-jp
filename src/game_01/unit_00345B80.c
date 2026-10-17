#include "common.h"

extern u32 D_0051D8A0[];

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00345B80", func_00345B80);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00345B80", func_00345B90);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00345B80", func_00346050);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00345B80", func_00346060);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00345B80", func_003462B0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00345B80", func_00346620);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00345B80", func_00346760);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00345B80", func_003469B0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00345B80", func_003469C0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00345B80", func_00346AB0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00345B80", func_00346B30);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00345B80", func_00347290);

// the same empty early return on bits 0x12000000 of D_0051D8A0 as func_0034DD10
void func_00348DA0(void)
{
    if (D_0051D8A0[0] & 0x12000000) {
        return;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00345B80", func_00348DC0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00345B80", func_00348FF0);
