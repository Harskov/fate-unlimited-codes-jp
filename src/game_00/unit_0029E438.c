#include "common.h"

typedef struct Obj {
    unsigned char unk_0[0x18];
    int unk_18;
} Obj;

int func_0029E438(Obj *p)
{
    return p->unk_18;
}
