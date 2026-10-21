#include "common.h"
#include "types.h"
#include "game_00/unit_0015AB90.h"

typedef struct Rec0051A424 {
    s32 unk_00;
    u8 unk_04[0x34];
} Rec0051A424;

extern Rec0051A424 D_0051A424[];

s32 func_00144570(s32);

void func_00143EA8();

void func_00144F88();

void func_00145938();

void func_00145DC0();

void func_00145C50();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015AB90", func_0015AB90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015AB90", func_0015ACE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015AB90", func_0015AE00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015AB90", func_0015AF20);

void func_0015AF90(s32 i, s32 arg1)
{
    func_00144F88(D_0051A424[i].unk_00, arg1);
}

void func_0015AFB0(s32 i)
{
    func_00145938(D_0051A424[i].unk_00);
}

s32 func_0015AFD0(s32 i)
{
    return func_00144570(D_0051A424[i].unk_00) * 60 / 100;
}

void func_0015B030(s32 i)
{
    func_00143EA8(D_0051A424[i].unk_00);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015AB90", func_0015B050);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015AB90", func_0015B0F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015AB90", func_0015B1B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015AB90", func_0015B240);

void func_0015B2C0(s32 i)
{
    func_00145DC0(D_0051A424[i].unk_00);
}

void func_0015B2E0(s32 i)
{
    func_00145C50(D_0051A424[i].unk_00, 0);
}

void func_0015B310(s32 i)
{
    func_00145C50(D_0051A424[i].unk_00, 1);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015AB90", func_0015B340);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015AB90", func_0015B3E0);
