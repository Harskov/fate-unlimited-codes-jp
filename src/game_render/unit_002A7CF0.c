#include "common.h"

typedef struct Obj {
    unsigned char unk_0[0x28];
    int unk_28;
} Obj;

int func_002A7CF0(Obj *p)
{
    return p->unk_28;
}
