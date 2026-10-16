#include "common.h"

typedef struct Obj002DA930 {
    u8 pad[0x4];
    s32 unk_4;
} Obj002DA930;

typedef struct Obj002DA890 {
    u8 unk_0[4];
    s32 unk_4;
} Obj002DA890;

s32 func_002DA890(Obj002DA890 *o, s32 arg1)
{
    return o->unk_4 -= arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002DA890", func_002DA8A0);

void func_002DA930(Obj002DA930 *o)
{
    o->unk_4 = 0;
}
