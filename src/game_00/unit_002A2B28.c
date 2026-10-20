#include "common.h"

typedef struct Obj_002A2B48 {
    u8 pad_0[0x70];
    s32 unk_70;
    s32 unk_74;
} Obj_002A2B48;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002A2B28", func_002A2B28);

Obj_002A2B48 *func_002A2B48(Obj_002A2B48 *p, s32 *arg1, s32 *arg2)
{
    if (arg1 != 0) {
        *arg1 = p->unk_70;
    }
    if (arg2 != 0) {
        *arg2 = p->unk_74;
    }
    return p;
}
