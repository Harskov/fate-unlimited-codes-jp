#include "common.h"

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325250", func_00325250);

// wrap an angle in degrees into (-180, 180]
float func_00325320(float angle)
{
    while (angle < -180.0f)
        angle += 360.0f;
    while (angle > 180.0f)
        angle -= 360.0f;
    return angle;
}

void func_003253B0(void)
{
}

void func_003253C0(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325250", func_003253D0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325250", func_003254C0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325250", func_003255A0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325250", func_00325650);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325250", func_003256E0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325250", func_003258A0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325250", func_00325960);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325250", func_00325A60);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325250", func_00325B60);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325250", func_00325C10);
