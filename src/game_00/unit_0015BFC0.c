#include "common.h"

extern s32 D_0051A630[];

#include "libc.h"

extern s32 D_0051A580[];

extern s32 D_0051A590[];

extern s32 D_00528A00[];

void func_0015BF70();

void func_0015C5F0();

void func_0015CB70();

void func_0015E900();

void func_0015C360();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015BFC0", func_0015BFC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015BFC0", func_0015C020);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015BFC0", func_0015C160);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015BFC0", func_0015C220);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015BFC0", func_0015C250);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015BFC0", func_0015C2E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015BFC0", func_0015C360);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015BFC0", func_0015C450);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015BFC0", func_0015C4A0);

void func_0015C580(void)
{
    s32 i;

    for (i = 0; i < 8; i++) {
        if (D_0051A630[i * 0x13] == 1)
            func_0015C360(D_0051A630[i * 0x13 + 1]);
    }
}

void func_0015C5F0(void)
{
    memset(D_0051A630, 0, 0x260);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015BFC0", func_0015C610);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015BFC0", func_0015CB70);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015BFC0", func_0015CF10);

// one-time setup: guard on the init flag, then clear the two state blocks
void func_0015CF80(void)
{
    if (D_0051A580[0] == 0) {
        D_0051A580[0] = 1;
        func_0015CB70();
        memset(D_00528A00, 0, 0x120);
        func_0015E900(0x500, 0xC8, 0xC8);
        func_0015C5F0();
        func_0015BF70();
        memset(D_0051A590, -1, 0x28);
    }
}
