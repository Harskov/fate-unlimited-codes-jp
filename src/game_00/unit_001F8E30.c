#include "common.h"

typedef struct Obj {
    int unk_0;
    int unk_4;
} Obj;

typedef struct Obj_001FA530 {
    int unk_0;
    f32 unk_4;
} Obj_001FA530;

extern void func_001FA590(f32 arg0);

extern void func_001FAA30(f32 arg0);

typedef struct Obj_001F9060 {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 z;
} Obj_001F9060;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F8E30", func_001F8E30);

void func_001F9060(Obj_001F9060 *arg0, Obj_001F9060 *arg1)
{
    arg0->x = -arg1->x;
    arg0->y = -arg1->y;
    arg0->z = -arg1->z;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F8E30", func_001F9090);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F8E30", func_001F91D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F8E30", func_001F9370);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F8E30", func_001F9740);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F8E30", func_001F9B10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F8E30", func_001F9F30);

int func_001FA350(Obj *arg0)
{
    return arg0->unk_4 * 24;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F8E30", func_001FA370);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F8E30", func_001FA450);

void func_001FA530(int arg0, Obj_001FA530 *arg1, Obj_001FA530 *arg2, f32 arg3)
{
    f32 base = arg1->unk_4;
    func_001FA590((arg3 - base) / (arg2->unk_4 - base));
}

void func_001FA560(int arg0, Obj_001FA530 *arg1, Obj_001FA530 *arg2, f32 arg3)
{
    f32 base = arg1->unk_4;
    func_001FAA30((arg3 - base) / (arg2->unk_4 - base));
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F8E30", func_001FA590);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F8E30", func_001FAA30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F8E30", func_001FAED0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F8E30", func_001FB090);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F8E30", func_001FB250);
