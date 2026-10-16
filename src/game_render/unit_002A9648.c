#include "common.h"

typedef struct Obj {
    unsigned char pad[0x20];
    s32 unk_20;
} Obj;

s32 func_002A9648(Obj *arg0)
{
    arg0->unk_20 = 1;
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002A9648", func_002A9658);
