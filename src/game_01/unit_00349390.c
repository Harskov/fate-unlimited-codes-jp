#include "common.h"

extern u32 D_0051D8A0[];

// the same empty early return on bits 0x12000000 of D_0051D8A0 as func_0034DD10
void func_00349390(void)
{
    if (D_0051D8A0[0] & 0x12000000) {
        return;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00349390", func_003493B0);

// the same empty early return on bits 0x12000000 of D_0051D8A0 as func_0034DD10
void func_003494F0(void)
{
    if (D_0051D8A0[0] & 0x12000000) {
        return;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00349390", func_00349510);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00349390", func_00349780);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00349390", func_00349790);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00349390", func_003497A0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00349390", func_0034A020);

// returns early when D_0051D8A0 has either bit of 0x12000000 set, and does nothing either way;
// probably a body compiled out of the release build
void func_0034DD10(void)
{
    if (D_0051D8A0[0] & 0x12000000) {
        return;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00349390", func_0034DD30);

// the same empty early return on bits 0x12000000 of D_0051D8A0 as func_0034DD10
void func_0034EA20(void)
{
    if (D_0051D8A0[0] & 0x12000000) {
        return;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00349390", func_0034EA40);

// the same empty early return on bits 0x12000000 of D_0051D8A0 as func_0034DD10
void func_00351EF0(void)
{
    if (D_0051D8A0[0] & 0x12000000) {
        return;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00349390", func_00351F10);
