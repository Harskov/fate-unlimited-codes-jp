#include "common.h"

int func_00212490(unsigned int id)
{
    if (id == 0xFFFF)
        return 0;
    if (id < 0x60)
        return 1;
    if (id < 0x34D)
        return 2;
    return 3;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00212490", func_002124C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00212490", func_002126A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00212490", func_00212740);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00212490", func_002129B0);

int func_00212B60(int *ids)
{
    int count = 0;

    while (*ids != 0xFFFF) {
        ids++;
        count++;
    }
    return count;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00212490", func_00212BA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00212490", func_00212BF0);

int func_00213080(unsigned int id)
{
    if (id >= 0x655)
        return -1;
    return id / 441;
}

int func_002130B0(unsigned int id)
{
    if (id == 0xFFFF)
        return 0;
    if (id < 0x60)
        return 1;
    if (id < 0x655)
        return 2;
    return 3;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00212490", func_002130E0);

void func_00213160(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00212490", func_00213170);
