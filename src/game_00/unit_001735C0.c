#include "common.h"
#include "game_00/vec.h"
#include "game_00/tbl_0051D890.h"
#include "game_00/tbl_00528A00.h"
#include "game_00/tbl_00522E90.h"
#include "game_00/tbl_00523900.h"
#include "game_00/tbl_00531B60.h"

extern int D_00522E20[];

extern int D_005231C0[];

extern int D_00523AF0[];

extern int D_00523D50[];

extern s32 D_0051AC50[];

extern s32 D_0051AC54[];

extern s32 D_0051AC58[];

extern s32 D_0051AC5C[];

#include "libc.h"
#include "game_00/unit_001735C0.h"

void func_00176490(int a, int b, int c, int d);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001735C0", func_001735C0);

void *func_001736B0(int *arg0)
{
    int n = *arg0;

    if (n & 3)
        *(long long *)1 = 0;
    return (char *)arg0 + ((n + 3) & ~3);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001735C0", func_001736F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001735C0", func_00173E60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001735C0", func_001740E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001735C0", func_00174600);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001735C0", func_00174A80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001735C0", func_00174CE0);

/* evidence: the body is `v -> w` */
float Vec4_GetW(Vec4 *v)
{
    return v->w;
}

/* evidence: the body is `v -> z` */
float Vec4_GetZ(Vec4 *v)
{
    return v->z;
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

/* Picks four two-bit settings from the argument where its enable bits 0x40, 0x80 and
   0x100 are set, from the globals at D_0051AC50..D_0051AC5C where they are not, and
   passes them on; nothing happens when none of the three bits is set. */
void func_001761F0(unsigned int arg0)
{
    int p0;
    int p1;
    int p2;
    int p3;

    if (arg0 & 0x1C0) {
        if (arg0 & 0x40) {
            switch ((arg0 >> 9) & 3) {
            default:
                p1 = 0;
                p2 = 0;
                break;
            case 1:
                p1 = 1;
                p2 = 0;
                break;
            case 2:
                p1 = 0;
                p2 = 1;
                break;
            case 3:
                p1 = 1;
                p2 = 1;
                break;
            }
        } else {
            p1 = D_0051AC54[0];
            p2 = D_0051AC58[0];
        }
        if (arg0 & 0x80) {
            p0 = (arg0 >> 11) & 3;
        } else {
            p0 = D_0051AC50[0];
        }
        if (arg0 & 0x100) {
            p3 = (arg0 >> 13) & 3;
        } else {
            p3 = D_0051AC5C[0];
        }
        func_00176490(p0, p1, p2, p3);
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001735C0", func_001762D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001735C0", func_00176490);

int func_001766A0(int id, int side)
{
    int i;
    int ret = 0;

    for (i = 0; i < 12; i++) {
        if (D_00528A00[i].unk_0[side] == 1 && D_00528A00[i].unk_10[side] == id) {
            D_00528A00[i].unk_0[side] = 0;
            D_00528A10[i].unk_0[side] = 0;
            D_00528A08[i].unk_0[side] = 0;
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
        if (D_00528A00[i].unk_0[side] == 1 && D_00528A00[i].unk_10[side] == id) {
            return D_00528A08[i].unk_0[side];
        }
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001735C0", func_001767B0);

void func_00176880(void)
{
    memset(D_0051AC50, 0, 0x10);
    D_0051AC50[0] = 0;
    D_0051AC54[0] = 0;
    D_0051AC58[0] = 0;
    D_0051AC5C[0] = 0;
}
