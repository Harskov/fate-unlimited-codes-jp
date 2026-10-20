#include "common.h"

typedef struct Obj0021FC00 {
    u8 pad_0[0x14];
    /* 0x14 */ s32 unk_14;
    u8 pad_18[0x28];
    /* 0x40 */ s32 unk_40;
} Obj0021FC00;

extern void WaitSema(s32);

extern void SignalSema(s32);

extern void func_00220670(s32);

extern void DeleteSema(s32);

extern void DIntr(void);

extern void EIntr(void);

void func_0021FC00(Obj0021FC00 *obj)
{
    WaitSema(obj->unk_40);
    obj->unk_14 = (obj->unk_14 + 0x7FF) / 0x800 * 0x800;
    SignalSema(obj->unk_40);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021FC00", func_0021FC50);

int func_0021FCA0(Obj0021FC00 *obj)
{
    func_00220670(5);
    *(volatile s32 *)0x1000B420 = 0;
    *(volatile s32 *)0x1000B410 = 0;
    *(volatile s32 *)0x1000B430 = 0;
    DeleteSema(obj->unk_40);
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021FC00", func_0021FCF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021FC00", func_00220020);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021FC00", func_002200E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021FC00", func_002202F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021FC00", func_00220350);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021FC00", func_00220440);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021FC00", func_002205B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021FC00", func_00220640);

void func_00220670(s32 arg0)
{
    DIntr();
    *(s32 *)0x1000F590 = *(s32 *)0x1000F520 | 0x10000;
    *(s32 *)0x1000B400 = arg0;
    *(s32 *)0x1000F590 = *(s32 *)0x1000F520 & 0xFFFEFFFF;
    EIntr();
}

void func_002206D0(s32 arg0)
{
    DIntr();
    *(s32 *)0x1000F590 = *(s32 *)0x1000F520 | 0x10000;
    *(s32 *)0x1000B000 = arg0;
    *(s32 *)0x1000F590 = *(s32 *)0x1000F520 & 0xFFFEFFFF;
    EIntr();
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021FC00", func_00220730);
