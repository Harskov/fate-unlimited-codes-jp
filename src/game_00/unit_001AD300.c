#include "common.h"
#include "game_00/tbl_0051C858.h"

typedef struct Obj {
    unsigned char unk_0[0x238C];
    int unk_238C;
    int unk_2390;
} Obj;

/* The elements of Obj_001AE2F0.field_44[] are objects in their own right; func_001AE2F0
 * reads one int out of one at +0x38. Typing the element is the plain-C form of
 * what was a byte offset through a void* (K1 6.9). */
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
    Sub sub;
    unsigned char pad3[0x53C - 0x184 - sizeof(Sub)];
    int field_53C;
    unsigned char pad4[0x5C0 - 0x53C - 4];
    float field_5C0;
} Obj_001AE2F0;

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
        for (n = D_0051C858[i]->list; n != 0; n = n->next) {
            ((Obj *)n->obj)->unk_2390 = 0;
            ((Obj *)n->obj)->unk_238C = 0;
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
    Sub *s = &p->sub;
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

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AD300", func_001AE4D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001AD300", func_001AE6A0);
