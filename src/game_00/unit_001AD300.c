#include "common.h"
#include "game_00/tbl_0051C858.h"

typedef struct Obj {
    unsigned char unk_0[0x238C];
    int unk_238C;
    int unk_2390;
} Obj;

/* The elements of Obj_001AE2F0.field_44[] are objects in their own right; func_001AE2F0
 * reads one int out of one at +0x38. */
typedef struct Node {
    unsigned char pad[0x38];
    int field_38;
} Node;

typedef struct Sub {
    int field_0;
    int field_4;
    int field_8;
    float field_C;
    unsigned char pad[0x8];
    int field_18;
    unsigned char pad2[0x20];
    int field_3C;
} Sub;

typedef struct Obj_001AE2F0 {
    unsigned char pad[0x44];
    Node *field_44[0x40];
    unsigned char pad2[0x184 - 0x44 - 0x100];
    /* 0x184 */ Sub unk_184;
    unsigned char pad3[0x53C - 0x184 - sizeof(Sub)];
    int field_53C;
    unsigned char pad4[0x5C0 - 0x53C - 4];
    float field_5C0;
} Obj_001AE2F0;

typedef struct Sub_001AE4D0 {
    int field_0;
    u8 pad_4[0xC];
    int field_10;
    int field_14;
    u8 pad_18[4];
    int field_1C;
    int field_20;
    char field_24[8];
    char field_2C[8];
} Sub_001AE4D0;

typedef struct Obj_001AD300 {
    u8 pad_0[0x38];
    int field_38;
} Obj_001AD300;

typedef struct Obj_001AE4D0 {
    u8 pad_0[0xC];
    int field_C;
    u8 pad_10[0x2C];
    Obj_001AD300 *field_3C;
    u8 pad_40[4];
    int field_44[0x40];
    int field_144[8];
    int field_164[8];
    /* 0x184 */ Sub_001AE4D0 unk_184;
} Obj_001AE4D0;

extern char D_004FEEA0[];

extern char D_004FEEA8[];

int sprintf();

int func_0020E850();

void func_001AE6A0();

void func_001CCFD0();

int func_001FF000();

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
    Sub *s = &p->unk_184;
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

void func_001AE4D0(Obj_001AE4D0 *p)
{
    Sub_001AE4D0 *s = &p->unk_184;
    char name[0x48];
    void *args[2];
    int i;

    s->field_0 = 0;
    s->field_1C = 0;
    s->field_20 = 0;
    s->field_10 = 0;
    s->field_14 = func_0020E850(0x3C, 0xB4);
    sprintf(name, D_004FEEA0);
    args[0] = name;
    args[1] = s->field_24;
    func_002B1E28(p->field_3C->field_38, func_001AE6A0, args);
    sprintf(name, D_004FEEA8);
    args[0] = name;
    args[1] = s->field_2C;
    func_002B1E28(p->field_3C->field_38, func_001AE6A0, args);

    for (i = 0; i < 0x40; i++) {
        func_001CCFD0(name, 1, p->field_C, 0x14, i, 0, 0);
        p->field_44[i] = func_001FF000(name, 0x1000);
        if (p->field_44[i] == 0)
            break;
    }
    for (i = 0; i < 8; i++) {
        func_001CCFD0(name, 1, p->field_C, 0x14, i, 0, 0);
        p->field_144[i] = func_001FF000(name, 0x2000);
        if (p->field_144[i] == 0)
            break;
    }
    for (i = 0; i < 8; i++) {
        func_001CCFD0(name, 1, p->field_C, 0x14, i, 0, 0);
        p->field_164[i] = func_001FF000(name, 0x4000);
        if (p->field_164[i] == 0)
            break;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AD300", func_001AE6A0);
