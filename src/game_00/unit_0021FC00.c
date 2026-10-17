#include "common.h"

typedef struct Obj0021FC00 {
    u8 pad_0[0x14];
    /* 0x14 */ s32 unk_14;
    u8 pad_18[0x28];
    /* 0x40 */ s32 unk_40;
} Obj0021FC00;

extern void WaitSema(s32);

extern void SignalSema(s32);

void func_0021FC00(Obj0021FC00 *obj)
{
    WaitSema(obj->unk_40);
    obj->unk_14 = (obj->unk_14 + 0x7FF) / 0x800 * 0x800;
    SignalSema(obj->unk_40);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021FC00", func_0021FC50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021FC00", func_0021FCA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021FC00", func_0021FCF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021FC00", func_00220020);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021FC00", func_002200E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021FC00", func_002202F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021FC00", func_00220350);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021FC00", func_00220440);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021FC00", func_002205B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021FC00", func_00220640);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021FC00", func_00220670);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021FC00", func_002206D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021FC00", func_00220730);
