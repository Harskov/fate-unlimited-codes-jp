#include "common.h"

typedef struct Obj002DA930 {
    u8 pad[0x4];
    s32 unk_4;
} Obj002DA930;

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002DA890", func_002DA890);

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002DA890", func_002DA8A0);

void func_002DA930(Obj002DA930 *o)
{
    o->unk_4 = 0;
}
