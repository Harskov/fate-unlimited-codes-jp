#include "common.h"
#include "libc.h"
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

typedef struct Obj_001AB040 {
    /* 0x0000 */ int unk_0;
    u8 pad_4[0x1D8];
    /* 0x01DC */ int flags_1DC;
    /* 0x01E0 */ int unk_1E0;
    /* 0x01E4 */ int unk_1E4;
    /* 0x01E8 */ int unk_1E8;
    u8 pad_1EC[8];
    /* 0x01F4 */ int unk_1F4;
    u8 pad_1F8[0x26C];
    /* 0x0464 */ int unk_464;
    u8 pad_468[8];
    /* 0x0470 */ int unk_470;
    u8 pad_474[0x1C];
    /* 0x0490 */ int unk_490;
    /* 0x0494 */ int unk_494;
    /* 0x0498 */ int unk_498;
    /* 0x049C */ int unk_49C;
    /* 0x04A0 */ int unk_4A0;
    /* 0x04A4 */ int unk_4A4;
    /* 0x04A8 */ int unk_4A8;
    /* 0x04AC */ int unk_4AC;
    /* 0x04B0 */ int unk_4B0;
    /* 0x04B4 */ int unk_4B4;
    /* 0x04B8 */ int unk_4B8;
    /* 0x04BC */ int unk_4BC;
    /* 0x04C0 */ int unk_4C0;
    /* 0x04C4 */ int unk_4C4;
    /* 0x04C8 */ int unk_4C8;
    /* 0x04CC */ int unk_4CC;
    /* 0x04D0 */ int unk_4D0;
    /* 0x04D4 */ int unk_4D4;
    /* 0x04D8 */ int unk_4D8;
    u8 pad_4DC[0x74];
    /* 0x0550 */ int unk_550;
    u8 pad_554[0x1E38];
    /* 0x238C */ int unk_238C;
    /* 0x2390 */ int unk_2390;
    /* 0x2394 */ int unk_2394;
    /* 0x2398 */ int unk_2398;
    /* 0x239C */ int unk_239C;
    /* 0x23A0 */ int unk_23A0;
    /* 0x23A4 */ int flags_23A4;
    /* 0x23A8 */ int unk_23A8;
    /* 0x23AC */ u8 unk_23AC[0x28];
    /* 0x23D4 */ int unk_23D4;
    u8 pad_23D8[0x94];
    /* 0x246C */ int unk_246C;
    /* 0x2470 */ int unk_2470;
    /* 0x2474 */ int unk_2474;
    u8 pad_2478[4];
    /* 0x247C */ int unk_247C;
} Obj_001AB040;

Obj_001AB040 *func_0019D0B0(int i);


typedef struct Elem_001AA740 {
    u8 unk_0[0x1C];
} Elem_001AA740;

typedef struct Sub_001AA740 {
    u8 unk_0[0x10EC];
    Elem_001AA740 unk_10EC[16];
} Sub_001AA740;

void func_001AA180();

void func_001AA740(Sub_001AA740 *arg0)
{
    int i;

    for (i = 0; i < 16; i++) {
        func_001AA180(&arg0->unk_10EC[i]);
    }
}

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

/* Resets the object's state. The 0x28-byte block at +0x23AC is kept only when one of the
   objects func_0019D0B0 hands out passes the flag tests below; probably a carried-over
   setting shared between them. */
void func_001AB040(Obj_001AB040 *o)
{
    Obj_001AB040 *p;
    int found;
    int flags;
    int i;

    found = 0;
    o->unk_238C = 0;
    o->unk_2390 = 0;
    o->unk_2394 = 0;
    o->unk_2398 = 0;
    o->unk_239C = 0;
    o->unk_23A0 = 0;
    o->unk_23A8 = 0;
    o->unk_23D4 = 0;

    for (i = 0; i < o->unk_0; i++) {
        p = func_0019D0B0(i);
        if (p == 0)
            break;
        flags = p->flags_1DC;
        if (!(flags & 0x80) && !(flags & 0x8) && !(flags & 0x1000) && (p->flags_23A4 & 1)) {
            found = 1;
            break;
        }
    }

    if (!found)
        memset(o->unk_23AC, 0, 0x28);

    o->unk_246C = 0;
    o->unk_2470 = 0;
    o->unk_2474 = 0;
    o->unk_247C = 0;
    o->unk_498 = 0;
    o->unk_49C = 0;
    o->unk_490 = 0;
    o->unk_494 = 0;
    o->unk_4A0 = 0;
    o->unk_4A4 = 0;
    o->unk_4A8 = 0;
    o->unk_4AC = 0;
    o->unk_4B0 = 0;
    o->unk_4B4 = 0;
    o->unk_4B8 = 0;
    o->unk_4BC = 0;
    o->unk_4C0 = 0;
    o->unk_4C4 = 0;
    o->unk_4D0 = 0;
    o->unk_4D4 = 0;
    o->unk_4D8 = 0;
    o->unk_4CC = 0;
    o->unk_4C8 = 0;
    o->unk_1E0 = 1;
    o->unk_1E4 &= ~0x20C;
    o->unk_1F4 &= ~0x1A;
    o->unk_1E8 = 0;
    o->unk_550 = -1;
    o->unk_464 = 0;
    o->unk_470 = 0;
}

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
