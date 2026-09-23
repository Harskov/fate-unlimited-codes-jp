#include "game_00/obj2524.h"

int func_001BB750(Obj2524 *arg0)
{
    Obj53C *p;

    if (arg0 == 0)
        return 0;
    if (arg0->unk_C != 0xA)
        return 0;
    p = arg0->unk_2508;
    if (p == 0)
        return 0;
    if (arg0->unk_C == 0xA && p->unk_53C == 0x10EE)
        return 1;
    return 0;
}
