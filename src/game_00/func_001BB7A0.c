#include "game_00/obj2524.h"

int func_001BB7A0(Obj2524 *arg0)
{
    Sub2524 *p;
    int v;

    if (arg0 == 0)
        return 0;
    if (arg0->unk_C != 0xA)
        return 0;
    if (arg0->unk_1F4 & 0x20000)
        return 1;
    p = &arg0->sub;
    if (p != 0) {
        v = p->unk_0;
        return v > 0;
    }
    return 0;
}
