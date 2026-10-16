#include "common.h"

void func_001F2D70();

typedef struct Obj_001F27D0 {
    u8 unk_0[0x38];
    s32 unk_38;
} Obj_001F27D0;

void func_001F27F0();

void func_002B1E28(s32 arg0, void (*arg1)(), s32 arg2);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F2070", func_001F2070);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F2070", func_001F2120);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F2070", func_001F24B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F2070", func_001F2630);

void func_001F27D0(Obj_001F27D0 *arg0, s32 arg1)
{
    func_002B1E28(arg0->unk_38, func_001F27F0, arg1);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F2070", func_001F27F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F2070", func_001F2860);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F2070", func_001F28B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F2070", func_001F2CA0);

void func_001F2D40(s32 arg0, s32 arg1)
{
    func_001F2D70(arg0, arg1, 2);
}

void func_001F2D50(s32 arg0, s32 arg1)
{
    func_001F2D70(arg0, arg1, 1);
}

void func_001F2D60(int arg0, int arg1)
{
    func_001F2D70(arg0, arg1, 0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F2070", func_001F2D70);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F2070", func_001F2EF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F2070", func_001F2F60);
