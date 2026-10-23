#include "common.h"

typedef struct Obj_001F3110 {
    u8 pad_0[0x38];
    s32 unk_38;
} Obj_001F3110;

void func_001F3010();

void func_002B1E28();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F2FB0", func_001F2FB0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F2FB0", func_001F3010);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F2FB0", func_001F3080);

void func_001F3110(Obj_001F3110 *arg0, s32 arg1, s32 arg2)
{
    s32 args[2];

    args[0] = arg1;
    args[1] = arg2;
    func_002B1E28(arg0->unk_38, func_001F3010, args);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F2FB0", func_001F3140);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F2FB0", func_001F3190);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F2FB0", func_001F3470);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F2FB0", func_001F3510);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F2FB0", func_001F35C0);
