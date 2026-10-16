#include "common.h"

typedef struct Obj {
    u8 pad[0x14C];
    s32 unk_14C;
} Obj;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C3100);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C3260);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C3300);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C33F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C3420);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C34D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C3550);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C3660);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C3770);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C37C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C3860);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C3940);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C3A10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C3B20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C4080);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C41A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C42B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C42D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001C3100", func_001C43F0);

s32 func_001C4420(Obj *arg0, s32 arg1)
{
    return arg0->unk_14C & arg1;
}
