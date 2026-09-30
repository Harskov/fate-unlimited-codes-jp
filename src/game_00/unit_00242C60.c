#include "common.h"
#include "types.h"

int sceMcInit(void);

extern int D_00524514[];

extern int D_00524518[];

extern int D_0052450C[];

extern int D_00528B28[];

extern u8 D_00528B30[];

extern u8 D_00528B38[];

extern u8 D_00528B40[];

extern int D_00528B48[];

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00242C60", func_00242C60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00242C60", func_002430F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00242C60", func_00243160);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00242C60", func_002434D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00242C60", func_00243890);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00242C60", func_002439E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00242C60", func_00243A80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00242C60", func_00243CF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00242C60", func_00243DD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00242C60", func_00244A90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00242C60", func_00244BC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00242C60", func_00244CA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00242C60", func_00244D90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00242C60", func_00244E70);

void func_00244EB0(void)
{
    D_00524514[0] = 0;
    D_00524518[0] = 0;
    D_0052450C[0] = sceMcInit();
    D_00528B28[0] = 0;
    D_00528B30[0] = 0;
    D_00528B38[0] = 0;
    D_00528B40[0] = 0;
    D_00528B48[0] = 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00242C60", func_00244F10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00242C60", func_00246520);
