#include "common.h"
#include "types.h"

extern u8 D_0051D890[];

extern u32 D_0051D8A0[];

extern s32 D_0051E438[];

extern u32 D_00523AFC[];

void memset();

extern s32 D_00523850[];

extern void func_0020DF80(void *, s32, s32);

extern void func_0020E040(void *, s32, s32);

extern void func_0020DFE0(void *, s32, s32);

extern s32 D_005237A0[];

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C7170", func_001C7170);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C7170", func_001C7390);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C7170", func_001C7780);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C7170", func_001C7880);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C7170", func_001C7A00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C7170", func_001C7B30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C7170", func_001C7D70);

void func_001C85B0(void)
{
    memset(D_0051D890, 0, 0xC40);
    D_0051E438[0] = 1;
    if (!(D_00523AFC[0] & 4)) {
        D_0051D8A0[0] |= 0x10000000;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C7170", func_001C8620);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C7170", func_001C8640);

void func_001C8660(s32 arg0)
{
    func_0020E040(D_005237A0, 0xB0, arg0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C7170", func_001C8680);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C7170", func_001C86A0);

void func_001C86F0(s32 arg0)
{
    func_0020DF80(D_00523850, 0xB0, arg0);
}

void func_001C8710(s32 arg0)
{
    func_0020DFE0(D_00523850, 0xB0, arg0);
}

void func_001C8730(s32 arg0)
{
    func_0020E040(D_00523850, 0xB0, arg0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C7170", func_001C8750);
