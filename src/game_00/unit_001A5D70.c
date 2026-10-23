#include "common.h"

#include "game_00/kindflags.h"

typedef struct Obj_001A9A00 {
    unsigned char unk_0[0x1E0];
    /* 0x1E0 */ u32 flags_1E0;
    unsigned char unk_1E4[8];
    /* 0x1EC */ u32 flags_1EC;
} Obj_001A9A00;

typedef struct Obj_001A9D80 {
    unsigned char unk_0[0x1F4];
    /* 0x1F4 */ int unk_1F4;
    unsigned char unk_1F8[0x49C - 0x1F8];
    float unk_49C;
    unsigned char unk_4A0[0x4EC - 0x4A0];
    float unk_4EC;
} Obj_001A9D80;

int func_001B7CC0();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A5D70", func_001A5D70);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A5D70", func_001A6190);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A5D70", func_001A6290);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A5D70", func_001A6300);

int func_001A6370(Obj8 *p)
{
    return p->flags & 1;
}

int func_001A6380(Obj8 *p)
{
    return p->flags & 1;
}

int func_001A6390(Obj8 *p)
{
    return p->flags & 1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A5D70", func_001A63A0);

int func_001A6680(void)
{
    int r;

    r = func_001B7CC0();
    if (r != 0)
        return r;
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A5D70", func_001A66B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A5D70", func_001A67F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A5D70", func_001A6AA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A5D70", func_001A7040);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A5D70", func_001A7470);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A5D70", func_001A75D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A5D70", func_001A9320);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A5D70", func_001A9950);

int func_001A9A00(Obj_001A9A00 *arg0)
{
    u32 v = arg0->flags_1E0;
    if (v & 0x20000)
        return 1;
    if (v & ~0x1107)
        return 0;
    return !(arg0->flags_1EC & 0x10000100);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A5D70", func_001A9A50);

void func_001A9D80(Obj_001A9D80 *o)
{
    o->unk_49C = o->unk_4EC;
    o->unk_1F4 = o->unk_1F4 & ~4;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A5D70", func_001A9DA0);
