#include "common.h"
#include "types.h"

extern s32 D_00527A08[];

typedef struct Obj_002240B0 {
    u8 unk_0[0x5C];
    s32 unk_5C;
} Obj_002240B0;

typedef struct Obj_00225720 {
    u8 unk_0[0xC];
    Obj_002240B0 *unk_C;
} Obj_00225720;

typedef struct Slot_00229520 {
    u8 pad_0[4];
    s32 unk_4;
    u32 unk_8;
    u8 pad_C[0x24];
    s32 unk_30;
    u8 pad_34[0x24];
    s32 unk_58;
    s32 unk_5C;
} Slot_00229520;

typedef struct Ctx_00229520 {
    u8 pad_0[6];
    u16 unk_6;
    u16 unk_8;
    Slot_00229520 *unk_C;
    u8 pad_10[4];
    void *unk_14;
    u8 pad_18[4];
    s32 unk_1C;
} Ctx_00229520;

typedef struct Obj_002240B0_2 {
    u8 pad_0[0x4C];
    s32 unk_4C;
    u8 pad_50[4];
    s32 unk_54;
    s32 unk_58;
} Obj_002240B0_2;

extern char D_005024C0[];

extern s32 D_00524788[];

int sprintf(char *buf, const char *fmt, ...);

void *memset(void *s, int c, unsigned int n);

void func_00223240();

u32 *func_002235A0();

void func_00223840();

void func_00223850();

void func_00223860();

extern s32 D_00527A00[];

extern s32 D_00527A04[];

void func_002240C0(void);

typedef struct Obj_002256E0 {
    u8 unk_0[0x5C];
    s32 *unk_5C;
} Obj_002256E0;

s32 func_002240B0(void)
{
    return D_00527A08[0];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_002240C0);

void func_002240F0(void)
{
    D_00527A00[0] = 0;
    D_00527A04[0] = 0;
    func_002240C0();
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00224110);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_002246D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00224730);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00224920);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00224E10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00224E50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00224E90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_002256E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00225700);

s32 func_00225720(Obj_00225720 *arg0, s32 arg1)
{
    return arg1 - arg0->unk_C->unk_5C;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00225730);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00225E80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_002267A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00227080);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00227AD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00227CD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00228510);

int *func_00229500(int *base, int i)
{
    return &base[i * 2 + 1];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", sys_bp);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002240B0", func_00229800);
