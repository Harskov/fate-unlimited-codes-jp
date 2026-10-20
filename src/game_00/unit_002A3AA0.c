#include "common.h"

typedef struct Obj_002A3AA0 {
    u8 pad_0[0x48];
    s32 unk_48;
    s32 unk_4C;
} Obj_002A3AA0;

Obj_002A3AA0 *func_002A3AA0(Obj_002A3AA0 *p, s32 *arg1, s32 *arg2)
{
    if (arg1 != 0) {
        *arg1 = p->unk_48;
    }
    if (arg2 != 0) {
        *arg2 = p->unk_4C;
    }
    return p;
}
