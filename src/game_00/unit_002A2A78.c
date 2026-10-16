#include "common.h"

typedef struct Obj {
    unsigned char unk_0[0x10];
    int unk_10;
} Obj;

int func_002A2A78(Obj *p)
{
    return p->unk_10;
}
