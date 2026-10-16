#include "common.h"

typedef struct Obj_002A55C0 {
    u8 unk_0[0xF0];
    int unk_F0;
} Obj_002A55C0;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002A55C0", func_002A55C0);

int func_002A55F0(Obj_002A55C0 *p)
{
    return (p->unk_F0 >> 2) & 1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002A55C0", func_002A5600);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002A55C0", func_002A5690);
