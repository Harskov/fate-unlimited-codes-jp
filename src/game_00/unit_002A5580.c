#include "common.h"

typedef struct Obj_002A5580 {
    u8 pad_0[0x110];
    s32 unk_110;
    s32 unk_114;
    s32 unk_118;
} Obj_002A5580;

Obj_002A5580 *func_002A5580(Obj_002A5580 *o, s32 *out0, s32 *out1, s32 *out2)
{
    if (out0 != 0) {
        *out0 = o->unk_110;
    }
    if (out1 != 0) {
        *out1 = o->unk_114;
    }
    if (out2 != 0) {
        *out2 = o->unk_118;
    }
    return o;
}
