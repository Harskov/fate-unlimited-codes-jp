#include "common.h"
#include "game_00/tbl_0051C858.h"
#include "game_00/obj_001ae2f0.h"

typedef struct Obj {
    unsigned char unk_0[0x238C];
    int unk_238C;
    int unk_2390;
} Obj;

extern char gFormat_4FEEA0[];

extern char gFormat_4FEEA8[];

int sprintf();

int func_0020E850();

void func_001AE6A0();

void func_001CCFD0();

void *func_001FF000();

void func_002B1E28();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AD300", func_001AD300);

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

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AD300", func_001AD9C0);

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

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AD300", func_001AE340);

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
