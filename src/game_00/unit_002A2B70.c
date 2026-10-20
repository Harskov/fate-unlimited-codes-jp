#include "common.h"

typedef struct Obj_002A2B70 {
    u8 pad_0[0x78];
    s32 unk_78;
    s32 unk_7C;
    u8 pad_80[0x10];
    s32 unk_90;
} Obj_002A2B70;

Obj_002A2B70 *func_002A2B70(Obj_002A2B70 *p, s32 arg1, s32 arg2)
{
    p->unk_7C = arg1;
    p->unk_78 = arg2;
    p->unk_90 = 0;
    return p;
}
