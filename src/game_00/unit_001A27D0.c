#include "common.h"
#include "game_00/vec.h"
#include "game_00/tbl_0051D890.h"

typedef struct Src {
    unsigned char unk_0[0x460];
    float unk_460;
    float unk_464;
    float unk_468;
} Src;

typedef struct Obj_001A27D0 {
    float unk_0;
    float unk_4;
} Obj_001A27D0;

extern int D_005239C8[];

typedef struct Sub_001A2DD0 {
    u8 pad_0[0xC];
    /* 0x0C */ s32 unk_C;
} Sub_001A2DD0;

typedef struct Elem_001A2DD0 {
    u8 pad_0[0xC];
    /* 0x0C */ Sub_001A2DD0 *unk_C;
    u8 pad_10[0xE0];
} Elem_001A2DD0;

typedef struct Obj_001A2DD0 {
    u8 pad_0[0x6C];
    /* 0x6C */ Elem_001A2DD0 *unk_6C;
} Obj_001A2DD0;

int func_001619C0(Obj_001A2DD0 *h, int i);

int func_002E6C10();

int func_0020E5F0();

void func_0015EE20(Vec3 *v, float x, float y, float z);

void func_0015D130(Vec4 *v, float *p);

void func_001B7BF0(Vec4 *v, float *p);

int func_001A2C70();

void func_001A2940();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A27D0", func_001A27D0);

int func_001A2930(void)
{
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A27D0", func_001A2940);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A27D0", func_001A2A50);

void func_001A2BF0(int arg0, int arg1, int arg2, int arg3)
{
    float b[16];
    Vec4 a[12];
    int n;

    n = func_001A2C70(arg0, arg1, a, b);
    func_001A2940(arg0, arg1, arg2, arg3, n, a, b, 0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A27D0", func_001A2C70);

int func_001A2DD0(Obj_001A2DD0 *arg0, int arg1)
{
    int idx = func_001619C0(arg0, arg1);
    if (idx < 0)
        return 0;
    return func_002E6C10(arg0->unk_6C[idx].unk_C->unk_C);
}

int func_001A2E20(Src *s, Vec3 *dst, float *out, Obj_001A27D0 *o, int i, float w)
{
    dst[i].x = s->unk_460;
    dst[i].y = o->unk_4;
    dst[i].z = s->unk_468;
    out[i] = w;
    return i + 1;
}

void func_001A2E60(Src *arg0)
{
    Vec4 a;
    Vec3 b;
    float c;

    func_0015EE20(&b, 0.0f, -1.0f, 0.0f);
    func_0015D130(&a, &arg0->unk_460);
    func_001B7BF0(&a, &c);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A27D0", func_001A2EB0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A27D0", func_001A3050);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A27D0", func_001A31D0);

void func_001A3560(int i)
{
    Rec0051D890 *r = &D_0051D890[i];

    r[9].unk_14 = 0;
}

void func_001A3580(int arg0)
{
    Rec0051D890 *r = &D_0051D890[arg0];
    int *p = &r[9].unk_10;

    p[1] = func_0020E5F0(p[1], 1, 0, 100);
}

int func_001A35D0(int i, int v)
{
    Rec0051D890 *r = &D_0051D890[i];

    r[10].flags = v;
    return 0;
}

int func_001A3600(int arg0)
{
    int limit;
    int base;
    int step;
    int diff;
    int n;

    switch (D_005239C8[0]) {
    case 0:
        limit = 0x7080;
        step = 0x3C;
        base = 15;
        break;
    case 1:
        limit = 0xE100;
        step = 0x78;
        base = 10;
        break;
    case 2:
        limit = 0x15180;
        step = 0xF0;
        base = 5;
        break;
    default:
        limit = 0;
        break;
    }

    if (arg0 >= limit)
        return 0;

    diff = limit - arg0;
    n = base + diff / step;
    return n * diff / 10 + 30000;
}
