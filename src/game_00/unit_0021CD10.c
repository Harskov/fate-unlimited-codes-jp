#include "common.h"
#include "types.h"

int sceGsSyncV(int mode);

extern int D_00527580[];

extern int D_00527588[];

extern s32 D_00527580[];

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021CD10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021CD70);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021CDC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021CE40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021CF90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021D030);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021D1C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021D1E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021D260);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021D320);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021D370);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021D380);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021D450);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021D4D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021D510);

void func_0021D5E0(void)
{
    D_00527580[0] = 0;
}

/* evidence: loops while sceGsSyncV(0) returns the field passed in, then sets D_00527580 = 1 and D_00527588 = 0 */
void waitNextField(int field)
{
    while (sceGsSyncV(0) == field) {
    }
    D_00527580[0] = 1;
    D_00527588[0] = 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021D640);
