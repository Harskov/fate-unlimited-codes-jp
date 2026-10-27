#include "common.h"
#include "game_00/obj_001ae2f0.h"

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

void func_001AE900();

typedef struct Obj_001AEFA0 {
    unsigned char unk_0[0x3C];
    void *unk_3C;
    unsigned char unk_40[0x460 - 0x40];
    unsigned char unk_460[0x24];
    int unk_484;
} Obj_001AEFA0;

void func_00165EA0(void *, void *, void *);

int func_0020DBB0(float, float);

void func_001E9590(void *, int);

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

void func_001AE7D0(Obj_001AE2F0 *p)
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

void func_001AE9A0(void *arg0)
{
    func_001AE900(arg0, 0, 1, 1);
    func_001AE900(arg0, 0, 1, 0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AE7A0", func_001AE9F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AE7A0", func_001AEA40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AE7A0", func_001AEB40);

int func_001AEFA0(Obj_001AEFA0 *arg0, Obj_001AEFA0 *arg1, int arg2)
{
    float v[4];
    int r;

    if (arg0 == 0 || arg1 == 0)
        return 0;

    func_00165EA0(v, arg1->unk_460, arg0->unk_460);
    r = func_0020DBB0(v[0], v[2]);
    r += arg2;
    func_001E9590(arg0->unk_3C, r);
    arg0->unk_484 = r;
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AE7A0", func_001AF020);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AE7A0", func_001AF130);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AE7A0", func_001AF200);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AE7A0", func_001AF3F0);
