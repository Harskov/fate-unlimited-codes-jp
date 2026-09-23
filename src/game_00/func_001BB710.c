#include "game_00/obj2524.h"

int func_001BB710(Obj2524 *arg0)
{
    Sub220 *p;
    int v;

    if (arg0 == 0)
        return 0;
    if (arg0->unk_C != 2)
        return 0;
    p = &arg0->sub220;
    if (p != 0) {
        v = p->index;
        return v == 1;
    }
    return 0;
}
