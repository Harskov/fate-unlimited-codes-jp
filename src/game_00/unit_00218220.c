#include "common.h"

typedef struct Obj {
    u8 pad[0x64];
    f32 unk_64;
} Obj;

extern void func_0019ADE0(Obj *, f32, s32);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00218220", func_00218220);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00218220", func_00218270);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00218220", func_002183D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00218220", func_00218550);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00218220", func_002185F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00218220", func_002186C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00218220", func_00218790);

void func_00218860(Obj *arg0)
{
    func_0019ADE0(arg0, arg0->unk_64, 3);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00218220", func_00218870);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00218220", func_00218CA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00218220", func_00218D20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00218220", func_00218E20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00218220", func_00218EC0);
