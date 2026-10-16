#include "common.h"

typedef struct Obj {
    unsigned char unk_0[0xA0];
    int unk_A0;
} Obj;

int func_002E6C08(Obj *p)
{
    return p->unk_A0;
}
