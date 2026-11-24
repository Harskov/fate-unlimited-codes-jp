#include "common.h"

typedef struct Obj_001F3110 {
    u8 pad_0[0x38];
    s32 unk_38;
    u8 unk_3C[0x164];
    s32 unk_1A0;
} Obj_001F3110;

void func_001F3010();

void func_002B1E28();

typedef struct Obj_001F2FB0 {
    u8 unk_0[2];
    /* 0x02 */ u8 flags_2;
    u8 unk_3[0x15];
    s32 unk_18;
    u8 pad_1C[0xC];
    f32 unk_28;
    u8 pad_2C[0x20];
    /* 0x4C */ s32 flags_4C;
} Obj_001F2FB0;

void func_0029E380(s32 arg0);

s32 func_002AB3B0(s32 arg0, s32 arg1);

s8 *func_002ABCA0(s32 arg0, s32 arg1);

typedef struct Elem_001F3190 {
    s32 unk_0;
    s16 unk_4;
    u8 unk_6;
    s8 unk_7;
    f32 unk_8;
    Obj_001F2FB0 *unk_C;
} Elem_001F3190;

typedef struct Sub_001F3190 {
    u8 pad_0[0x20];
    void **unk_20;
    /* 0x24 */ s32 count;
} Sub_001F3190;

extern s32 D_005015C8[];

extern s32 D_005015D0[];

extern s32 D_005015D8[];

extern s32 D_005015E0[];

extern s32 D_005015E8[];

extern s32 D_005015F0[];

s32 func_001F3470(Obj_001F2FB0 *arg0);

s32 func_001F3510(Obj_001F2FB0 *arg0, s32 *arg1);

s32 func_00203F50(Obj_001F2FB0 *arg0, s32 arg1);

s32 func_002AB3E0(void *arg0);

void func_002B0538(Obj_001F2FB0 *arg0);

s32 func_002ADB48(void *);

Obj_001F2FB0 *func_001F3190(Obj_001F2FB0 *arg0, s32 *arg1);

s32 func_001F35C0(Obj_001F2FB0 *arg0);

Obj_001F2FB0 *func_001F2FB0(Obj_001F2FB0 *arg0, s32 *arg1)
{
    func_0029E380(arg0->unk_18);
    if (arg1[0] == arg1[1]) {
        arg1[2] = (s32)arg0;
    }
    arg1[0]++;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F2FB0", func_001F3010);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F2FB0", func_001F3080);

void func_001F3110(Obj_001F3110 *arg0, s32 arg1, s32 arg2)
{
    s32 args[2];

    args[0] = arg1;
    args[1] = arg2;
    func_002B1E28(arg0->unk_38, func_001F3010, args);
}

void func_001F3140(Obj_001F3110 *arg0)
{
    s32 args[2];

    if (arg0->unk_1A0 != 0) {
        args[0] = 0;
        args[1] = arg0->unk_1A0;
        func_002B1E28(arg0->unk_38, func_001F3190, args);
    }
}

/* Fills entry arg1[0] of the table at arg1[1] for arg0 and advances the index;
   probably a callback of func_002B1E28's walk, as func_001F3140 passes it there. */
Obj_001F2FB0 *func_001F3190(Obj_001F2FB0 *arg0, s32 *arg1)
{
    Elem_001F3190 *e;
    Sub_001F3190 *sub;
    s32 idx;
    s32 res;
    s32 count;
    s32 found;
    s32 saved;
    s32 v;
    s32 i;

    idx = arg1[0];
    e = (Elem_001F3190 *)arg1[1] + idx;
    if (arg0->flags_4C & 2) {
        func_002B0538(arg0);
    }
    sub = (Sub_001F3190 *)arg0->unk_18;
    res = func_002AB3E0(sub);
    count = sub->count;
    e->unk_0 = 0;
    e->unk_6 = 0xFF;
    e->unk_7 = -1;
    e->unk_4 = 0;
    e->unk_8 = arg0->unk_28;
    e->unk_C = arg0;
    if (res != 0) {
        if (func_00203F50(arg0, 0) != 0) {
            e->unk_0 |= 2;
        } else {
            saved = arg0->flags_2;
            found = 0;
            if (func_001F35C0(arg0) != 0) {
                e->unk_0 |= 4;
            }
            v = func_001F3510(arg0, D_005015C8);
            if (v >= 0) {
                e->unk_0 |= 0x40;
                e->unk_4 = v;
                if (e->unk_4 != 0) {
                    found = 1;
                }
            }
            v = func_001F3510(arg0, D_005015D0);
            if (v >= 0) {
                e->unk_0 |= 0x80;
                e->unk_4 = v;
                if (e->unk_4 != 0) {
                    found = 1;
                }
            }
            v = func_001F3510(arg0, D_005015D8);
            if (v >= 0) {
                e->unk_0 |= 0x100;
                e->unk_4 = v;
                if (e->unk_4 != 0) {
                    found = 1;
                }
            }
            v = func_001F3510(arg0, D_005015E0);
            if (v >= 0) {
                e->unk_0 |= 0x200;
                e->unk_4 = v;
                if (e->unk_4 != 0) {
                    found = 1;
                }
            }
            v = func_001F3510(arg0, D_005015E8);
            if (v >= 0) {
                e->unk_0 |= 0x400;
                e->unk_4 = v;
                if (e->unk_4 != 0) {
                    found = 1;
                }
            }
            v = func_001F3510(arg0, D_005015F0);
            if (v >= 0) {
                e->unk_0 |= 0x800;
                e->unk_4 = v;
            }
            v = func_001F3470(arg0);
            if (v >= 0) {
                found = 1;
                e->unk_0 |= 0x10000;
                e->unk_7 = v;
            }
            if (found != 0) {
                arg0->flags_2 = saved & ~4;
            }
        }
    }
    if (count != 0) {
        for (i = 0; i < count; i++) {
            if (func_002ADB48(sub->unk_20[i]) != 0) {
                e->unk_0 |= 8;
            }
        }
    }
    arg1[0]++;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F2FB0", func_001F3470);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F2FB0", func_001F3510);

s32 func_001F35C0(Obj_001F2FB0 *arg0)
{
    if (*func_002ABCA0(func_002AB3B0(arg0->unk_18, 0), 0) != 0x57 && (arg0->flags_2 & 4)) {
        return 1;
    }
    return 0;
}
