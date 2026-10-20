#include "common.h"

typedef struct Obj_00333770 {
    u8 unk_0[4];
    s32 unk_4;
    u8 pad_8[0x18];
    f32 unk_20;
    f32 unk_24;
    f32 unk_28;
    f32 unk_2C;
    f32 unk_30;
    u8 pad_34[0x20];
} Obj_00333770;

#include "libc.h"

typedef struct Sub_00333360 {
    s32 unk_0;
    u8 pad_4[0x24];
    f32 unk_28;
    u8 pad_2C[0x28];
} Sub_00333360;

typedef struct Obj_00333360 {
    u8 pad_0[0x258];
    Sub_00333360 unk_258[6];
} Obj_00333360;

typedef struct Slot_00333630 {
    s32 unk_0;
    u8 pad_4[0xC];
    u32 unk_10;
    u8 pad_14[0x40];
} Slot_00333630;

typedef struct Obj_00333630 {
    u8 pad_0[0x258];
    Slot_00333630 slots[6];
} Obj_00333630;

typedef struct Sub_003333A0 {
    s32 unk_0;
    u8 pad_4[0x20];
    f32 unk_24;
    u8 pad_28[0x2C];
} Sub_003333A0;

typedef struct Obj_003333A0 {
    u8 pad_0[0x258];
    Sub_003333A0 unk_258[6];
} Obj_003333A0;

typedef struct Sub_003333E0 {
    s32 unk_0;
    u8 pad_4[0x1C];
    f32 unk_20;
    u8 pad_24[0x30];
} Sub_003333E0;

typedef struct Obj_003333E0 {
    u8 pad_0[0x258];
    Sub_003333E0 unk_258[6];
} Obj_003333E0;

typedef struct Sub_00333420 {
    s32 unk_0;
    u8 pad_4[0x18];
    f32 unk_1C;
    u8 pad_20[0x34];
} Sub_00333420;

typedef struct Obj_00333420 {
    u8 pad_0[0x258];
    Sub_00333420 unk_258[6];
} Obj_00333420;

typedef struct Sub_00333310 {
    s32 unk_0;
    u8 pad_4[0x28];
    f32 unk_2C;
    u8 pad_30[0x24];
} Sub_00333310;

typedef struct Obj_00333310 {
    u8 pad_0[0x1E0];
    u32 unk_1E0;
    u8 pad_1E4[0x74];
    Sub_00333310 unk_258[6];
} Obj_00333310;

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00332F20", func_00332F20);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00332F20", func_00333240);

f32 func_00333310(Obj_00333310 *arg0)
{
    f32 r;
    s32 i;

    r = 1.0f;
    if (!(arg0->unk_1E0 & 0x8000)) {
        for (i = 0; i < 6; i++) {
            if (arg0->unk_258[i].unk_0 != -1) {
                r *= arg0->unk_258[i].unk_2C;
            }
        }
    }
    return r;
}

f32 func_00333360(Obj_00333360 *arg0)
{
    f32 r;
    s32 i;

    r = 1.0f;
    for (i = 0; i < 6; i++) {
        if (arg0->unk_258[i].unk_0 != -1) {
            r *= arg0->unk_258[i].unk_28;
        }
    }
    return r;
}

f32 func_003333A0(Obj_003333A0 *arg0)
{
    f32 r;
    s32 i;

    r = 1.0f;
    for (i = 0; i < 6; i++) {
        if (arg0->unk_258[i].unk_0 != -1) {
            r *= arg0->unk_258[i].unk_24;
        }
    }
    return r;
}

f32 func_003333E0(Obj_003333E0 *arg0)
{
    f32 r;
    s32 i;

    r = 1.0f;
    for (i = 0; i < 6; i++) {
        if (arg0->unk_258[i].unk_0 != -1) {
            r *= arg0->unk_258[i].unk_20;
        }
    }
    return r;
}

f32 func_00333420(Obj_00333420 *arg0)
{
    f32 r;
    s32 i;

    r = 1.0f;
    for (i = 0; i < 6; i++) {
        if (arg0->unk_258[i].unk_0 != -1) {
            r *= arg0->unk_258[i].unk_1C;
        }
    }
    return r;
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00332F20", func_00333460);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00332F20", func_00333560);

u32 func_00333630(Obj_00333630 *arg0, u32 arg1)
{
    u32 result;
    int i;

    result = 0;
    for (i = 0; i < 6; i++) {
        if (arg0->slots[i].unk_0 != -1) {
            result |= arg0->slots[i].unk_10 & arg1;
        }
    }
    return result;
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00332F20", func_00333670);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00332F20", func_003336B0);

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00332F20", func_00333720);

void func_00333770(Obj_00333770 *arg0)
{
    if (arg0 != 0) {
        memset(arg0, 0, sizeof(Obj_00333770));
        arg0->unk_4 = -1;
        arg0->unk_20 = 1.0f;
        arg0->unk_24 = 1.0f;
        arg0->unk_28 = 1.0f;
        arg0->unk_2C = 1.0f;
        arg0->unk_30 = 1.0f;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00332F20", func_003337D0);

int func_00333900(int a0, int a1, int a2)
{
    return a2;
}

void func_00333910(void)
{
}
