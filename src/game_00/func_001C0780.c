#include "game_00/obj2524.h"

int func_001C0780(Obj2524 *arg0, float a, float b)
{
    int r = 0;

    if (arg0 != 0) {
        if (arg0->unk_2508 != 0) {
            if (a < 0.0f) {
                if (a < -b)
                    r = 1;
            } else if (a > 0.0f) {
                if (a > b)
                    r = -1;
            }
        }
    }
    return r;
}
