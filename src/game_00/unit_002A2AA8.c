#include "common.h"

typedef struct Obj_002A2AA8 {
    u8 unk_0[8];
    s32 unk_8;
} Obj_002A2AA8;

Obj_002A2AA8 *func_002A2AA8(Obj_002A2AA8 *p, s32 bits)
{
    p->unk_8 |= bits;
    return p;
}
