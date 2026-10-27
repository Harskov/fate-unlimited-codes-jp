#include "common.h"

typedef struct Obj {
    u8 pad[0x64];
    f32 unk_64;
} Obj;

extern void func_0019ADE0(Obj *, f32, s32);

typedef struct Obj_00218220 {
    u8 unk_0[0x334];
    void *unk_334;
} Obj_00218220;

extern s32 D_00524798[];

extern s32 D_005247A0[];

extern void func_00218550(s32);

void func_00218220(void)
{
    Obj_00218220 *o;

    o = (Obj_00218220 *)D_005247A0[0];
    if (o != 0) {
        if (o->unk_334 != 0) {
            if (D_00524798[0] != 0) {
                func_00218550(D_00524798[0]);
            }
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00218220", func_00218270);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00218220", func_002183D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00218220", func_00218550);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00218220", func_002185F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00218220", func_002186C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00218220", func_00218790);

void func_00218860(Obj *arg0)
{
    func_0019ADE0(arg0, arg0->unk_64, 3);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00218220", func_00218870);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00218220", func_00218CA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00218220", func_00218D20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00218220", func_00218E20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00218220", func_00218EC0);
