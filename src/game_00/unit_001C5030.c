#include "common.h"

typedef struct Sub_001C5380 {
    u8 unk_0[0x24];
    s32 unk_24;
} Sub_001C5380;

typedef struct Obj_001C5380 {
    u8 unk_0[0x2448];
    Sub_001C5380 *unk_2448;
} Obj_001C5380;

s32 func_001C4B60();

void func_001C4C30();

s32 func_001C4BA0();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5030", func_001C5030);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5030", func_001C51C0);

void func_001C5360(Obj_001C5380 *arg0, s32 arg1)
{
    Sub_001C5380 *s = arg0->unk_2448;
    if (s != 0) {
        s->unk_24 = s->unk_24 | arg1;
    }
}

void func_001C5380(Obj_001C5380 *arg0, s32 arg1)
{
    Sub_001C5380 *s = arg0->unk_2448;
    s->unk_24 = s->unk_24 & ~arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5030", func_001C53A0);

void func_001C53F0(s32 arg0, s32 arg1, s32 arg2)
{
    s32 r = func_001C4BA0(arg0 + 0x460);
    func_001C4C30(arg0, r, arg2);
}

void func_001C5440(s32 arg0, s32 arg1, s32 arg2)
{
    s32 r;

    r = func_001C4B60(arg1, arg0);
    func_001C4C30(arg0, r, arg2);
}

void func_001C5490(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 r;

    r = func_001C4B60(arg0, arg1);
    func_001C4C30(arg0, arg2 + r, arg3);
}

void func_001C54E0(s32 arg0, s32 arg1, s32 arg2)
{
    s32 r;

    r = func_001C4B60(arg0, arg1);
    func_001C4C30(arg0, r, arg2);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5030", func_001C5520);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5030", func_001C55A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5030", func_001C5630);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5030", func_001C5680);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5030", func_001C57E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5030", func_001C5830);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5030", func_001C5880);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5030", func_001C58D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5030", func_001C5920);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C5030", func_001C5970);
