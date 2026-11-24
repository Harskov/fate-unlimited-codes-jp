#include "common.h"

typedef struct Obj_00359500 {
    u8 unk_0[0x2524];
    s32 unk_2524;
} Obj_00359500;

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003593B0", func_003593B0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003593B0", func_00359470);

void func_00359500(Obj_00359500 *arg0)
{
    s32 *p;

    p = &arg0->unk_2524;
    if (*p > 0) {
        *p = func_0020E5F0(*p, -1, 0, 0x1869F);
    }
}

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003593B0", func_00359550);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003593B0", func_00359590);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003593B0", func_00359680);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003593B0", func_003597D0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003593B0", func_00359AE0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003593B0", func_00359B80);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003593B0", func_00359C10);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003593B0", func_00359CA0);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003593B0", func_00359D80);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003593B0", func_00359E40);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003593B0", func_0035A080);

void func_0035A1C0(void)
{
    func_0036EA30();
    func_003798B0();
    func_0035B830();
}

void func_0035A1F0(void)
{
    func_0035B870();
    func_00379940();
    func_0036EAC0();
}

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003593B0", func_0035A220);

INCLUDE_ASM("asm/nonmatchings/game_02/unit_003593B0", func_0035A6B0);
