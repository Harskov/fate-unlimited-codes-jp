#include "common.h"

typedef struct Sub {
    unsigned char pad[0xC];
    int field_C;
} Sub;

typedef struct Obj_001AE7A0_2 {
    unsigned char pad[0x58];
    Sub *field_58;
} Obj_001AE7A0_2;

typedef struct Obj {
    unsigned char pad[0x3C];
    Obj_001AE7A0_2 *field_3C;
} Obj;

typedef struct Obj_001AE7D0 {
    unsigned char pad[0x3C];
    void *field_3C;
} Obj_001AE7D0;

typedef struct Sub001AE860 {
    unsigned char unk_0[2];
    /* 0x02 */ unsigned char unk_2;
    unsigned char unk_3;
} Sub001AE860;

typedef struct Item001AE860 {
    /* 0x00 */ int unk_0;
    /* 0x04 */ short unk_4;
    unsigned char unk_6[6];
    /* 0x0C */ Sub001AE860 *unk_C;
} Item001AE860;

typedef struct Obj_001AE7A0 {
    unsigned char unk_0[0x19C];
    /* 0x19C */ int unk_19C;
    /* 0x1A0 */ Item001AE860 *cursor;
} Obj_001AE7A0;

typedef struct Ctx001AE860 {
    unsigned char unk_0[0x3C];
    /* 0x3C */ Obj_001AE7A0 *unk_3C;
} Ctx001AE860;

void func_002032B0(void *);

void func_001AE7A0(Obj *p)
{
    Obj_001AE7A0_2 *m = p->field_3C;
    if (m != 0) {
        Sub *s = m->field_58;
        if (s != 0) {
            s->field_C |= 0x2000;
        }
    }
}

void func_001AE7D0(Obj_001AE7D0 *p)
{
    func_002032B0(p->field_3C);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AE7A0", func_001AE7E0);

void func_001AE860(Ctx001AE860 *c, int id, int on, int mask, int keep)
{
    int f;
    Sub001AE860 *s;
    int i;
    Item001AE860 *it;

    it = c->unk_3C->cursor;
    if (it == 0)
        return;

    for (i = 0; i < c->unk_3C->unk_19C; i++, it++) {
        if ((mask & it->unk_0) != 0) {
            s = it->unk_C;
            f = s->unk_2;
            if (id == it->unk_4) {
                if (on != 0) {
                    f |= 4;
                } else {
                    f &= ~4;
                }
            } else if (keep == 0) {
                f &= ~4;
            }
            s->unk_2 = f;
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AE7A0", func_001AE900);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AE7A0", func_001AE9A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AE7A0", func_001AE9F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AE7A0", func_001AEA40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AE7A0", func_001AEB40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AE7A0", func_001AEFA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AE7A0", func_001AF020);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AE7A0", func_001AF130);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AE7A0", func_001AF200);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AE7A0", func_001AF3F0);
