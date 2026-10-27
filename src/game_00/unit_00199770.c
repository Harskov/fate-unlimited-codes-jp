#include "common.h"
#include "game_00/tbl_0051E444.h"
#include "game_00/tbl_0051D890.h"
#include "game_00/unit_001E6380.h"

typedef struct Obj {
    unsigned char unk_0[0x13C];
    int unk_13C;
    unsigned char unk_140[0x28];
    int unk_168;
} Obj;

typedef struct Obj0019A9A0 {
    /* 0x00 */ int flags;
    unsigned char unk_4[0x4];
    int unk_8;
    unsigned char unk_C[0xAC];
    int unk_B8;
    unsigned char unk_BC[0x24];
    int unk_E0;
    unsigned char unk_E4[0x24];
    int unk_108;
} Obj0019A9A0;

typedef struct Obj0019AA30 {
    unsigned char unk_0[0x4];
    int unk_4;
    unsigned char unk_8[0xA0];
    float unk_A8;
    float unk_AC;
    float unk_B0;
} Obj0019AA30;

typedef struct Obj_0019B470 {
    /* 0x00 */ unsigned int unk_0;
    unsigned char unk_4[0x284];
    int unk_288;
    int unk_28C;
    int unk_290;
    int unk_294;
    int unk_298;
} Obj_0019B470;

extern int D_0051C804[];

extern int D_0051C830[];

typedef struct Obj0019ADA0 {
    unsigned char unk_0[0x64];
    float unk_64;
    unsigned char unk_68[0x2D8];
    unsigned char unk_340[0x10];
} Obj0019ADA0;

#include "libc.h"

extern void func_0019ADE0(Obj0019ADA0 *o, int mode, float value);

typedef struct Obj00199770 {
    unsigned char unk_0[0x350];
    unsigned char unk_350[0x10];
    float unk_360;
    float unk_364;
    unsigned char unk_368[0x4];
    float unk_36C;
    unsigned char unk_370[0x4];
    int unk_374;
} Obj00199770;

typedef struct Obj0019D040 {
    unsigned char unk_0[0x3C];
    int unk_3C;
} Obj0019D040;

extern void func_0015D130(float *v, int a);

extern int func_00199850(int a, int b);

extern Obj0019D040 *func_0019D040(int a);

extern float func_0020E410(float a, float b, float c);

void func_0019AA30(Obj0019AA30 *o);

void func_0019ADA0(Obj0019ADA0 *arg0, void *arg1);

void func_0019B470(Obj_0019B470 *p);

typedef struct Obj_00524798 {
    unsigned char unk_0[0x4];
    int unk_4;
    unsigned char unk_8[0x58];
    int unk_60;
    int unk_64;
} Obj_00524798;

typedef struct Obj_0019BDD0 {
    /* 0x00 */ int flags;
    unsigned char unk_4[0x4];
    int unk_8;
    int unk_C;
    int unk_10;
    unsigned char unk_14[0x5C];
    int unk_70;
    unsigned char unk_74[0x4];
    float unk_78[3];
    float unk_84[3];
    float unk_90[3];
    int unk_9C;
    int unk_A0;
    int unk_A4;
    unsigned char unk_A8[0xC];
    int unk_B4;
    unsigned char unk_B8[0x80];
    unsigned char unk_138[0x150];
    unsigned char unk_288[0x34];
    int unk_2BC;
    unsigned char unk_2C0[0x6C];
    int unk_32C;
    int unk_330;
    int unk_334;
    int unk_338;
    int unk_33C;
    int unk_340;
    int unk_344;
    int unk_348;
    int unk_34C;
} Obj_0019BDD0;

extern int D_0052479C[];

extern void func_0015EE20(float *v, float x, float y, float z);

extern void func_0019B090(Obj_0019BDD0 *o);

extern void func_002C3E88(int a, int b);

typedef struct Sub_00199850 {
    unsigned char unk_0[0xC];
    int unk_C;
} Sub_00199850;

typedef struct Elem_00199850 {
    unsigned char unk_0[0xC];
    Sub_00199850 *unk_C;
    unsigned char unk_10[0xE0];
} Elem_00199850;

typedef struct Obj_00199850 {
    unsigned char unk_0[0x6C];
    Elem_00199850 *unk_6C;
} Obj_00199850;

extern int func_001619C0(int a, int b);

extern int func_002E6C10(int v);

extern int func_0020CE80(int v);

void func_00199770(Obj00199770 *o)
{
    float a[4];
    float b[4];
    Obj0019D040 *p;

    memset(o->unk_350, 0, 0x10);
    memset(&o->unk_360, 0, 0x20);
    o->unk_36C = 0.5f;
    p = func_0019D040(0);
    if (p != 0) {
        func_0015D130(a, func_00199850(p->unk_3C, 3));
        o->unk_360 = a[1];
        func_0015D130(a, func_00199850(p->unk_3C, 5));
        func_0015D130(b, func_00199850(p->unk_3C, 7));
        o->unk_364 = func_0020E410(a[1], b[1], 0.5f);
        o->unk_374 = 0;
    }
}

int func_00199850(int a, int b)
{
    int i;

    i = func_001619C0(a, b);
    if (i < 0)
        return 0;
    return func_0020CE80(func_002E6C10(((Obj_00199850 *)a)->unk_6C[i].unk_C->unk_C));
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00199770", func_001998B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00199770", func_00199960);

void func_00199CF0(Obj *o)
{
    o->unk_168 = 0;
    o->unk_13C = 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00199770", func_00199D00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00199770", func_00199DE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00199770", func_00199E90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00199770", func_0019A330);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00199770", func_0019A900);

int func_0019A9A0(Obj0019A9A0 *o)
{
    int r;
    int mode;

    r = 0;
    mode = o->unk_8;
    if (mode == 2) {
        if (o->unk_B8 != 0)
            r |= 1;
        if (o->unk_E0 != 0)
            r |= 1;
        if (o->unk_108 != 0)
            r |= 1;
    }
    if (mode == 11 && (o->flags & 0x4000) == 0)
        r |= 1;
    if (D_0051D890[0].flags & 0x02000000)
        r |= 1;
    return r;
}

void func_0019AA30(Obj0019AA30 *o)
{
    o->unk_4 |= 4;
    o->unk_4 &= ~8;
    o->unk_A8 = 0.0f;
    o->unk_AC = 0.0f;
    o->unk_B0 = 4.5f;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00199770", func_0019AA60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00199770", func_0019ACF0);

void func_0019ADA0(Obj0019ADA0 *arg0, void *arg1)
{
    if (arg1 != 0)
        memcpy(arg0->unk_340, arg1, 0x10);
    func_0019ADE0(arg0, 3, arg0->unk_64);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00199770", func_0019ADE0);

int func_0019AE60(void)
{
    Obj0051E444 *p = D_0051E444[0];
    if (p != 0)
        return p->unk_334;
    return D_00524798[0];
}

int func_0019AE90(void)
{
    return D_0051C804[0];
}

void func_0019AEA0(int v)
{
    D_0051C804[0] = v;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00199770", func_0019AEB0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00199770", func_0019AFE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00199770", func_0019B090);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00199770", func_0019B180);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00199770", func_0019B390);

void func_0019B470(Obj_0019B470 *p)
{
    p->unk_0 &= 0xFF7FFFFF;
    p->unk_288 = 0;
    p->unk_28C = 0;
    p->unk_290 = 0;
    p->unk_294 = 0;
    p->unk_298 = 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00199770", func_0019B4A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00199770", func_0019B660);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00199770", func_0019B750);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00199770", func_0019BA00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00199770", func_0019BBE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00199770", func_0019BC90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00199770", func_0019BD60);

Obj_0019BDD0 *func_0019BDD0(Obj_0019BDD0 *o)
{
    int saved;

    o->unk_8 = 0;
    o->unk_C = 0;
    o->unk_A4 = 0;
    o->unk_A0 = 0;
    o->unk_2BC = 0;
    o->unk_B4 = 0;
    o->unk_9C = 0x360B;
    o->unk_334 = 0;
    o->unk_33C = 0;
    func_0019AA30((Obj0019AA30 *)o);
    /* 0x40BC28F5: the single just below 5.88 */
    func_0015EE20(o->unk_78, 0.0f, 0.0f, 5.8799996f);
    func_0015EE20(o->unk_84, 0.0f, 0.0f, 0.0f);
    func_0015EE20(o->unk_90, 0.0f, 0.0f, 1.0f);
    if (o->flags & 0x80) {
        // !FAKE: the reference reloads D_00524798 after every store into o; the plain reads share one load, the volatile view forces the reloads
        o->unk_334 = ((volatile int *)D_00524798)[0];
        o->unk_32C = ((Obj_00524798 *)((volatile int *)D_00524798)[0])->unk_60;
        o->unk_330 = ((Obj_00524798 *)((volatile int *)D_00524798)[0])->unk_64;
        o->unk_338 = ((Obj_00524798 *)((volatile int *)D_00524798)[0])->unk_4;
        o->unk_33C = D_0052479C[0];
    } else {
        func_0019B090(o);
        func_002C3E88(D_0052479C[0], o->unk_334);
        o->unk_33C = D_0052479C[0];
    }
    o->unk_340 = 0;
    o->unk_344 = 0;
    o->unk_348 = 0x280;
    o->unk_34C = 0x1C0;
    o->unk_70 = -1;
    memset(o->unk_B8, 0, 0x80);
    memset(o->unk_138, 0, 0x150);
    func_0019B470((Obj_0019B470 *)o);
    saved = D_00524798[0];
    D_00524798[0] = o->unk_334;
    func_001E7560(&o->unk_10, o->unk_334, 0);
    D_00524798[0] = saved;
    o->unk_10 |= 0x100;
    o->unk_10 |= 0x40;
    func_0019ADA0((Obj0019ADA0 *)o, 0);
    return o;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00199770", func_0019BF90);

void func_0019C1D0(int v)
{
    D_0051C830[0] = v;
}

int func_0019C1E0(void)
{
    return D_0051C830[0];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00199770", func_0019C1F0);
