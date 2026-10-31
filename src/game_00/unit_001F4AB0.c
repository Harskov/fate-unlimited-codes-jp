#include "common.h"
#include "game_00/unit_001FE660.h"

extern s32 D_00501678[];

extern s32 D_0051FA30[];

extern s32 D_00522DB0[];

void func_001F59E0();

void func_0020F230();

typedef struct Obj_001F5500 {
    u8 unk_0[0x60];
    void *unk_60;
    u8 unk_64[0x13C];
    void *unk_1A0;
} Obj_001F5500;

extern s16 D_0051FAC0[];

void func_00179380();

extern s32 D_0051FAC4[];

void func_001795F0();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F4AB0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F4B00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F4B50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F4BE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F4C80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F4E20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F4FA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F4FD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F50B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F5150);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F51B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F5280);

void func_001F5300(void)
{
    void *p;

    while (1) {
        p = (void *)func_001F5980(0);
        if (p == 0)
            break;
        func_001F5340(p);
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F5340);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F5490);

void func_001F5500(Obj_001F5500 *arg0)
{
    void *p;

    p = arg0->unk_60;
    if (p != 0) {
        func_0020F230(D_00522DB0, p);
    }
    p = arg0->unk_1A0;
    if (p != 0) {
        func_0020F230(D_00522DB0, p);
    }
    func_001F59E0(arg0);
    func_0020F230(D_00522DB0, arg0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F5570);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F58F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F5980);

void func_001F59E0(s32 arg0)
{
    D_0051FAC0[0]--;
    func_00179380(arg0 + 4);
}

void func_001F5A00(s32 arg0)
{
    D_0051FAC0[0]++;
    func_001795F0(arg0, arg0 + 4, D_0051FAC4);
}

void func_001F5A30(void)
{
    D_0051FA30[0] = (s32)func_001FF000(D_00501678, 0x04000040);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F5A60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F5AA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001F4AB0", func_001F5AD0);
