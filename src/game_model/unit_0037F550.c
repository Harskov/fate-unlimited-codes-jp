#include "common.h"
#include "types.h"
#include "libc.h"

extern s32 D_005361A0[];

extern s32 D_00522DB0[];

s32 func_0020F180();

void func_0037F980();

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037F550", func_0037F550);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037F550", func_0037F670);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037F550", func_0037F760);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037F550", func_0037F7A0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037F550", func_0037F830);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037F550", func_0037F880);

s32 func_0037F970(void)
{
    return D_005361A0[0];
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037F550", func_0037F980);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037F550", func_0037FA80);

s32 func_0037FAC0(s32 arg0)
{
    if (D_005361A0[0] != 0) {
        return D_005361A0[0];
    }
    D_005361A0[0] = func_0020F180(D_00522DB0, 0x1AC);
    memset((void *)D_005361A0[0], 0, 0x1AC);
    ((s32 *)D_005361A0[0])[1] = arg0;
    func_0037F980();
    return D_005361A0[0];
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037F550", func_0037FB40);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037F550", func_0037FC40);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037F550", func_0037FF00);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037F550", func_003804E0);
