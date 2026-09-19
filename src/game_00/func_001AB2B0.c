#include "game_00/tbl_0051C858.h"

typedef struct Obj {
    unsigned char unk_0[0x23FC];
    int unk_23FC;
} Obj;

typedef struct Cfg {
    unsigned char unk_0[0xB4];
    int unk_B4;
} Cfg;

extern Cfg *D_0051D8B4[];

void func_001AB2B0(Obj *obj)
{
    Cfg *cfg;
    Node0051C858 *n;
    int v;
    int i;

    cfg = D_0051D8B4[0];
    if (cfg == 0)
        return;

    v = cfg->unk_B4;
    if (obj != 0) {
        obj->unk_23FC = v;
    } else {
        for (i = 0; i < 2; i++) {
            for (n = D_0051C858[i]->list; n != 0; n = n->next) {
                ((Obj *)n->obj)->unk_23FC = v;
            }
        }
    }
}
