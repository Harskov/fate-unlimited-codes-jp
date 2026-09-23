#include "game_00/obj2524.h"

int func_001BB890(Obj2524 *arg0, int arg1)
{
    Obj53C *p;
    Node23E8 *n;
    Item150 *it;

    if (arg0 == 0)
        return 0;
    if (arg0->unk_3C == 0)
        return 0;
    p = arg0->unk_2508;
    if (p == 0)
        return 0;
    n = p->unk_23E8;
    while ((it = n->unk_0) != (Item150 *)1) {
        if (it != 0 && it->unk_150 == arg1)
            return 1;
        n = n->unk_8;
    }
    return 0;
}
