#include "common.h"
#include "libc.h"
#include "game_00/vec.h"
#include "game_00/unit_0020EB60.h"
#include "game_00/unit_00211170.h"

/* doubly linked list unlink: prev at +4, next at +8 */
typedef struct Link {
    int unk_0;
    struct Link *prev;
    struct Link *next;
} Link;

typedef struct Node {
    int unk_0;
    void *unk_4;
} Node;

typedef struct Obj {
    unsigned char unk_0[0xC4];
    /* 0xC4 */ u16 counter;
    unsigned char unk_C6[0xA];
    /* 0xD0 */ struct Obj *next;
} Obj;

typedef struct Ent0051AC78 {
    struct Ent0051AC78 *next;
    int unk_4;
    unsigned char unk_8[0x8];
    /* 0x10 */ Vec3 unk_10;
    Vec3 unk_1C;
    /* 0x28 */ Vec3 unk_28;
    unsigned char unk_34[0xC0 - 0x34];
    int unk_C0;
    short unk_C4;
    short unk_C6;
    char unk_C8;
    char unk_C9;
    char unk_CA;
} Ent0051AC78;

void func_00167130();

extern Ent0051AC78 *D_0051AC78[];

extern unsigned int D_0051AE58[];

extern unsigned int D_0051AE40[];

extern s32 D_0051AC60[];

extern s32 D_0051AC68[];

void func_0015D710();

void func_00179380();

typedef struct Sub_00179600 {
    s32 unk_0;
    s32 unk_4;
    s8 unk_8;
    s8 unk_9;
    unsigned char pad_A[2];
    s32 unk_C;
    s32 unk_10;
    s32 unk_14;
    f32 unk_18;
} Sub_00179600;

typedef struct Obj_00179600 {
    unsigned char pad_0[4];
    s32 unk_4;
    s32 unk_8;
    s32 unk_C;
    unsigned char pad_10[0x10];
    s8 unk_20;
    s8 unk_21;
    unsigned char pad_22[2];
    s32 unk_24;
    union {
        f32 f0;
        s32 i0;
    } unk_28;
    unsigned char pad_2C[8];
    union {
        f32 f0;
        s32 i0;
    } unk_34;
    unsigned char pad_38[0xC];
    s32 unk_44;
    unsigned char pad_48[4];
    f32 unk_4C;
    f32 unk_50;
} Obj_00179600;

void *func_0015D810();

void func_0015D130();

double pow(double, double);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00179310", func_00179310);

void func_00179380(Link *n)
{
    Link *prev = n->prev;
    Link *next = n->next;
    prev->next = next;
    next->prev = prev;
}

void func_001793A0(Ent0051AC78 *arg0)
{
    if (arg0 != 0) {
        func_00179380((Link *)&arg0->unk_10);
        func_0015D710(D_0051AC60[0], arg0);
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00179310", func_001793E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00179310", func_00179450);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00179310", func_00179570);

void func_001795F0(void *arg0, void *arg1, Node *arg2)
{
    func_00167130(arg0, arg1, arg2->unk_4);
}

Obj_00179600 *func_00179600(Sub_00179600 *arg0)
{
    Obj_00179600 *obj = func_0015D810(D_0051AC60[0]);

    if (obj == 0) {
        return 0;
    }
    memset(obj, 0, 0x54);
    obj->unk_4 = 0xF;
    obj->unk_8 = arg0->unk_0;
    obj->unk_C = arg0->unk_4;
    obj->unk_20 = arg0->unk_8;
    obj->unk_21 = arg0->unk_9;
    obj->unk_24 = arg0->unk_C;
    switch ((u8)arg0->unk_9) {
    case 0:
        obj->unk_28.f0 = *(f32 *)arg0->unk_10;
        obj->unk_34.f0 = *(f32 *)arg0->unk_14;
        break;
    case 1:
        obj->unk_28.i0 = arg0->unk_10;
        obj->unk_34.i0 = arg0->unk_14;
        break;
    case 2:
        obj->unk_28.i0 = arg0->unk_10;
        obj->unk_34.i0 = arg0->unk_14;
        break;
    case 3:
        func_0015D130(&obj->unk_28, arg0->unk_10);
        func_0015D130(&obj->unk_34, arg0->unk_14);
        break;
    }
    obj->unk_44 = arg0->unk_4;
    obj->unk_4C = arg0->unk_18;
    obj->unk_50 = 1.0 / pow((f32)arg0->unk_4, arg0->unk_18);
    return obj;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00179310", func_00179760);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00179310", func_0017A1B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00179310", func_0017A230);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00179310", func_0017A290);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00179310", func_0017A3C0);

void func_0017A420(void)
{
    D_0051AC68[0] = (s32)func_00211400(0x20, 0x18);
    D_0051AC60[0] = (s32)func_0020EC40(0x12C, 0x60);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00179310", func_0017A460);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00179310", func_0017A4E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00179310", func_0017A550);

int func_0017A590(Obj *arg0, Obj *arg1)
{
    if (arg1 == 0 || arg0 == 0 || arg0->next != 0)
        return -1;
    arg0->next = arg1;
    return ++arg1->counter;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00179310", func_0017A5D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00179310", func_0017A610);

Ent0051AC78 *func_0017A670(char kind, short id)
{
    Ent0051AC78 *e;
    unsigned int n;

    e = D_0051AC78[0];
    if (e != 0) {
        D_0051AC78[0] = e->next;
        e->next = 0;
        e->unk_C4 = 1;
        e->unk_C9 = 0;
        e->unk_C8 = kind;
        e->unk_10.x = e->unk_10.y = e->unk_10.z = 0.0f;
        e->unk_1C.x = e->unk_1C.y = e->unk_1C.z = 0.0f;
        e->unk_28.x = e->unk_28.y = e->unk_28.z = 1.0f;
        e->unk_C0 = 0;
        e->unk_CA = 0;
        e->unk_4 = 0;
        e->unk_C6 = id;

        n = D_0051AE58[0] + 1;
        D_0051AE58[0] = n;
        if (D_0051AE40[0] < n)
            D_0051AE40[0] = n;
    }
    return e;
}
