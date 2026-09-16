#include "game_00/arr220.h"

void func_001A5450(Arr220 *a, int i, int val)
{
    Sub220 *s = &a->sub;
    int end;

    if (i < 0) {
        end = s->count;
        i = 0;
    } else {
        if (i >= s->count)
            return;
        end = i + 1;
    }

    for (; i < end; i++)
        ((Elem220 *)s->base)[i].unk_18 = val;
}
