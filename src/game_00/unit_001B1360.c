#include "common.h"

typedef int s32;

void memset();

extern s32 D_00523B38[];

void func_001E7D20();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B1360", func_001B1360);

void func_001B13B0(s32 arg0)
{
    memset(arg0 + 0x14C4, 0, 0xA8);
}

s32 func_001B13C0(char *arg0)
{
    s32 a1 = *(s32 *)(arg0 + 0x1E0);

    if (a1 & 0x05008000)
        return 0;
    if (*(s32 *)(arg0 + 0x1EC) & 0xC00000)
        return 0;
    if (*(s32 *)(arg0 + 0x24B8) > 0)
        return 0;
    if (*(s32 *)(arg0 + 0x1E4) & 0xA00)
        return 0;
    if ((a1 & 0x02120000) && (*(s32 *)(arg0 + 0x53C) != 0x38))
        return 0;
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B1360", func_001B1440);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B1360", func_001B24C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B1360", func_001B2500);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B1360", func_001B2660);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B1360", func_001B29C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B1360", func_001B2C30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B1360", func_001B2D60);

void func_001B2E60(char *arg0, s32 *arg1)
{
    s32 *p;

    if (*(s32 *)(arg0 + 0x1EC) & 0x2000) {
        p = (s32 *)arg1[1];
        *p |= 0x10;
    } else {
        p = (s32 *)arg1[1];
        *p &= ~0x10;
    }
    if (arg1[0] & 2) {
        p = (s32 *)arg1[1];
        *p |= 0x1000;
    } else {
        p = (s32 *)arg1[1];
        *p &= ~0x1000;
    }
    func_001E7D20(arg1[1], *(s32 *)*(s32 *)(arg0 + 0x3C), D_00523B38[*(s32 *)arg0]);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B1360", func_001B2EF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B1360", func_001B2FA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B1360", func_001B30E0);
