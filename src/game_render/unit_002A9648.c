#include "common.h"

typedef struct Obj {
    unsigned char pad[0x20];
    s32 unk_20;
} Obj;

s32 func_002A9648(Obj *arg0)
{
    arg0->unk_20 = 1;
    return 1;
}

int func_002A9658(int *arg0)
{
    return arg0[0xC];
}
