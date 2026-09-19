#include "game_00/obj2524.h"

int func_001BB3C0(Obj2524 *arg0)
{
    Obj53C *p;
    int v;

    if (arg0 == 0)
        return 0;
    if (arg0->unk_C != 7)
        return 0;
    p = arg0->unk_2508;
    if (p == 0)
        return 0;
    v = p->unk_53C;
    if (v == 0xB4 && v == 0x38)
        return 1;
    return 0;
}
