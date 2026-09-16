#include "game_00/arr220.h"

unsigned char *func_001A4960(Arr220 *a, int i)
{
    Sub220 *s = &a->sub;

    if (i >= s->count)
        return 0;
    return s->base + i * 28;
}
