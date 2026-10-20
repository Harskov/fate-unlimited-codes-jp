#include "common.h"

typedef struct Obj_00312FC0 {
    s32 unk_0;
    s32 unk_4;
} Obj_00312FC0;

Obj_00312FC0 *func_00312FC0(Obj_00312FC0 *arg0, s32 arg1)
{
    Obj_00312FC0 *r;

    r = 0;
    if (arg0 != 0) {
        arg0->unk_4 = arg1;
        r = arg0;
    }
    return r;
}
