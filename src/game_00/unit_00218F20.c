#include "common.h"
#include "types.h"
#include "game_00/unit_0021A0D0.h"

extern s32 D_005247A0[];

extern Unk_0021A860 D_00525160[];

extern s32 D_00525164[];

void func_00200BB0(s32 arg0, s32 arg1, s32 arg2);


typedef struct Sub_00219050 {
    u8 pad_0[0x88];
    f32 unk_88;
} Sub_00219050;

typedef struct Obj_00219050 {
    u8 pad_0[0x334];
    Sub_00219050 *unk_334;
} Obj_00219050;

extern s32 D_00522DB0[];

extern s32 D_00524800[];

extern s32 D_00524804[];

s32 func_0020F180(s32 *arg0, s32 arg1);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00218F20", func_00218F20);

void func_00218F60(s32 arg0)
{
    D_00524800[0] = func_0020F180(D_00522DB0, (arg0 * 0x180 + 0xF) & ~0xF);
    D_00524804[0] = arg0 * 6;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00218F20", func_00218FC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00218F20", func_00219020);

void func_00219050(f32 arg0)
{
    Obj_00219050 *o;
    Sub_00219050 *s;

    o = (Obj_00219050 *)D_005247A0[0];
    if (o != 0) {
        s = o->unk_334;
        if (s != 0) {
            s->unk_88 = arg0;
        }
    }
}

void func_00219080(void)
{
    D_005247A0[0] = 0;
}

s32 func_00219090(void)
{
    return D_005247A0[0];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00218F20", func_002190A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00218F20", func_002190F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00218F20", func_002191F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00218F20", func_00219330);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00218F20", func_00219980);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00218F20", func_00219CF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00218F20", func_00219D20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00218F20", func_00219D80);

void func_0021A060(void)
{
}

void func_0021A070(s32 arg0)
{
    s32 *entry;

    entry = &D_00525164[arg0 * 2];
    if (*entry == 0)
        return;
    func_00200BB0(*entry, 0x400, -1);
    func_0021A860(&D_00525160[arg0]);
}
