#include "game_00/obj2524.h"

int func_001BB140(Obj2524 *arg0)
{
    Sub2524 *p;

    if (arg0 == 0)
        return 0;
    if (arg0->unk_C != 0x11)
        return 0;
    p = &arg0->sub;
    if (p != 0)
        return p->unk_0 > 0;
    return 0;
}
