#include "common.h"
#include "libc.h"

typedef struct Obj_00377740 {
    u8 pad_0[0x23EC];
    s32 unk_23EC[4];
} Obj_00377740;

typedef struct Sub_00377910 {
    u8 pad_0[0x14];
    s32 unk_14;
} Sub_00377910;

typedef struct Sub_003778C0 {
    u8 pad_0[0x3F8];
    f32 unk_3F8;
    f32 unk_3FC;
    f32 unk_400;
} Sub_003778C0;

typedef struct Sub_00377B80 {
    u8 pad_0[0xC];
    void *unk_C;
} Sub_00377B80;

extern s32 D_00522DB0[];

extern s32 D_00536160[];

void *func_0020F180(s32 *arg0, s32 arg1);

void func_0020F230(s32 *arg0, void *arg1);

Sub_00377B80 *func_0015A450(s32 arg0);

Sub_00377B80 *func_0015A4F0(void);

void func_00378F40(void *arg0, Obj_00377740 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f32 arg8);

typedef struct Sub_00377CC0 {
    u8 pad_0[0x10];
    s32 unk_10;
} Sub_00377CC0;

typedef struct Obj_00377CC0 {
    u8 pad_0[8];
    Sub_00377CC0 *unk_8;
    u8 pad_C[0x184];
    s32 unk_190;
} Obj_00377CC0;

typedef struct Sub_00377AC0 {
    u8 pad_0[0x3D0];
    f32 unk_3D0;
} Sub_00377AC0;

typedef struct Elem_00377870 {
    u8 pad_0[0xE4];
    s8 unk_E4;
} Elem_00377870;

typedef struct Sub_00377870 {
    u8 pad_0[0x1B0];
    Elem_00377870 *unk_1B0;
    u8 pad_1B4[0x1CC];
    Elem_00377870 *unk_380;
} Sub_00377870;

typedef struct Sub_00377960 {
    u8 pad_0[0x1C];
    s32 unk_1C;
    u8 pad_20[8];
    s32 unk_28;
    f32 unk_2C;
} Sub_00377960;

s32 func_00377740(Obj_00377740 *arg0, s32 arg1)
{
    if (arg0 == 0)
        return 0;
    if (arg1 < 4) {
        arg0->unk_23EC[arg1] = 0;
        return 1;
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377740", func_00377770);

void func_00377870(Obj_00377740 *arg0, s32 arg1, s8 arg2)
{
    if (arg0 != 0 && arg0 != 0 && arg1 < 4) {
        if (arg0->unk_23EC[arg1] != 0) {
            ((Sub_00377870 *)arg0->unk_23EC[arg1])->unk_380->unk_E4 = arg2;
            ((Sub_00377870 *)arg0->unk_23EC[arg1])->unk_1B0->unk_E4 = arg2;
        }
    }
}

void func_003778C0(Obj_00377740 *arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4)
{
    if (arg0 != 0 && arg0 != 0 && arg1 < 4) {
        if (arg0->unk_23EC[arg1] != 0) {
            ((Sub_003778C0 *)arg0->unk_23EC[arg1])->unk_3F8 = arg2;
            ((Sub_003778C0 *)arg0->unk_23EC[arg1])->unk_3FC = arg3;
            ((Sub_003778C0 *)arg0->unk_23EC[arg1])->unk_400 = arg4;
        }
    }
}

s32 func_00377910(Obj_00377740 *arg0, s32 arg1)
{
    Sub_00377910 *p;

    if (arg0 == 0)
        return 0;
    if (arg0 != 0 && arg1 < 4) {
        p = (Sub_00377910 *)arg0->unk_23EC[arg1];
        if (p != 0)
            return p->unk_14;
    }
    return 0;
}

void func_00377960(Obj_00377740 *arg0, s32 arg1, s32 arg2)
{
    if (arg0 != 0 && arg0 != 0 && arg1 < 4) {
        if (arg0->unk_23EC[arg1] != 0) {
            ((Sub_00377960 *)arg0->unk_23EC[arg1])->unk_1C = arg2;
            ((Sub_00377960 *)arg0->unk_23EC[arg1])->unk_28 = 0;
            ((Sub_00377960 *)arg0->unk_23EC[arg1])->unk_2C = 1.0f / (f32)arg2;
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377740", func_003779D0);

void func_00377A20(Obj_00377740 *arg0, s32 arg1)
{
    s32 *p;

    if (arg0 != 0 && arg0 != 0 && arg1 < 4) {
        p = (s32 *)arg0->unk_23EC[arg1];
        if (p != 0)
            *p |= 2;
    }
}

void func_00377A70(Obj_00377740 *arg0, s32 arg1)
{
    s32 *p;

    if (arg0 != 0 && arg0 != 0 && arg1 < 4) {
        p = (s32 *)arg0->unk_23EC[arg1];
        if (p != 0)
            *p |= 1;
    }
}

void func_00377AC0(Obj_00377740 *arg0, s32 arg1, f32 arg2)
{
    Sub_00377AC0 *p;

    if (arg0 != 0 && arg0 != 0 && arg1 < 4) {
        p = (Sub_00377AC0 *)arg0->unk_23EC[arg1];
        if (p != 0)
            p->unk_3D0 = arg2;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377740", func_00377B00);

void *func_00377B80(Obj_00377740 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, f32 arg7)
{
    void *p;
    Sub_00377B80 *q;

    p = func_0020F180(D_00522DB0, 0x420);
    if (p != 0) {
        if (D_00536160[0] != 0) {
            q = func_0015A450(D_00536160[0]);
        } else {
            q = func_0015A4F0();
            D_00536160[0] = (s32)q;
        }
        if (q != 0) {
            q->unk_C = p;
            memset(p, 0, 0x420);
            arg0->unk_23EC[arg1] = (s32)p;
            func_00378F40(p, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
        } else {
            func_0020F230(D_00522DB0, p);
            p = 0;
        }
    }
    return p;
}

void func_00377CC0(Obj_00377CC0 *arg0)
{
    s32 a;
    s32 b;

    if (arg0 != 0) {
        a = func_0020CE80(&arg0->unk_190);
        b = func_0020CE80(&arg0->unk_8->unk_10);
        func_0015D130(a, b);
        func_002E65E0(arg0->unk_8, &arg0->unk_190, 0);
    }
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377740", func_00377D20);
