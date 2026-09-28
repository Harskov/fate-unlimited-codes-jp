#include "common.h"
#include "game_00/vec.h"

typedef int s32;

typedef float f32;

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

    out[0] = (b->y - a->y) * (c->z - a->z) - (b->z - a->z) * (c->y - a->y);
    out[1] = (b->z - a->z) * (c->x - a->x) - (b->x - a->x) * (c->z - a->z);
    out[2] = (b->x - a->x) * (c->y - a->y) - (b->y - a->y) * (c->x - a->x);
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
