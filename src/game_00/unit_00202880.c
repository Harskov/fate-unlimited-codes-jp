#include "common.h"

extern f32 D_003D7AC0[];

extern s32 func_00203F50();

void func_002EA0B0();

void func_00310208();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00202880);

void func_00202A80(s32 arg0)
{
    func_00310208(arg0, 0);
    func_002EA0B0(arg0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00202AB0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00202B00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00202C80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00202D30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00202D80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00202E10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00202E90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00202F30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00203010);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00203230);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_002032B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00203460);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00203520);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00203630);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_002036C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00203870);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_002038E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00203980);

void func_00203A30(f32 fparg0)
{
    D_003D7AC0[0] = fparg0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00203A40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00203AB0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00203B00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00203BD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00203C20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00203DB0);

s32 func_00203DE0(s32 arg0, s32 *arg1)
{
    if (func_00203F50(arg0, 0) != 0) {
        *arg1 = arg0;
        return 0;
    }
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00203E30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00203EA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00203F50);
