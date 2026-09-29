#include "common.h"

typedef struct Holder { unsigned char pad[0x60]; short *table; } Holder;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00161800", func_00161800);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00161800", func_00161970);

int func_001619C0(Holder *h, int i)
{
    short *t = h->table;
    if (t == 0)
        return -1;
    if (i < 0)
        return -1;
    return (t[0] <= i) ? -1 : t[i + 1];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00161800", func_00161A00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00161800", func_00161B70);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00161800", func_00161E60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00161800", func_00161F40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00161800", func_001620E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00161800", func_00162340);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00161800", func_00162370);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00161800", func_00162380);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00161800", func_00165E40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00161800", func_00165EA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00161800", func_00165EE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00161800", func_00165EF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00161800", func_00166AF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00161800", func_00166B90);
