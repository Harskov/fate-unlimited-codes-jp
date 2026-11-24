#include "common.h"

extern char D_003DEED0[][20];

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002116B0", func_002116B0);

int func_00211760(const char *arg0)
{
    int i;

    for (i = 0; i < 0x4D; i++) {
        if (strcmp(D_003DEED0[i], arg0) == 0) {
            return i;
        }
    }
    return -1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002116B0", func_002117D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002116B0", func_00211810);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002116B0", func_002118B0);

f32 func_00211930(void)
{
    return 16.0f;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002116B0", func_00211940);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002116B0", func_002119D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002116B0", func_00211BB0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002116B0", func_00211E00);

int func_00211F60(int *ids)
{
    int count = 0;

    while (*ids != 0xFFFF) {
        ids++;
        count++;
    }
    return count;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002116B0", func_00211FA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002116B0", func_00211FF0);

int func_00212460(unsigned int id)
{
    if (id >= 0x34D)
        return -1;
    return id / 625;
}
