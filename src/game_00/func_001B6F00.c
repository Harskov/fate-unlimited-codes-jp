#include "game_00/vec.h"

typedef float f32;

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
