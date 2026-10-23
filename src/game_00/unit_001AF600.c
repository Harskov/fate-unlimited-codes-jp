#include "common.h"

f32 fabsf(f32);

f32 func_00333310(void);

f32 func_001A47A0(s32);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AF600", func_001AF600);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AF600", func_001AF6D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AF600", func_001AF760);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AF600", func_001AF7B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AF600", func_001AF7F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AF600", func_001AF910);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AF600", func_001AFA90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AF600", func_001AFC40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AF600", func_001AFC90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AF600", func_001AFE20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AF600", func_001AFF90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AF600", func_001B00B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AF600", func_001B0140);

f32 func_001B0230(s32 arg0)
{
    if (fabsf(func_00333310() - 1.0f) < 0.001f) {
        return 1.0f;
    }
    return func_001A47A0(arg0);
}
