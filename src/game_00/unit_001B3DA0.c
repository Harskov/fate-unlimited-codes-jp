#include "common.h"

extern s32 D_0051D728[];

typedef struct Entry {
    char pad[0x20];
    s32 unk_20;      /* 0x20 */
    char pad2[0x34 - 0x24];
} Entry;

typedef struct Holder {
    s32 count;      /* 0x0 */
    char pad[0x28];
    Entry *unk_2C; /* 0x2C */
} Holder;

typedef struct Obj_001B4240 {
    u8 pad_0[0x14];
    s32 unk_14;
} Obj_001B4240;

s32 func_001B42A0(void);

typedef struct Elem_001B42A0 {
    Obj_001B4240 *unk_0;
    u8 pad_4[4];
    /* 0x08 */ struct Elem_001B42A0 *next;
} Elem_001B42A0;

extern Elem_001B42A0 *D_0051D748[];

s32 func_001B3F70(s32 arg0);

/* Buckets byte 2 of the argument through func_001B3F70 and sets one bit of the
   entry's word at +0x20 for each band of buckets; the low buckets set nothing. */
s32 func_001B3DA0(Entry *e, u32 v)
{
    switch (func_001B3F70((v >> 16) & 0xFF)) {
    case 0:
    case 1:
    case 2:
        break;
    case 3:
    case 4:
    case 5:
        e->unk_20 |= 0x80000000;
        break;
    case 6:
        e->unk_20 |= 0x800000;
        break;
    case 7:
    case 8:
    case 9:
        e->unk_20 |= 8;
        break;
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3DA0", func_001B3E30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3DA0", func_001B3EC0);

s32 func_001B3F70(s32 arg0)
{
    f32 total = 0.0f;
    s32 i;
    f32 step = 25.5f;
    f32 half = 0.5f;

    for (i = 0; i < 10; i++) {
        if ((s32)(half + total) >= arg0) {
            break;
        }
        total += step;
    }
    return i;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3DA0", func_001B3FC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3DA0", func_001B4090);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001B3DA0", func_001B4150);

void func_001B4240(Obj_001B4240 *o)
{
    D_0051D728[0] -= 1;
    o->unk_14 = -1;
}

void func_001B4260(Obj_001B4240 *o)
{
    if (o != 0) {
        o->unk_14 = func_001B42A0();
    }
}

/* The smallest value above zero that no object of the list at D_0051D748 holds in unk_14
   (the list ends at an entry whose object is 1); D_0051D728 counts one more holder. */
s32 func_001B42A0(void)
{
    Elem_001B42A0 *e;
    s32 found;
    Elem_001B42A0 *list;
    Obj_001B4240 *head;
    Obj_001B4240 *o;
    s32 id;

    id = 0;
    list = D_0051D748[0];
    head = list->unk_0;
    do {
        id += 1;
        found = 0;
        e = list;
        o = head;
        while (o != (Obj_001B4240 *)1) {
            if (o->unk_14 != -1 && o->unk_14 == id) {
                found = 1;
                break;
            }
            e = e->next;
            o = e->unk_0;
        }
    } while (found != 0);
    D_0051D728[0] += 1;
    return id;
}

void func_001B4320(void)
{
    D_0051D728[0] = 0;
}

void func_001B4330(Holder *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 i;
    Entry *e;

    for (i = 0; i < arg0->count; i++) {
        e = &arg0->unk_2C[i];
        if (e->unk_20 & arg1) {
            e->unk_20 |= arg2;
            e->unk_20 &= ~arg3;
        }
    }
}

void func_001B43A0(Holder *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 i;

    Entry *e;

    for (i = 0; i < arg0->count; i++) {
        e = &arg0->unk_2C[i];
            if (arg1 >= 0) {
                if (arg1 == i) {
                    e->unk_20 |= arg2;
                    e->unk_20 &= ~arg3;
                    break;
                }
            } else {
                e->unk_20 |= arg2;
                e->unk_20 &= ~arg3;
            }
    }
}
