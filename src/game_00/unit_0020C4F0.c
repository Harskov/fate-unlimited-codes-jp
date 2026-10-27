#include "common.h"
#include "game_00/unit_0020C4F0.h"

void func_002DC8B8(f32 (*arg0)[4]);

void func_002DC008(void);

void func_002DBC08(void);

typedef struct Obj64 {
    s32 unk_0[16];
} Obj64;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020C4F0", func_0020C4F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020C4F0", func_0020C5C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020C4F0", func_0020C680);

void func_0020C740(void)
{
    func_002DBC08();
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020C4F0", func_0020C750);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020C4F0", func_0020C7B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020C4F0", func_0020CC60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020C4F0", func_0020CDB0);

void *func_0020CE80(Obj_0020CE80 *o)
{
    return &o->unk_30;
}

Vec4 *func_0020CE90(Obj_0020CE80 *o)
{
    return &o->unk_20;
}

void *func_0020CEA0(Obj_0020CE80 *o)
{
    return &o->unk_10;
}

void *func_0020CEB0(void *arg0)
{
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020C4F0", func_0020CEC0);

void func_0020CF00(s32 arg0, s32 arg1, s32 arg2)
{
    switch (arg1) {
    case 0:
        func_0015D130(arg0, arg2);
        break;
    case 1:
        func_0015D130(arg0, arg2 + 0x10);
        break;
    case 2:
        func_0015D130(arg0, arg2 + 0x20);
        break;
    case 3:
        func_0015D130(arg0, arg2 + 0x30);
        break;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020C4F0", func_0020CF80);

void func_0020CFC0(void)
{
    func_002DC008();
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020C4F0", func_0020CFD0);

void func_0020D040(Obj64 *arg0, Obj64 *arg1)
{
    *arg0 = *arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020C4F0", func_0020D070);

void func_0020D0C0(f32 (*arg0)[4])
{
    func_002DC8B8(arg0);
}
