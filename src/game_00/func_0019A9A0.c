#include "game_00/tbl_0051D890.h"

typedef struct Obj0019A9A0 {
    int unk_0;
    unsigned char unk_4[0x4];
    int unk_8;
    unsigned char unk_C[0xAC];
    int unk_B8;
    unsigned char unk_BC[0x24];
    int unk_E0;
    unsigned char unk_E4[0x24];
    int unk_108;
} Obj0019A9A0;

int func_0019A9A0(Obj0019A9A0 *o)
{
    int r;
    int mode;

    r = 0;
    mode = o->unk_8;
    if (mode == 2) {
        if (o->unk_B8 != 0)
            r |= 1;
        if (o->unk_E0 != 0)
            r |= 1;
        if (o->unk_108 != 0)
            r |= 1;
    }
    if (mode == 11 && (o->unk_0 & 0x4000) == 0)
        r |= 1;
    if (*(int *)&D_0051D890[0] & 0x02000000)
        r |= 1;
    return r;
}
