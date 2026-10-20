#include "common.h"

typedef struct Obj_002A2B88 {
    u8 pad_0[0x78];
    s32 unk_78;
    s32 unk_7C;
} Obj_002A2B88;

Obj_002A2B88 *func_002A2B88(Obj_002A2B88 *p, s32 *arg1, s32 *arg2)
{
    if (arg1 != 0) {
        *arg1 = p->unk_7C;
    }
    if (arg2 != 0) {
        *arg2 = p->unk_78;
    }
    return p;
}
