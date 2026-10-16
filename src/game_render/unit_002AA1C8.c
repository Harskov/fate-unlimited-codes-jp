#include "common.h"

typedef struct Obj_002AA388 {
    unsigned char unk_0[0x34];
    int unk_34;
} Obj_002AA388;

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002AA1C8", func_002AA1C8);

int func_002AA388(Obj_002AA388 *arg0)
{
    return (arg0->unk_34 << 5) + 0x30;
}

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002AA1C8", func_002AA398);

int func_002AA438(void)
{
    return 1;
}
