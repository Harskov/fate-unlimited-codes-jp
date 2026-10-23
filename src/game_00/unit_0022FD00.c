#include "common.h"
#include "types.h"
#include "game_00/unit_001FE660.h"

typedef struct Obj_00235380 {
    unsigned char pad[0xC8];
    s32 unk_C8;
} Obj_00235380;

typedef struct Obj001FF000 {
    u8 unk_0[0x38];
    s32 unk_38;
} Obj001FF000;

void func_00175F60();

void func_002235A0();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022FD00", func_0022FD00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022FD00", func_0022FDC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022FD00", func_0022FE80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022FD00", func_0022FEE0);

// the fifth argument chooses the callee; the first four are handed on unchanged
void func_0022FF80(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
    if (arg4 != 0) {
        func_00175F60(arg0, arg1, arg2, arg3);
    } else {
        func_002235A0(arg0, arg1, arg2, arg3);
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022FD00", func_0022FFB0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022FD00", func_00230060);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022FD00", func_00230150);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022FD00", func_00230240);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022FD00", func_00230340);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022FD00", func_002303C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022FD00", func_00230510);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022FD00", func_002306E0);

int *func_00232AF0(int *base, int i, int flag)
{
    int *p = &base[i];
    if (i == 21)
    {
        if (flag != 0)
        {
            p = base + 27;
        }
    }
    else if (i == 19)
    {
        if (flag != 0)
        {
            p = base + 28;
        }
    }
    return p;
}

int *func_00232B40(int *base, int i, int flag)
{
    int *p = &base[i];
    if (i == 21)
    {
        if (flag != 0)
        {
            p = base + 27;
        }
    }
    else if (i == 19)
    {
        if (flag != 0)
        {
            p = base + 28;
        }
    }
    return p;
}

int *func_00232B90(int *base, int i, int flag)
{
    int *p = &base[i];
    if (i == 21)
    {
        if (flag != 0)
        {
            p = base + 27;
        }
    }
    else if (i == 19)
    {
        if (flag != 0)
        {
            p = base + 28;
        }
    }
    return p;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022FD00", func_00232BE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022FD00", func_00232E20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022FD00", func_002333B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022FD00", func_002335A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022FD00", func_00233CE0);

void func_00235380(Obj_00235380 *p, s32 arg1)
{
    p->unk_C8 = arg1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022FD00", func_00235390);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022FD00", func_002367E0);

s32 func_00236810(void *arg0, s32 arg1)
{
    Obj001FF000 *obj = func_001FF000(arg0, arg1 | 0x20);
    if (obj != 0)
    {
        return obj->unk_38;
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022FD00", func_00236840);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022FD00", func_00236E80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022FD00", func_00237030);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022FD00", func_00238F10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022FD00", func_00239060);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022FD00", func_00239150);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022FD00", func_002394D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022FD00", func_00239590);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022FD00", func_00239D10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022FD00", func_00239F40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0022FD00", func_0023A2C0);
