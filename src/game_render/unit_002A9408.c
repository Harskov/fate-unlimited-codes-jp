#include "common.h"

typedef struct Obj {
    unsigned char unk_0[0x68];
    int unk_68;
} Obj;

int func_002A9408(Obj *p)
{
    return p->unk_68;
}
