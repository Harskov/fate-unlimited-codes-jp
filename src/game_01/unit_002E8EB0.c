#include "common.h"

extern s32 D_00508EF4;

extern s32 D_00508EF8;

extern s32 D_00508EFC;

extern s32 D_00508F00;

void func_002E8EB0(s32 arg0, s32 arg1)
{
    D_00508EF4 = arg0;
    D_00508EF8 = arg1;
}

void func_002E8EC0(s32 arg0, s32 arg1)
{
    D_00508EFC = arg0;
    D_00508F00 = arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_002E8EB0", func_002E8ED0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_002E8EB0", func_002E8F70);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_002E8EB0", func_002E8FE0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_002E8EB0", func_002E90F0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_002E8EB0", func_002E9140);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_002E8EB0", func_002E9260);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_002E8EB0", func_002E9340);
