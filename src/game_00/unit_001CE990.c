#include "common.h"

extern s32 D_004FFD80[][3][3];

extern s32 D_0051EDD0[];

extern s32 D_0051ED20[];

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CE990", func_001CE990);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CE990", func_001CEA80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CE990", func_001CEFA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CE990", func_001CEFD0);

s32 func_001CF000(s32 arg0, s32 arg1)
{
    return D_004FFD80[arg0][arg1][0];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CE990", func_001CF030);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CE990", func_001CF130);

s32 func_001CF220(s32 arg0, s32 arg1)
{
    s32 result = 0;

    switch (arg0) {
    case 1:
    case 7:
    case 2:
    case 9:
        result = D_0051ED20[arg1];
        break;
    }
    return result;
}

s32 func_001CF280(s32 arg0, s32 arg1)
{
    s32 result = 0;

    switch (arg0) {
    case 1:
    case 2:
    case 7:
    case 9:
        result = D_0051EDD0[arg1];
        break;
    }
    return result;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CE990", func_001CF2E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CE990", func_001CF410);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CE990", func_001CF5A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CE990", func_001CFE70);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CE990", func_001D04A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CE990", func_001D4E60);

void func_001D5FD0(void)
{
}
