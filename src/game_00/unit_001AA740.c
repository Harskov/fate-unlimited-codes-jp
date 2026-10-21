#include "common.h"
#include "game_00/tbl_0051C858.h"
#include "game_00/obj_001ae2f0.h"
#include "game_00/unit_001735C0.h"

typedef struct Obj {
    unsigned char unk_0[0x1E4];
    u32 unk_1E4;
} Obj;

typedef struct Obj_001AB030 {
    unsigned char unk_0[0x5C8];
    float unk_5C8;
} Obj_001AB030;

typedef struct Obj_001AB2B0 {
    unsigned char unk_0[0x23FC];
    int unk_23FC;
} Obj_001AB2B0;

typedef struct Obj_001AA740 {
    unsigned char unk_0[0xB4];
    int unk_B4;
} Obj_001AA740;

extern Obj_001AA740 *D_0051D8B4[];

void func_001F27D0();

extern int D_0051D968[];

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AA740", func_001AA740);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AA740", func_001AA790);

void func_001AA880(Obj *arg0)
{
    arg0->unk_1E4 &= ~0x20;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AA740", func_001AA8A0);

int func_001AB030(Obj_001AB030 *o)
{
    return func_00175B10(o->unk_5C8);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AA740", func_001AB040);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AA740", func_001AB1D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AA740", func_001AB200);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AA740", func_001AB230);

void func_001AB2B0(Obj_001AB2B0 *obj)
{
    Obj_001AA740 *cfg;
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
            for (n = D_0051C858[i]->unk_C; n != 0; n = n->next) {
                ((Obj_001AB2B0 *)n->unk_0)->unk_23FC = v;
            }
        }
    }
}

void func_001AB330(Obj_001AE2F0 *p)
{
    func_001F27D0(p->field_3C);
}

int func_001AB340(int skip)
{
    if (skip == 0)
        return D_0051D968[0];
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AA740", func_001AB360);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AA740", func_001AB5D0);
