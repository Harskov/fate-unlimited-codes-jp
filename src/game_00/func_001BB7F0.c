#include "game_00/obj2524.h"

float func_001BB7F0(Obj2524 *arg0)
{
    Cache2448 *c;
    Sub14C *p;

    if (arg0 == 0)
        return 0.0f;
    c = arg0->unk_2448;
    if (c == 0)
        return 0.0f;
    p = &c->sub14C;
    if (p != 0)
        return p->unk_6C;
    return 0.0f;
}
