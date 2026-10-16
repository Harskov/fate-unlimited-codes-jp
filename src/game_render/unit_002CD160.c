#include "common.h"

typedef struct Obj_002CD160 {
    u8 unk_0[0x14];
    s32 unk_14;
} Obj_002CD160;

s32 func_002CD160(Obj_002CD160 *arg0)
{
    return arg0->unk_14 = 0x7FFF8;
}

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002CD160", func_002CD170);

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002CD160", func_002CD1B0);
