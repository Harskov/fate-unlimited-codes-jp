#include "game_00/obj2524.h"

float func_001BF8B0(Obj2524 *arg0)
{
    Cache2448 *c;
    Obj2524 *o;

    if (arg0 == 0)
        return 0.0f;
    c = arg0->unk_2448;
    if (c == 0)
        return 0.0f;
    o = c->unk_C;
    if (o == 0)
        return 0.0f;
    return o->unk_2508 != 0 ? o->unk_464 - o->unk_2508->unk_464 : 0.0f;
}
