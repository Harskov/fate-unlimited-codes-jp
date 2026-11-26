#include "common.h"
#include "libc.h"

extern f32 D_0051FA00[];

extern f32 D_0051FA04[];

extern s32 D_0051FA08[];

extern f32 D_0051F9D4[];

extern f32 D_0051F9E0[];

extern s32 D_0051F9EC[];

void func_001EC730(s32, f32, f32, f32, f32, s32, s32);

typedef struct Elem_001EC070 {
    s32 unk_0;
    s32 unk_4;
    s32 unk_8;
    u8 unk_C[0x54];
} Elem_001EC070;

typedef struct Obj_001EC070 {
    /* 0x00 */ s32 count;
    u8 unk_4[0x18];
    Elem_001EC070 *unk_1C;
} Obj_001EC070;

extern s32 D_0051F9D0[];

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001EC010", func_001EC010);

void func_001EC070(Obj_001EC070 *arg0, s32 arg1, s32 arg2)
{
    s32 i;

    for (i = 0; i < arg0->count; i++) {
        if (arg1 == arg0->unk_1C[i].unk_8) {
            arg0->unk_1C[i].unk_4 |= arg2;
            break;
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001EC010", func_001EC0D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001EC010", func_001EC130);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001EC010", func_001EC290);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001EC010", func_001EC320);

void func_001EC6A0(s32 arg0)
{
    func_001EC730(arg0, D_0051F9D4[0], D_0051FA00[0], D_0051F9E0[0], D_0051FA04[0], D_0051F9EC[0], D_0051FA08[0]);
}

void func_001EC6E0(s32 arg0, f32 arg1, f32 arg2, s32 arg3)
{
    func_001EC730(arg0, arg1, D_0051FA00[0], arg2, D_0051FA04[0], arg3, D_0051FA08[0]);
}

void func_001EC700(s32 arg0, s32 arg1, f32 arg2, f32 arg3)
{
    func_001EC730(arg0, D_0051F9D4[0], arg2, D_0051F9E0[0], arg3, D_0051F9EC[0], arg1);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001EC010", func_001EC730);

void func_001EC7F0(s32 arg0, f32 arg1, f32 arg2)
{
    D_0051FA00[0] = arg1;
    D_0051FA04[0] = arg2;
    D_0051FA08[0] = arg0;
}

void func_001EC810(void)
{
    memset(D_0051F9D0, 0, 0x3C);
    func_001EC7F0(-1, 0.0f, 400.0f);
    func_001EC6A0(0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001EC010", func_001EC860);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001EC010", func_001ECFA0);
