#include "common.h"
#include "types.h"

void func_0013E810();

int func_0015B6B0(void);

extern s32 D_00523DAC[];

void func_00211130(s32);

typedef struct Slot {
    s32 unk_0;
    s32 unk_4;
    s32 unk_8;
} Slot;

typedef struct Obj_0015B6A0 {
    s32 unk_0;
    s32 unk_4;
    s32 unk_8;
    s32 unk_C;
    s32 unk_10;
    u8 unk_14[0x1C];
    s32 unk_30;
    s32 unk_34;
} Obj_0015B6A0;

extern Slot D_003D5AD0[];

extern s32 D_004FE1D0[];

extern s32 D_004FE1D8[];

extern Obj_0015B6A0 D_0051A420[];

extern s32 D_0051A500[];

extern s32 D_0051A510[];

extern s32 D_0051A514[];

extern s32 D_0051A518[];

extern s32 D_0051A51C[];

extern s32 D_0051A520[];

extern s32 D_0051A524[];

extern s32 D_0051A528[];

extern s32 D_0051A52C[];

extern s32 D_0051A530[];

extern s32 D_0051A550[];

extern s32 D_0051A554[];

extern s32 D_0051A558[];

extern s32 D_0051A55C[];

extern s32 D_0051A560[];

extern s32 D_0051A564[];

extern s32 D_0051A568[];

extern s32 D_0051A56C[];

extern s32 D_0051A570[];

extern s32 D_00522DB0[];

#include "libc.h"

extern void func_0013C4E0();

extern void func_0013DEF0();

extern void func_0013F148();

extern void func_00142D10();

extern void func_00142E10();

extern s32 func_001432E0();

extern void func_00144C10();

extern void func_0015A7C0();

extern void func_0015B9D0();

extern s32 func_00207010();

extern void func_00207320();

extern s32 func_0020F180();

extern f32 D_003D63F0[];

extern s32 D_00523DA8[];

void func_0015BCA0();

extern s32 D_0051A5C0[];

extern s32 D_005240B4[];

void func_0015B6A0(void)
{
    sceGsSyncVCallback(func_0015B6B0);
}

int func_0015B6B0(void)
{
    func_0013E810(0);
    asm {
        sync
        ei
    }
    return 0;
}

void func_0015B6E0(void)
{
    s32 i;
    s32 v;

    memset(D_0051A530, 0, 0x48);
    D_0051A550[0] = (s32)D_004FE1D0;
    D_0051A554[0] = 0;
    D_0051A558[0] = 0;
    D_0051A55C[0] = 0;
    D_0051A560[0] = 0;
    func_00142D10(D_0051A550);
    D_0051A564[0] = (s32)D_004FE1D8;
    D_0051A568[0] = 0x20;
    D_0051A570[0] = (D_0051A568[0] + 1) * 64 + 0x200;
    D_0051A56C[0] = func_0020F180(D_00522DB0, D_0051A570[0]);
    func_00142E10(D_0051A564);
    func_0013DEF0(0);
    func_0015A7C0();
    func_0015B6A0();
    func_0013F148(2, 2);
    func_0013C4E0();
    func_00207320(3);
    D_0051A520[0] = 0;
    D_0051A510[0] = 0;
    D_0051A524[0] = 0;
    D_0051A514[0] = 0;
    D_0051A528[0] = 0;
    D_0051A518[0] = 0;
    D_0051A52C[0] = 0;
    D_0051A51C[0] = 0;
    memset(D_0051A500, 0, 0x10);
    for (i = 0; i < 3; i++) {
        D_0051A500[i] = 0;
        if (D_003D5AD0[i].unk_4 != 0) {
            v = func_00207010(D_003D5AD0[i].unk_0);
            if (v == 0) {
                D_003D5AD0[i].unk_4 = 0;
            } else {
                func_0015B9D0(i, v, D_003D5AD0[i].unk_4, D_003D5AD0[i].unk_0);
            }
        }
    }
    memset(D_0051A420, 0, 0xE0);
    for (i = 0; i < 4; i++) {
        switch (i) {
        case 0:
        case 3:
            D_0051A420[i].unk_0 |= 1;
            D_0051A420[i].unk_30 = func_0020F180(D_00522DB0, 0x231E4);
            D_0051A420[i].unk_4 = func_001432E0(2, D_0051A420[i].unk_30, 0x231E4);
            D_0051A420[i].unk_C = -1;
            D_0051A420[i].unk_10 = 0x63;
            func_00144C10(D_0051A420[i].unk_4, -0x3C0);
            break;
        case 1:
        case 2:
            D_0051A420[i].unk_0 |= 2;
            D_0051A420[i].unk_30 = func_0020F180(D_00522DB0, 0x11924);
            D_0051A420[i].unk_4 = func_001432E0(1, D_0051A420[i].unk_30, 0x11924);
            D_0051A420[i].unk_C = -1;
            D_0051A420[i].unk_10 = 0x63;
            break;
        default:
            *(long long *)1 = 0;
            break;
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015B6A0", func_0015B9D0);

Obj_0015B6A0 *func_0015BB20(s32 arg0)
{
    if (arg0 < 0 || arg0 >= 4)
        return 0;
    return &D_0051A420[arg0];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015B6A0", func_0015BB60);

f32 func_0015BC00(s32 arg0)
{
    return D_003D63F0[arg0];
}

void func_0015BC20(s32 arg0)
{
    if (arg0 == 0) {
        return;
    }
    D_00523DAC[0] = 1010;
    D_005240B4[0] = arg0;
    func_00211130(0x8000);
}

void func_0015BC60(void)
{
    D_00523DAC[0] = 1001;
    func_00211130(0x8000);
}

void func_0015BC80(s32 arg0)
{
    D_00523DA8[0] = arg0;
    D_00523DAC[0] = -1;
    func_0015BCA0(arg0, 0x8000, 1);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015B6A0", func_0015BCA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015B6A0", func_0015BD90);

s32 func_0015BE70(s32 arg0)
{
    s32 i;
    s32 *found;

    found = 0;
    for (i = 0; i < 10; i++) {
        if (arg0 == D_0051A5C0[i * 2]) {
            found = &D_0051A5C0[i * 2];
        }
    }
    if (found == 0) {
        *(long long *)1 = 0;
    }
    found[0] = -1;
    found[1] = 0;
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015B6A0", func_0015BED0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015B6A0", func_0015BF70);
