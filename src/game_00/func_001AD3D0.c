#include "game_00/tbl_0051C858.h"

typedef struct Obj {
    unsigned char unk_0[0x238C];
    int unk_238C;
    int unk_2390;
} Obj;

void func_001AD3D0(int index)
{
    Node0051C858 *n;
    int i;
    int end;

    if (index < 0) {
        i = 0;
        end = 2;
    } else {
        i = index;
        end = index + 1;
    }

    for (; i < end; i++) {
        for (n = D_0051C858[i]->list; n != 0; n = n->next) {
            ((Obj *)n->obj)->unk_2390 = 0;
            ((Obj *)n->obj)->unk_238C = 0;
        }
    }
}
