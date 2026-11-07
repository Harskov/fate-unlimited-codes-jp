#include "common.h"
#include "libc.h"
#include "game_00/tbl_0051C858.h"
#include "game_00/obj_001ae2f0.h"
#include "game_00/unit_001FE660.h"
#include "game_00/vec.h"

typedef struct Obj {
    unsigned char unk_0[0x238C];
    int unk_238C;
    int unk_2390;
    unsigned char pad_2394[0x10];
    int unk_23A4;
    int unk_23A8;
    unsigned char unk_23AC[0x28];
    int unk_23D4;
} Obj;

extern char gFormat_4FEEA0[];

extern char gFormat_4FEEA8[];

int sprintf();

int func_0020E850();

void func_001AE6A0();

void func_001CCFD0();

void func_002B1E28();


typedef struct Obj28 {
    /* 0x00 */ int unk_0;
    /* 0x04 */ f32 unk_4[3];
    /* 0x10 */ f32 unk_10[3];
} Obj28;

typedef struct Obj_001AD9C0 {
    u8 unk_0[0x38];
    /* 0x38 */ Obj28 *unk_38;
} Obj_001AD9C0;

typedef struct Obj_001AD9C0_2 {
    u8 unk_0[8];
    /* 0x08 */ int unk_8;
} Obj_001AD9C0_2;

typedef struct Sub_001AD9C0 {
    u8 unk_0[8];
    /* 0x08 */ int unk_8;
} Sub_001AD9C0;

typedef struct Elem_001AD9C0 {
    /* 0x00 */ int unk_0;
    /* 0x04 */ int unk_4;
    u8 unk_8[8];
} Elem_001AD9C0;

void func_001AD460();

void func_001AD300(int index)
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
        for (n = D_0051C858[i]->unk_C; n != 0; n = n->next) {
            ((Obj *)n->unk_0)->unk_23A8 = 0;
            ((Obj *)n->unk_0)->unk_23D4 = 0;
            ((Obj *)n->unk_0)->unk_23A4 = 0;
            memset(((Obj *)n->unk_0)->unk_23AC, 0, 0x28);
        }
    }
}

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
        for (n = D_0051C858[i]->unk_C; n != 0; n = n->next) {
            ((Obj *)n->unk_0)->unk_2390 = 0;
            ((Obj *)n->unk_0)->unk_238C = 0;
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AD300", func_001AD460);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AD300", func_001AD4C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AD300", func_001AD5F0);

/* Probably a blend between two 0x1C-byte entries: the one reached through arg4's index and
   the next element after arg6 whose index is set, weighted by where arg5 falls between their
   +0 values; with no such element the first entry is passed on unchanged. */
void func_001AD9C0(Obj_001AE2F0 *arg0, Obj_001AD9C0_2 *arg1, Sub_001AD9C0 *arg2,
                   Elem_001AD9C0 *arg3, Elem_001AD9C0 *arg4, int arg5, int arg6, int arg7)
{
    Obj_001AD9C0 *p;
    Obj28 *a;
    Obj28 *b;
    Elem_001AD9C0 *e;
    Obj28 res;
    int i;
    int j;
    f32 t;

    p = arg0->field_144[arg4->unk_4];
    if (p == 0)
        return;

    a = p->unk_38;
    e = 0;
    for (i = arg6 + 1; i < arg2->unk_8; i++) {
        if (arg3[i].unk_4 != -1) {
            e = &arg3[i];
            j = i;
            switch (e->unk_4) {
            case -2:
            case -3:
                memset(&res, 0, sizeof(res));
                b = &res;
                break;
            default:
                p = arg0->field_144[e->unk_4];
                if (p == 0)
                    return;
                b = p->unk_38;
                break;
            }
            break;
        }
    }

    if (e != 0) {
        t = ((f32)arg5 - (f32)arg4->unk_0) / (f32)(e->unk_0 - arg4->unk_0);
        if (arg7 != 0 && t >= 1.0f) {
            arg1->unk_8 = j;
            t = 1.0f;
        }
        func_0017A230(res.unk_4, a->unk_4, b->unk_4, t);
        func_0017A230(res.unk_10, a->unk_10, b->unk_10, t);
    } else {
        memcpy(&res, a, sizeof(res));
    }
    func_001AD460(arg0->field_3C, &res);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AD300", func_001ADBB0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AD300", func_001ADCD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AD300", func_001ADFE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AD300", func_001AE150);

void func_001AE2F0(Obj_001AE2F0 *p, int arg1)
{
    Obj_001AE2F0_2 *s = &p->unk_184;
    if (arg1 < 0)
        return;
    s->field_0 = arg1;
    s->field_4 = 0;
    s->field_8 = 0;
    s->field_C = p->field_5C0;
    s->field_18 = p->field_53C;
    if (arg1 < 0x40) {
        Node *v = p->field_44[arg1];
        if (v != 0) {
            s->field_3C = v->field_38;
        }
    }
}

void func_001AE340(Obj_001AE2F0 *arg0)
{
    Obj_001AE2F0_2 *s = &arg0->unk_184;

    s->field_10 = s->field_10 + 1;
    if (s->field_10 >= s->field_14 + 6) {
        s->field_10 = 0;
        s->field_14 = func_0020E850(0x3C, 0xB4);
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AD300", func_001AE3A0);

void func_001AE4D0(Obj_001AE2F0 *p)
{
    Obj_001AE2F0_2 *s = &p->unk_184;
    char buf[0x48];
    void *args[2];
    int i;

    s->field_0 = 0;
    s->field_1C = 0;
    s->field_20 = 0;
    s->field_10 = 0;
    s->field_14 = func_0020E850(0x3C, 0xB4);
    sprintf(buf, gFormat_4FEEA0);
    args[0] = buf;
    args[1] = s->field_24;
    func_002B1E28(p->field_3C->field_38, func_001AE6A0, args);
    sprintf(buf, gFormat_4FEEA8);
    args[0] = buf;
    args[1] = s->field_2C;
    func_002B1E28(p->field_3C->field_38, func_001AE6A0, args);

    for (i = 0; i < 0x40; i++) {
        func_001CCFD0(buf, 1, p->field_C, 0x14, i, 0, 0);
        p->field_44[i] = func_001FF000(buf, 0x1000);
        if (p->field_44[i] == 0)
            break;
    }
    for (i = 0; i < 8; i++) {
        func_001CCFD0(buf, 1, p->field_C, 0x14, i, 0, 0);
        p->field_144[i] = func_001FF000(buf, 0x2000);
        if (p->field_144[i] == 0)
            break;
    }
    for (i = 0; i < 8; i++) {
        func_001CCFD0(buf, 1, p->field_C, 0x14, i, 0, 0);
        p->field_164[i] = func_001FF000(buf, 0x4000);
        if (p->field_164[i] == 0)
            break;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AD300", func_001AE6A0);
