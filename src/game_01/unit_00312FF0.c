#include "common.h"

typedef struct Obj_00312FF0 {
    u8 unk_0[0x18];
    s32 unk_18;
} Obj_00312FF0;

Obj_00312FF0 *func_00312FF0(Obj_00312FF0 *arg0, s32 arg1)
{
    Obj_00312FF0 *r;

    r = 0;
    if (arg0 != 0) {
        arg0->unk_18 = arg1;
        r = arg0;
    }
    return r;
}
