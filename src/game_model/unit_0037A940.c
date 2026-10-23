#include "common.h"
#include "libc.h"

typedef struct Obj_0037AF70 {
    u8 pad_0[0x1E0];
    /* 0x1E0 */ s32 flags_1E0;
    /* 0x1E4 */ s32 flags_1E4;
    u8 pad_1E8[0x18];
    s32 unk_200;
    u8 pad_204[0x35C];
    s32 unk_560;
    s32 unk_564;
    u8 pad_568[0x58];
} Obj_0037AF70;

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A940", func_0037A940);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A940", func_0037A9D0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A940", func_0037AAF0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A940", func_0037AC20);

s32 func_0037AF70(Obj_0037AF70 *arg0, s32 *arg1)
{
    s32 flags = arg0->flags_1E4;
    s32 i;

    if ((flags & 0x80) || (arg0->flags_1E0 & 0x1000000) || (*arg1 & 0x40)) {
        if (!(flags & 0x400000)) {
            memset(&arg0->unk_560, -1, 0x60);
            return *arg1 & 1;
        }
        if (arg0->unk_564 != 0x96) {
            return *arg1 & 1;
        }
        for (i = 0; i < 0x18; i++) {
            if (arg1[i + 5] != 0 && arg0->unk_200 == arg1[i + 5]) {
                func_0037C170(arg1);
                break;
            }
        }
    }
    return *arg1 & 1;
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A940", func_0037B060);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A940", func_0037B180);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A940", func_0037B250);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A940", func_0037B2C0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A940", func_0037B370);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A940", func_0037B410);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A940", func_0037B4A0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A940", func_0037B500);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A940", func_0037B6F0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A940", func_0037B740);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A940", func_0037B7A0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A940", func_0037B800);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A940", func_0037B990);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_0037A940", func_0037B9E0);
