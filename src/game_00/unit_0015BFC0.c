#include "common.h"

extern s32 D_0051A630[];

#include "libc.h"

extern s32 D_0051A580[];

extern s32 D_0051A590[];

extern s32 D_00528A00[];

void func_0015BF70();

void func_0015C5F0();

void func_0015CB70();

void func_0015E900();

void func_0015C360();

extern s32 D_0051A578[];

void func_0015BFC0();

void func_0015C610();

void func_0015E8A0();

typedef struct Obj_0015BFC0 {
    s32 unk_0;
    s32 unk_4;
    s32 unk_8;
} Obj_0015BFC0;

extern s32 D_00522DB0[];

void func_0020F230(s32 *, void *);

extern s32 D_0051A63C[][19];

s32 func_002ED838(s32, s32);

void func_0015BFC0(s32 *arg0)
{
    Obj_0015BFC0 *obj;

    obj = (Obj_0015BFC0 *)*arg0;
    if (obj != 0) {
        if (obj->unk_8 != 0) {
            func_002EA0B0(obj->unk_4);
            obj->unk_8 = 0;
        }
        func_0020F230(D_00522DB0, obj);
        *arg0 = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015BFC0", func_0015C020);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015BFC0", func_0015C160);

s32 func_0015C220(s32 arg0, s32 *arg1)
{
    if (arg1[0] == arg1[1]) {
        arg1[2] = arg0;
        return 0;
    }
    arg1[1]++;
    return arg0;
}

s32 func_0015C250(s32 arg0, s32 arg1, s32 arg2)
{
    s32 result;
    s32 i;

    result = 0;
    for (i = 0; i < 8; i++) {
        if (D_0051A630[i * 19] == 1 && arg0 == D_0051A630[i * 19 + 1]) {
            result = func_002ED838(D_0051A63C[i][arg1], arg2);
            break;
        }
    }
    return result;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015BFC0", func_0015C2E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015BFC0", func_0015C360);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015BFC0", func_0015C450);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015BFC0", func_0015C4A0);

void func_0015C580(void)
{
    s32 i;

    for (i = 0; i < 8; i++) {
        if (D_0051A630[i * 0x13] == 1)
            func_0015C360(D_0051A630[i * 0x13 + 1]);
    }
}

void func_0015C5F0(void)
{
    memset(D_0051A630, 0, 0x260);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015BFC0", func_0015C610);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015BFC0", func_0015CB70);

void func_0015CF10(void)
{
    if (D_0051A580[0] == 1) {
        D_0051A580[0] = 0;
        func_0015E8A0();
        func_0015BFC0(D_0051A578);
        func_0015C610();
        func_0015C580();
        func_0015BF70();
    }
}

// one-time setup: guard on the init flag, then clear the two state blocks
void func_0015CF80(void)
{
    if (D_0051A580[0] == 0) {
        D_0051A580[0] = 1;
        func_0015CB70();
        memset(D_00528A00, 0, 0x120);
        func_0015E900(0x500, 0xC8, 0xC8);
        func_0015C5F0();
        func_0015BF70();
        memset(D_0051A590, -1, 0x28);
    }
}
