#include "common.h"
#include "libc.h"

typedef struct Obj_0022E284 {
    u8 unk_0[0x20];
    void **unk_20;
    /* 0x24 */ s32 count;
} Obj_0022E284;

typedef struct Obj_0022E250 {
    u8 unk_0[0x18];
    Obj_0022E284 *unk_18;
} Obj_0022E250;

extern s32 D_00522DB0[];

void *func_0020F180(void *pool, s32 size);

s32 func_0026A1E8(void *item);

void func_0026A8C0(void *item, f32 *a, f32 *b);

s32 func_002ADB48(void *item);


s32 func_0020E850(s32, s32);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022D3C0", func_0022D3C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022D3C0", func_0022E120);

// for each entry of the list at +0x18 the check rejects, kind 5 gets one fresh 0x40-byte
// block and kind 6 two, each cleared with 1.0 at words 0 and 5, handed to func_0026A8C0
Obj_0022E250 *func_0022E250(Obj_0022E250 *arg0)
{
    void *item;
    Obj_0022E284 *sub;
    f32 *a;
    f32 *b;
    s32 count;
    s32 i;

    sub = arg0->unk_18;
    if (sub == 0)
        return arg0;
    count = sub->count;
    for (i = 0; i < count; i++) {
        item = sub->unk_20[i];
        if (func_002ADB48(item) == 0) {
            switch (func_0026A1E8(item)) {
            case 5:
                a = func_0020F180(D_00522DB0, 0x40);
                memset(a, 0, 0x40);
                a[0] = 1.0f;
                a[5] = 1.0f;
                func_0026A8C0(item, a, 0);
                break;
            case 6:
                a = func_0020F180(D_00522DB0, 0x40);
                b = func_0020F180(D_00522DB0, 0x40);
                memset(a, 0, 0x40);
                memset(b, 0, 0x40);
                a[0] = 1.0f;
                a[5] = 1.0f;
                b[0] = 1.0f;
                b[5] = 1.0f;
                func_0026A8C0(item, a, b);
                break;
            }
        }
    }
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022D3C0", func_0022E400);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022D3C0", func_0022EE30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022D3C0", func_0022F930);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022D3C0", func_0022F990);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022D3C0", func_0022FAC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022D3C0", func_0022FB90);

// maps func_0020E850's result 0..8 to a multiple of 0x1000; for any other result the
// return value is left unset, as the original leaves it
s32 func_0022FC70(s32 arg0, s32 arg1)
{
    s32 result;

    switch (func_0020E850(arg0, arg1)) {
    case 0:
        result = 0;
        break;
    case 1:
        result = 0x1000;
        break;
    case 2:
        result = 0x2000;
        break;
    case 3:
        result = 0x3000;
        break;
    case 4:
        result = 0x4000;
        break;
    case 5:
        result = 0x5000;
        break;
    case 6:
        result = 0x6000;
        break;
    case 7:
        result = 0x7000;
        break;
    case 8:
        result = 0x8000;
        break;
    }
    return result;
}
