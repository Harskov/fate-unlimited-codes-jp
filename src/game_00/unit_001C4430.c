#include "common.h"
#include "types.h"

void func_001A46A0(void);

typedef struct Obj {
    u8 unk_0[0x14C];
    s32 unk_14C;
} Obj;

s32 func_001C4430(Obj *arg0, s32 arg1)
{
    arg0->unk_14C &= arg1;
    return arg0->unk_14C;
}

s32 func_001C4450(Obj *arg0, s32 arg1)
{
    arg0->unk_14C |= arg1;
    return arg0->unk_14C;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C4430", func_001C4470);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C4430", func_001C4590);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C4430", func_001C45B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C4430", func_001C4660);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C4430", func_001C46F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C4430", func_001C4720);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C4430", func_001C4770);

void func_001C4890(void)
{
    func_001A46A0();
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C4430", func_001C48A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C4430", func_001C48D0);

int func_001C4980(void)
{
    return 0;
}

int func_001C4990(void)
{
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C4430", func_001C49A0);
