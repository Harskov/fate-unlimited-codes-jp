#include "common.h"
#include "types.h"

int sceGsSyncV(int mode);

extern int D_00527580[];

extern int D_00527588[];

extern s32 D_00527580[];

void sceSdRemote();

void func_0021D380(void);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021CD10);

void func_0021CD70(int arg0)
{
    sceSdRemote(1, 0x8010, 0xF80, arg0);
    sceSdRemote(1, 0x8010, 0x1080, arg0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021CDC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021CE40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021CF90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021D030);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021D1C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021D1E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021D260);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021D320);

void func_0021D370(void)
{
    func_0021D380();
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021D380);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021D450);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021D4D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021D510);

void func_0021D5E0(void)
{
    D_00527580[0] = 0;
}

/* probably waits for the next video field: spins until sceGsSyncV(0) returns a field other than the one passed in */
void func_0021D5F0(int field)
{
    while (sceGsSyncV(0) == field) {
    }
    D_00527580[0] = 1;
    D_00527588[0] = 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021CD10", func_0021D640);
