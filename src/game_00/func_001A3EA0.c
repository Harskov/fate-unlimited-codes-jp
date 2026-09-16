#include "game_00/tbl_0051C858.h"

typedef struct Obj {
    unsigned char unk_0[0x1F4];
    int unk_1F4;
    unsigned char unk_1F8[0x24BC - 0x1F8];
    int unk_24BC;
} Obj;

int func_001A3EA0(Ctx0051C858 *c)
{
    Node0051C858 *n;

    for (n = D_0051C858[c->index]->list; n != 0; n = n->next) {
        Obj *o = (Obj *)n->obj;
        if (o->unk_1F4 & 0x18000)
            return 0;
        if (o->unk_24BC > 0)
            return 0;
    }
    return 1;
}
