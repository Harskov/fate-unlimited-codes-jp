#include "game_00/obj2524.h"

int func_001BB690(Obj2524 *arg0)
{
    Sub2524 *p;
    int v;

    if (arg0 == 0)
        return 0;
    if (arg0->unk_C != 2)
        return 0;
    p = &arg0->sub;
    if (p != 0) {
        v = p->unk_0;
        return (v < 6) ^ 1;
    }
    return 0;
}
