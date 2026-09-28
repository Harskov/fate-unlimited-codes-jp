#include "common.h"
#include "game_00/tbl_0051D890.h"

typedef struct Obj {
    unsigned char unk_0[0x13C];
    int unk_13C;
    unsigned char unk_140[0x28];
    int unk_168;
} Obj;

typedef struct Obj0019A9A0 {
    int unk_0;
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

typedef struct Obj_0019AE60 {
    unsigned char unk_0[0x334];
    int unk_334;
} Obj_0019AE60;

typedef struct Obj_0019B470 {
    unsigned int flags;
    unsigned char unk_4[0x284];
    int unk_288;
    int unk_28C;
    int unk_290;
    int unk_294;
    int unk_298;
} Obj_0019B470;

extern Obj_0019AE60 *D_0051E444[];

extern int D_00524798[];

extern int D_0051C804[];

extern int D_0051C830[];

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00199770", func_00199770);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00199770", func_00199850);

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
    if (mode == 11 && (o->unk_0 & 0x4000) == 0)
        r |= 1;
    if (D_0051D890[0].unk_0 & 0x02000000)
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

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00199770", func_0019ADA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00199770", func_0019ADE0);

int func_0019AE60(void)
{
    Obj_0019AE60 *p = D_0051E444[0];
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
    p->flags &= 0xFF7FFFFF;
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

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00199770", func_0019BDD0);

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
