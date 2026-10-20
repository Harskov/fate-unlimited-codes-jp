#include "common.h"

typedef struct Obj_003795A0 {
    u8 pad_0[0x238C];
    s32 unk_238C;
    u8 pad_2390[0x18];
    s32 unk_23A8;
} Obj_003795A0;

extern s16 D_005231C0[];

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_00377DF0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_00377F50);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_00378070);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_00378350);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_003784B0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_00378610);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_00378790);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_00378870);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_00378980);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_00378D90);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_00378DE0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_00378E60);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_00378ED0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_00378F40);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_00379100);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_00379150);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_00379310);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_00379510);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_00379550);

s32 func_003795A0(Obj_003795A0 *arg0)
{
    if (arg0 == 0)
        return 0;
    if (D_005231C0[0] == 0 && arg0->unk_238C == 0 && arg0->unk_23A8 == 0)
        return 0;
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_003795F0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_00379640);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_003796C0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_003797B0);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_00379810);

INCLUDE_ASM("asm/nonmatchings/game_model/unit_00377DF0", func_003798B0);
