#include "game_00/tbl_0051C858.h"

typedef struct Obj001AD0E0 {
    int idx;
    unsigned char unk_4[4];
    int group;
    unsigned char unk_C[0x1F8 - 0xC];
    int flags;
    unsigned char unk_1FC[0x23A4 - 0x1FC];
    int unk_23A4;
    unsigned char unk_23A8[4];
    int slots[10];
    int unk_23D4;
} Obj001AD0E0;

void func_001AD0E0(Obj001AD0E0 *self, int index, int value, int bits)
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

    self->flags |= 1;
    if (self->unk_23D4 <= 0)
        self->unk_23D4 = value;

    for (; i < end; i++) {
        if (self != 0 && (bits & 4) != 0 && i == self->group)
            continue;
        for (n = D_0051C858[i]->list; n != 0; n = n->next) {
            if ((bits & 2) != 0 && self == n->obj)
                continue;
            ((Obj001AD0E0 *)n->obj)->slots[self->idx] = value;
            ((Obj001AD0E0 *)n->obj)->unk_23A4 = bits;
        }
    }
}
