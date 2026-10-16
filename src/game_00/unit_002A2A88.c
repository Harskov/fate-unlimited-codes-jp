#include "common.h"

typedef struct Obj {
    unsigned char unk_0[0x50];
    int unk_50;
} Obj;

int func_002A2A88(Obj *p)
{
    return p->unk_50;
}
