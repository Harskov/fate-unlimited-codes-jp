#include "common.h"

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

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377740", func_00377870);

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

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377740", func_00377960);

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

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377740", func_00377AC0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377740", func_00377B00);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377740", func_00377B80);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377740", func_00377CC0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377740", func_00377D20);
