#include "common.h"

void func_001F2D70();

typedef struct Obj_001F27D0 {
    u8 unk_0[0x38];
    s32 unk_38;
} Obj_001F27D0;

void func_001F27F0();

void func_002B1E28(s32 arg0, void (*arg1)(), s32 arg2);

typedef struct Obj16 {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 z;
    /* 0x0C */ f32 w;
} Obj16;

typedef struct Obj_001F2EF0 {
    u8 unk_0[0x1C];
    Obj16 unk_1C;
    u8 unk_2C[0x20];
    /* 0x4C */ s32 flags;
} Obj_001F2EF0;

void func_002B0538();

typedef struct Obj_001F2860 {
    u8 unk_0[0x190];
    s32 unk_190;
} Obj_001F2860;

s32 func_00204A80();

void func_002A7CF8();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F2070", func_001F2070);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F2070", func_001F2120);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F2070", func_001F24B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F2070", func_001F2630);

void func_001F27D0(Obj_001F27D0 *arg0, s32 arg1)
{
    func_002B1E28(arg0->unk_38, func_001F27F0, arg1);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F2070", func_001F27F0);

void func_001F2860(Obj_001F2860 *arg0, s32 arg1)
{
    if (arg0->unk_190 != 0) {
        func_002A7CF8(arg0->unk_190, func_00204A80(arg1));
    }
}

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

Obj_001F2EF0 *func_001F2EF0(Obj_001F2EF0 *arg0, Obj16 *arg1)
{
    if (arg0->flags & 2) {
        func_002B0538();
    }
    arg0->unk_1C = *arg1;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F2070", func_001F2F60);
