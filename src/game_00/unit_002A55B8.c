#include "common.h"

typedef struct Obj_002A55B8 {
    u8 pad[0xE0];
    s32 unk_E0;
} Obj_002A55B8;

void *func_002A55B8(Obj_002A55B8 *o)
{
    return &o->unk_E0;
}
