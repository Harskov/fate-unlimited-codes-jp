#include "common.h"

typedef struct Obj {
    unsigned char unk_0[0x40];
    int unk_40;
} Obj;

int func_0029D338(Obj *p)
{
    return p->unk_40;
}
