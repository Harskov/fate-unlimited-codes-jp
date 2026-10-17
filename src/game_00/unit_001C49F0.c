#include "common.h"

typedef struct Obj {
    unsigned char unk_0[0x14E0];
    int unk_14E0;
} Obj;

void func_001C4C30();

typedef struct Sub_2448 {
    unsigned char unk_0[0x7C];
    /* 0x07C */ int unk_7C;
} Sub_2448;

typedef struct Obj_001C4F90 {
    unsigned char unk_0[0x2448];
    /* 0x2448 */ Sub_2448 *unk_2448;
} Obj_001C4F90;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C49F0", func_001C49F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C49F0", func_001C4AA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C49F0", func_001C4B60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C49F0", func_001C4BA0);

int func_001C4C20(Obj *p)
{
    return p->unk_14E0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C49F0", func_001C4C30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C49F0", func_001C4D50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C49F0", func_001C4DE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C49F0", func_001C4E70);

void func_001C4EE0(int arg0)
{
    func_001C4C30(arg0, -1, 0x80);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C49F0", func_001C4EF0);

int func_001C4F90(Obj_001C4F90 *p)
{
    return p->unk_2448->unk_7C;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C49F0", func_001C4FA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C49F0", func_001C4FE0);
