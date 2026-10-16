#include "common.h"

typedef struct Obj {
    unsigned char unk_0[0x3C];
    int unk_3C;
} Obj;

int func_0029D330(Obj *p)
{
    return p->unk_3C;
}
