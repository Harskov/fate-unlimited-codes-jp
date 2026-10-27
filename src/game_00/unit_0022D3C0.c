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

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022D3C0", func_0022FC70);
