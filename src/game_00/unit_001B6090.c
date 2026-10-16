#include "common.h"
#include "game_00/vec.h"

extern s32 D_0051D754[];

extern s32 D_0051D760[];

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B6090", func_001B6090);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B6090", func_001B6110);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B6090", func_001B6190);

s32 func_001B6220(void)
{
    return D_0051D754[0];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B6090", func_001B6230);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B6090", func_001B6780);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B6090", func_001B6BD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B6090", func_001B6CE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B6090", func_001B6E30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B6090", func_001B6E60);

void func_001B6F00(f32 *out, Vec3 *a, Vec3 *b, Vec3 *c)
{
    if (out == 0)
        return;
    if (a == 0)
        return;
    if (b == 0)
        return;
    if (c == 0)
        return;

    out[0] = (b->unk_4 - a->unk_4) * (c->unk_8 - a->unk_8) - (b->unk_8 - a->unk_8) * (c->unk_4 - a->unk_4);
    out[1] = (b->unk_8 - a->unk_8) * (c->unk_0 - a->unk_0) - (b->unk_0 - a->unk_0) * (c->unk_8 - a->unk_8);
    out[2] = (b->unk_0 - a->unk_0) * (c->unk_4 - a->unk_4) - (b->unk_4 - a->unk_4) * (c->unk_0 - a->unk_0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B6090", func_001B6FD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B6090", func_001B7040);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B6090", func_001B70C0);

s32 func_001B7230(s32 *arg0)
{
    if (arg0 != 0) {
        D_0051D760[0] += 1;
        *arg0 |= 0x100;
    }
    return D_0051D760[0];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B6090", func_001B7270);
