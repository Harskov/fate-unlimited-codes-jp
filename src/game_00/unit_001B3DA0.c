#include "common.h"

extern s32 D_0051D728[];

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3DA0", func_001B3DA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3DA0", func_001B3E30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3DA0", func_001B3EC0);

s32 func_001B3F70(s32 arg0)
{
    f32 step = 0.0f;
    s32 i;
    f32 limit = 25.5f;
    f32 half = 0.5f;

    for (i = 0; i < 10; i++) {
        if ((s32)(half + step) >= arg0) {
            break;
        }
        step += limit;
    }
    return i;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3DA0", func_001B3FC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3DA0", func_001B4090);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3DA0", func_001B4150);

void func_001B4240(char *arg0)
{
    D_0051D728[0] -= 1;
    *(s32 *)(arg0 + 0x14) = -1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3DA0", func_001B4260);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3DA0", func_001B42A0);

void func_001B4320(void)
{
    D_0051D728[0] = 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3DA0", func_001B4330);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3DA0", func_001B43A0);
