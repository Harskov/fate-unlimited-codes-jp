#include "common.h"
#include "game_00/tbl_0051D890.h"

typedef struct Obj {
    unsigned char unk_0[0x230];
    int flags;
} Obj;

extern int D_00531C58[];

int func_001A36A0(int arg0, int arg1)
{
    return arg0 * 10000 + arg1 * 1000;
}

int func_001A36D0(int arg0, int arg1)
{
    if (arg1 == 0)
        return 50000;
    return (arg0 - arg1) * 1000;
}

int func_001A3700(int arg0, int arg1)
{
    return arg0 * 10000 + arg1 * 1000;
}

int func_001A3730(int i)
{
    return i * 300;
}

int func_001A3750(int arg0)
{
    int r;

    r = (D_00531C58[0] * 99 - arg0) * 500;
    if (r < 0)
        r = 0;
    return r;
}

void func_001A3790(int i)
{
    Rec0051D890 *r = &D_0051D890[i];

    r[10].unk_4 = 0;
}

void func_001A37B0(int i, int v)
{
    Rec0051D890 *r = &D_0051D890[i];

    r[10].unk_4 = v;
}

void func_001A37D0(int i)
{
    Rec0051D890 *r = &D_0051D890[i];

    r[10].unk_4++;
}

void func_001A3800(int i, int v)
{
    Rec0051D890 *r = &D_0051D890[i];

    r[9].unk_10 = v;
}

void func_001A3820(int i)
{
    Rec0051D890 *r = &D_0051D890[i];

    r[9].unk_10 = 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A36A0", func_001A3840);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A36A0", func_001A3890);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A36A0", func_001A39D0);

int func_001A3A80(Obj *o, unsigned short mask)
{
    return o->flags & mask;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A36A0", func_001A3A90);
