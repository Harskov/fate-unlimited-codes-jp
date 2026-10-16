#include "common.h"

typedef struct Obj_002D5780 {
    unsigned char pad[0x10];
    s32 unk_10;
} Obj_002D5780;

void func_002D5780(Obj_002D5780 *p, s32 arg1)
{
    p->unk_10 = arg1;
}
