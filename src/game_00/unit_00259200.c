#include "common.h"

void func_00210D60(void);

typedef struct Obj12 {
    float unk_0;
    float unk_4;
    float unk_8;
} Obj12;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00259200", func_00259200);

int func_00259790(Obj12 *arg0, Obj12 *arg1)
{
    if (arg0->unk_0 == arg1->unk_0 && arg0->unk_4 == arg1->unk_4 && arg0->unk_8 == arg1->unk_8) {
        return 1;
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00259200", func_002597E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00259200", func_00259E60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00259200", func_0025A550);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00259200", func_0025A7A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00259200", func_0025A860);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00259200", func_0025AA40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00259200", func_0025AAF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00259200", func_0025AF20);

void func_0025B380(void)
{
    func_00210D60();
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00259200", func_0025B390);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00259200", func_0025B430);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00259200", func_0025B920);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00259200", func_0025BC20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00259200", func_0025BFC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00259200", func_0025C070);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00259200", func_0025C560);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00259200", func_0025C5E0);
