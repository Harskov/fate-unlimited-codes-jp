#include "game_00/flags4.h"

int func_001BBC50(Flags4 *arg0)
{
    int r;
    int v;

    r = 0;
    v = arg0->unk_4;
    if (v & 0x1) {
        if (v & 0x2)
            r = 1;
    }
    return r;
}
