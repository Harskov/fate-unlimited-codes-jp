#include "common.h"

typedef struct Obj {
    unsigned char unk_0[0x14];
    int unk_14;
} Obj;

int func_002AD868(Obj *p)
{
    return p->unk_14;
}
