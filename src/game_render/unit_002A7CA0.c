#include "common.h"

typedef struct Obj {
    int unk_0;
    int unk_4;
} Obj;

s32 func_002A7CA0(s32 *arg0)
{
    return ++*arg0;
}

int func_002A7CB0(Obj *p)
{
    return p->unk_4;
}
