#include "common.h"

typedef struct Obj {
    unsigned char pad[0x78];
    void *unk_78;
} Obj;

void func_001F4FD0();

void func_002D1048();

typedef struct Obj_001FE140 {
    u8 pad_0[0x1490];
    s32 unk_1490[0x40];
    u8 pad_1590[0x80];
    s32 *unk_1610;
    s32 *unk_1614;
} Obj_001FE140;

extern s32 D_003D7890[];

extern s32 D_003D7990[];

typedef struct Obj_001FE0C0 {
    u8 pad_0[0x60];
    void *unk_60;
    void *unk_64;
    void *unk_68;
    u8 pad_6C[0x10];
    void *unk_7C;
} Obj_001FE0C0;

extern s32 D_00522DB0[];

void func_002D0E70();

void func_0020F230();

typedef struct Sub_001FD200 {
    u8 pad_0[0x10];
    s32 unk_10;
} Sub_001FD200;

typedef struct Entry_001FD200 {
    u8 pad_0[0xC];
    Sub_001FD200 *unk_C;
} Entry_001FD200;

typedef struct Link_001FD200 {
    u8 pad_0[0x10];
    Entry_001FD200 *unk_10;
} Link_001FD200;

typedef struct Holder_001FD200 {
    u8 pad_0[0x50];
    Link_001FD200 *unk_50;
} Holder_001FD200;

typedef struct Obj_001FD200 {
    u8 pad_0[0x78];
    Holder_001FD200 *unk_78;
    u8 pad_7C[0x1514];
    u8 unk_1590[0x40];
    u8 unk_15D0[0x10];
} Obj_001FD200;

s32 func_001619C0();

void func_0020CFD0();

void func_002E6C50();

void func_001A2DD0();

typedef struct Obj_001FE2C0 {
    u8 pad_0[0x1648];
    f32 unk_1648[2];
    s32 unk_1650[2];
    f32 unk_1658[2];
} Obj_001FE2C0;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FB440", func_001FB440);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FB440", func_001FB630);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FB440", func_001FBA30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FB440", func_001FC930);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FB440", func_001FCDB0);

void func_001FD200(Obj_001FD200 *arg0)
{
    s32 i;
    Entry_001FD200 *tbl;

    i = func_001619C0(arg0->unk_78, 0);
    if (i < 0) {
        return;
    }
    tbl = arg0->unk_78->unk_50->unk_10;
    func_0020CFD0(&tbl[i].unk_C->unk_10, arg0->unk_15D0, arg0->unk_1590);
    func_002E6C50(tbl->unk_C);
    func_001A2DD0(arg0->unk_78, 0);
}

s32 func_001FD280(void)
{
    func_002D1048();
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FB440", func_001FD2A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FB440", func_001FD300);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FB440", func_001FD480);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FB440", func_001FD500);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FB440", func_001FDA00);

void func_001FDA40(Obj *p)
{
    func_001F4FD0(p->unk_78);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FB440", func_001FDA50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FB440", func_001FDAE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FB440", func_001FDDD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FB440", func_001FDEB0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FB440", func_001FDF60);

void func_001FE0C0(Obj_001FE0C0 *arg0)
{
    if (arg0->unk_60 != 0) {
        func_002D0E70(arg0->unk_60);
    }
    if (arg0->unk_64 != 0) {
        func_002D0E70(arg0->unk_64);
    }
    if (arg0->unk_68 != 0) {
        func_002D0E70(arg0->unk_68);
    }
    if (arg0->unk_7C != 0) {
        func_0020F230(D_00522DB0, arg0->unk_7C);
    }
}

void func_001FE140(Obj_001FE140 *arg0, s32 arg1)
{
    s32 i;

    for (i = 0; i < 0x40; i++) {
        arg0->unk_1490[i] = 0;
    }
    arg0->unk_1490[0] = 0x04000160;
    arg0->unk_1490[1] = 0x04000160;
    arg0->unk_1490[2] = 0x04000160;
    arg0->unk_1490[3] = 0x04000130;
    arg0->unk_1490[4] = 0x04000130;
    arg0->unk_1490[5] = 0x04000130;
    arg0->unk_1490[6] = 0x04000130;
    arg0->unk_1490[7] = 0x04000130;
    arg0->unk_1490[8] = 0x04400130;
    arg0->unk_1490[9] = 0x04200130;
    arg0->unk_1490[10] = 0x04000130;
    arg0->unk_1490[11] = 0x04000130;
    arg0->unk_1490[12] = 0x04400130;
    arg0->unk_1490[13] = 0x04200130;
    arg0->unk_1490[14] = 0x04000130;
    arg0->unk_1490[15] = 0x04000130;
    arg0->unk_1490[19] = 0x04000130;
    arg0->unk_1490[20] = 0x04000130;
    arg0->unk_1490[21] = 0x04000130;
    arg0->unk_1490[16] = 0x04000130;
    arg0->unk_1490[17] = 0x04000130;
    arg0->unk_1490[18] = 0x04000130;
    if (arg1 == 0) {
        arg0->unk_1610 = D_003D7890;
        arg0->unk_1614 = D_003D7990;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FB440", func_001FE220);

void func_001FE2C0(Obj_001FE2C0 *arg0, s32 arg1, f32 arg2)
{
    arg0->unk_1648[arg1] = arg2;
    arg0->unk_1650[arg1] = 0;
    arg0->unk_1658[arg1] = arg2 / 3.0f;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FB440", func_001FE2F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001FB440", func_001FE570);
