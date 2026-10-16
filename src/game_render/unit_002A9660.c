#include "common.h"

typedef struct Obj {
    unsigned char unk_0[0x30];
    int unk_30;
} Obj;

int func_002A9660(Obj *p)
{
    return p->unk_30;
}
