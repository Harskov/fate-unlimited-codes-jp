#include "game_00/obj2524.h"

int func_001BB840(Obj2524 *arg0)
{
    Cache2448 *c;
    Sub14C *p;

    if (arg0 == 0)
        return 0;
    c = arg0->unk_2448;
    if (c == 0)
        return 0;
    p = &c->sub14C;
    if (p == 0)
        return 0;
    if (p->unk_7C < p->unk_1C)
        return 1;
    else if (p->unk_7C > p->unk_1C)
        return -1;
    return 0;
}
