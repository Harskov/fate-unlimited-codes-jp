#include "common.h"

extern s32 D_00508EC4;

extern s32 D_00508EC8;

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002DFA28", func_002DFA28);

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002DFA28", func_002DFA98);

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002DFA28", func_002DFBC8);

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002DFA28", func_002DFF28);

void func_002DFF78(s32 arg0, s32 arg1)
{
    D_00508EC4 = arg0;
    D_00508EC8 = arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002DFA28", func_002DFF88);
