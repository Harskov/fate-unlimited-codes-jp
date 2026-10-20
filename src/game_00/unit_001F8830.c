#include "common.h"

typedef struct Obj {
    int unk_0;
    int unk_4;
} Obj;

typedef struct Obj_001F8E00 {
    int unk_0;
    f32 unk_4;
} Obj_001F8E00;

extern void func_001F8E30(f32 arg0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F8830", func_001F8830);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F8830", func_001F88C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F8830", func_001F8960);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F8830", func_001F8AE0);

int func_001F8C60(Obj *arg0)
{
    return arg0->unk_4 * 48;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F8830", func_001F8C80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F8830", func_001F8D40);

void func_001F8E00(int arg0, Obj_001F8E00 *arg1, Obj_001F8E00 *arg2, f32 arg3)
{
    f32 base = arg1->unk_4;
    func_001F8E30((arg3 - base) / (arg2->unk_4 - base));
}
