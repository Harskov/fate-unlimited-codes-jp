#include "common.h"

extern int D_003D75C8[];

typedef struct Obj_001F3830 {
    u8 unk_0[0x38];
    s32 unk_38;
} Obj_001F3830;

extern void func_001F3850();

extern void func_002B1E28(s32, void (*)(), s32);

typedef struct Obj_001F42D0 {
    u8 unk_0[4];
    s32 unk_4;
} Obj_001F42D0;

extern void func_001F4300();

extern void func_002E6908();

extern int D_0052479C[];

extern void func_002C42A0();

extern void func_002C4200();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F3630", func_001F3630);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F3630", func_001F36E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F3630", func_001F37D0);

void func_001F3830(Obj_001F3830 *arg0)
{
    func_002B1E28(arg0->unk_38, func_001F3850, 0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F3630", func_001F3850);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F3630", func_001F39D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F3630", func_001F3B60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F3630", func_001F3C70);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F3630", func_001F4070);

void func_001F4150(int v)
{
    D_003D75C8[0] = v;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F3630", func_001F4160);

int func_001F42D0(Obj_001F42D0 *arg0)
{
    int result;

    result = 0;
    func_002E6908(arg0->unk_4, func_001F4300, &result);
    return result;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F3630", func_001F4300);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F3630", func_001F4360);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F3630", func_001F47B0);

int func_001F4870(int arg0, int arg1)
{
    func_002C42A0(D_0052479C[0], arg0);
    func_002C4200(arg1, arg0);
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F3630", func_001F48C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F3630", func_001F4900);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F3630", func_001F49E0);
