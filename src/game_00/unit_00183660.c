#include "common.h"
#include "types.h"

extern u32 D_0051AE68[];

extern u32 D_0051AE50[];

extern s32 D_0051C0D0[];

#include "libc.h"

void func_00183B50();

void func_00183C40();

typedef struct Obj36 {
    u8 unk_0[36];
} Obj36;

extern Obj36 D_0051AED0[];

typedef struct Obj_00183660 {
    u8 unk_0[0xC8];
    s32 unk_C8;
} Obj_00183660;

extern s32 D_0051AD68[];

void func_00179380();

void func_001795F0();

void func_00185030();

extern s32 D_0051C0DC[];

void func_00178060();

s32 func_002E6CC0();

void func_0020D070();

typedef struct Obj12 {
    s32 unk_0;
    s32 unk_4;
    s32 unk_8;
} Obj12;

extern Obj12 D_0051AD88[];

void func_00183660(Obj_00183660 *arg0)
{
    void func_001836B0(void);

    func_00185030(arg0->unk_C8);
    func_00179380(arg0);
    func_001795F0(arg0, arg0, D_0051AD68);
    func_001836B0();
}

void func_001836B0(void)
{
    D_0051AE68[0]--;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00183660", func_001836D0);

void func_00183780(void)
{
    u32 n;

    n = D_0051AE68[0] + 1;
    D_0051AE68[0] = n;
    if (n > D_0051AE50[0])
        D_0051AE50[0] = n;
}

s32 func_001837C0(s32 arg0)
{
    return D_0051AD88[arg0].unk_0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00183660", func_001837E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00183660", func_00183870);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00183660", func_00183990);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00183660", func_00183A20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00183660", func_00183B50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00183660", func_00183C40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00183660", func_00183FA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00183660", func_00184030);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00183660", func_001840B0);

void func_00184180(void)
{
}

void func_00184190(void)
{
    func_001837E0();
    func_00185480();
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00183660", func_001841C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00183660", func_00184550);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00183660", func_00184700);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00183660", func_00184740);

int func_001847A0(int *arg0)
{
    return *arg0 > 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00183660", func_001847B0);

void func_00184800(s32 arg0, s32 arg1)
{
    if (arg1 >= 0x80)
        return;
    func_00183C40(arg1, arg0);
    func_00183B50(arg1, arg0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00183660", func_00184850);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00183660", func_00184940);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00183660", func_00184A90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00183660", func_00185030);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00183660", func_001850A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00183660", func_001850F0);

void func_00185190(void *arg0)
{
    memset(arg0, 0, 36);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00183660", func_001851A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00183660", func_00185210);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00183660", func_001852C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00183660", func_001853A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00183660", func_00185480);

s32 *func_00185560(void)
{
    return D_0051C0D0;
}

void func_00185570(void)
{
    s32 v;
    s32 i;

    func_00178060(D_0051C0D0);
    v = func_002E6CC0();
    D_0051C0DC[0] = v;
    func_0020D070(v + 0x10);
    for (i = 0; i < 0x80; i++) {
        func_00185190(&D_0051AED0[i]);
    }
}

Obj36 *func_001855E0(s32 arg0)
{
    return &D_0051AED0[arg0];
}
