#include "game_00/arr220.h"

void func_001A49A0(Arr220 *a, int i)
{
    Sub220 *s = &a->sub;

    if (i >= s->count)
        return;

    s->index = i;
    s->cur = s->base + i * 28;
}
