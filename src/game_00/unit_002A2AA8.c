#include "common.h"

typedef struct Obj_002A2AA8 {
    u8 unk_0[8];
    s32 unk_8;
} Obj_002A2AA8;

Obj_002A2AA8 *func_002A2AA8(Obj_002A2AA8 *arg0, s32 arg1)
{
    arg0->unk_8 |= arg1;
    return arg0;
}
