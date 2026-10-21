#include "common.h"
#include "game_00/unit_001E6380.h"

extern s32 D_0051F220[];

void func_001E7420(void);

f32 func_00167D10();

typedef struct Obj_001E6C00 {
    u8 unk_0[0x2C];
    u8 unk_2C[0x18];
    u8 unk_44[8];
} Obj_001E6C00;

typedef struct Obj_001E6380 {
    u8 unk_0[0x58];
    f32 unk_58;
} Obj_001E6380;

void func_001E6380(Obj_001E6380 *arg0, f32 arg1)
{
    if (arg1 != 0.0f)
        arg0->unk_58 = arg0->unk_58 + 1.5f * -arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E6380", func_001E63C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E6380", func_001E6530);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E6380", func_001E65B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E6380", func_001E6640);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E6380", func_001E6820);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E6380", func_001E6960);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E6380", func_001E69E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E6380", func_001E6A30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E6380", func_001E6A90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E6380", func_001E6BC0);

void func_001E6C00(Obj_001E6C00 *arg0)
{
    func_00167D10(arg0->unk_44, arg0->unk_2C);
}

f32 func_001E6C10(Obj_001E6C10 *arg0)
{
    return func_00167D10(arg0->unk_38, arg0->unk_20);
}

s32 func_001E6C20(void)
{
    return D_0051F220[0];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E6380", func_001E6C30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E6380", func_001E6F20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E6380", func_001E7340);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E6380", func_001E7420);

void func_001E7560(void)
{
    func_001E7420();
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E6380", func_001E7570);
