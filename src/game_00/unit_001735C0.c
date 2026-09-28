#include "common.h"
#include "game_00/vec.h"
#include "game_00/tbl_0051D890.h"
#include "game_00/tbl_00528A00.h"

extern int D_00522E20[];

extern int D_00522E90[];

extern int D_005231C0[];

extern int D_00523900[];

extern int D_00523AF0[];

extern int D_00523D50[];

extern int D_00531B60[];

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001735C0", func_001735C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001735C0", func_001736B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001735C0", func_001736F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001735C0", func_00173E60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001735C0", func_001740E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001735C0", func_00174600);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001735C0", func_00174A80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001735C0", func_00174CE0);

float func_00175070(Vec4 *v)
{
    return v->unk_C;
}

float func_00175080(Vec4 *v)
{
    return v->unk_8;
}

unsigned int *func_00175090(int a, int b, unsigned int *p)
{
    if (((*p >> 8) & 0xFF) != 0)
        return p;
    return p + 1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001735C0", func_001750B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001735C0", func_00175390);

int func_00175B10(float t)
{
    float v;
    int n;

    v = 60.0f * t;
    if (v > 0.0f)
        n = (int)(0.5f + v);
    else
        n = (int)(v - 0.5f);

    if (n < 0)
        n = 0;
    return n;
}

int *func_00175B80(int *base, int i)
{
    return &base[i * 2 + 1];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001735C0", func_00175BA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001735C0", func_00175F60);

void func_00176140(int kind, void **out)
{
    switch (kind) {
    case 34:
        *out = D_00523D50;
        break;
    case 35:
        *out = D_00522E90;
        break;
    case 36:
        *out = D_00522E20;
        break;
    case 38:
        *out = D_00523900;
        break;
    case 39:
        *out = D_00523AF0;
        break;
    case 40:
        *out = D_005231C0;
        break;
    case 41:
        *out = D_0051D890;
        break;
    case 42:
        *out = D_00531B60;
        break;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001735C0", func_001761F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001735C0", func_001762D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001735C0", func_00176490);

int func_001766A0(int id, int side)
{
    int i;
    int ret = 0;

    for (i = 0; i < 12; i++) {
        if (D_00528A00[i].used[side] == 1 && D_00528A00[i].id[side] == id) {
            D_00528A00[i].used[side] = 0;
            D_00528A10[i].v[side] = 0;
            D_00528A08[i].v[side] = 0;
            ret = 1;
            break;
        }
    }
    return ret;
}

int func_00176740(int id, int side)
{
    int i;

    for (i = 0; i < 12; i++) {
        if (D_00528A00[i].used[side] == 1 && D_00528A00[i].id[side] == id) {
            return D_00528A08[i].v[side];
        }
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001735C0", func_001767B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001735C0", func_00176880);
