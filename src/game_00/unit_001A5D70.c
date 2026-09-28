#include "common.h"

typedef struct Obj {
    int unk_0;
    unsigned int flags;
} Obj;

typedef struct Obj_001A9A00 {
    unsigned char pad[0x1E0];
    unsigned int flags;
    unsigned char pad2[8];
    unsigned int flags2;
} Obj_001A9A00;

typedef struct Obj_001A9D80 {
    unsigned char unk_0[0x1F4];
    int flags;
    unsigned char unk_1F8[0x49C - 0x1F8];
    float unk_49C;
    unsigned char unk_4A0[0x4EC - 0x4A0];
    float unk_4EC;
} Obj_001A9D80;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A5D70", func_001A5D70);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A5D70", func_001A6190);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A5D70", func_001A6290);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A5D70", func_001A6300);

int func_001A6370(Obj *p)
{
    return p->flags & 1;
}

int func_001A6380(Obj *p)
{
    return p->flags & 1;
}

int func_001A6390(Obj *p)
{
    return p->flags & 1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A5D70", func_001A63A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A5D70", func_001A6680);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A5D70", func_001A66B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A5D70", func_001A67F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A5D70", func_001A6AA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A5D70", func_001A7040);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A5D70", func_001A7470);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A5D70", func_001A75D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A5D70", func_001A9320);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A5D70", func_001A9950);

int func_001A9A00(Obj_001A9A00 *p)
{
    unsigned int v = p->flags;
    if (v & 0x20000)
        return 1;
    if (v & ~0x1107)
        return 0;
    return !(p->flags2 & 0x10000100);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A5D70", func_001A9A50);

void func_001A9D80(Obj_001A9D80 *o)
{
    o->unk_49C = o->unk_4EC;
    o->flags = o->flags & ~4;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A5D70", func_001A9DA0);
