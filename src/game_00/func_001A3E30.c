#include "game_00/tbl_0051C858.h"

typedef struct Obj {
    unsigned char unk_0[0x1F0];
    int unk_1F0;
    unsigned char unk_1F4[0x24C0 - 0x1F4];
    int unk_24C0;
} Obj;

int func_001A3E30(Ctx0051C858 *c)
{
    Node0051C858 *n;

    for (n = D_0051C858[c->index]->list; n != 0; n = n->next) {
        Obj *o = (Obj *)n->obj;
        if (o->unk_1F0 & 0x10)
            return 0;
        if (o->unk_24C0 > 0)
            return 0;
    }
    return 1;
}
