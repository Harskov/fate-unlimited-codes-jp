#include "common.h"

typedef struct Entry_0037E6F0 {
    s32 unk_0;
    s32 unk_4;
} Entry_0037E6F0;

typedef struct Obj_0037E6F0 {
    u8 pad_0[0x14];
    s32 unk_14;
} Obj_0037E6F0;

extern s16 *func_0037E6A0();

extern s32 D_005361A0[];

extern void func_0037F220();

extern void func_0037ED90();

f32 func_0037E310(u16 arg0)
{
    union {
        s32 i;
        f32 f;
    } u;

    u.i = arg0 << 16;
    return u.f;
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037E310", func_0037E330);

s16 func_0037E4A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s16 *table = func_0037E6A0();
    return table[arg3];
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037E310", func_0037E4D0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037E310", func_0037E5B0);

s32 func_0037E660(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 *table = (s32 *)func_0037E6A0();
    return arg0 + table[arg3 + 2];
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037E310", func_0037E6A0);

Entry_0037E6F0 *func_0037E6F0(Obj_0037E6F0 *arg0, s32 arg1)
{
    Entry_0037E6F0 *table = (Entry_0037E6F0 *)((u32)arg0 + arg0->unk_14);
    return table + arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037E310", func_0037E710);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037E310", func_0037E760);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037E310", func_0037EA30);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037E310", func_0037ED90);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037E310", func_0037F220);

void func_0037F4F0(void)
{
    s32 *count;

    if (D_005361A0[0] == 0)
        return;
    func_0037F220();
    func_0037ED90();
    count = &((s32 *)D_005361A0[0])[0x17C / 4];
    if (*count > 0) {
        *count = *count - 1;
    }
}
