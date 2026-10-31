#include "common.h"

typedef struct Obj_00326D90 {
    u8 pad_0[0x18];
    s32 unk_18;
    u8 pad_1C[0x8];
    s32 unk_24;
} Obj_00326D90;

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325D40", func_00325D40);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325D40", func_00325EC0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325D40", func_00325FC0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325D40", func_00326170);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325D40", func_003262A0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325D40", func_00326370);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325D40", func_003263F0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325D40", func_003264A0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325D40", func_00326560);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325D40", func_00326620);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325D40", func_003266C0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325D40", func_00326780);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325D40", func_003269A0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325D40", func_00326B40);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00325D40", func_00326CD0);

void func_00326D90(Obj_00326D90 *arg0)
{
    arg0->unk_24 &= ~2;
    arg0->unk_18 = 0;
}
