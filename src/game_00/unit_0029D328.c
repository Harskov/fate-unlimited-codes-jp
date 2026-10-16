#include "common.h"

typedef struct Obj {
    unsigned char unk_0[0x38];
    int unk_38;
} Obj;

int func_0029D328(Obj *p)
{
    return p->unk_38;
}
