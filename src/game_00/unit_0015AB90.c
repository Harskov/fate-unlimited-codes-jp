#include "common.h"
#include "eekernel.h"
#include "types.h"
#include "game_00/unit_0015AB90.h"

typedef struct Rec0051A424 {
    /* 0x00 */ s32 flags;
    u8 unk_04[0x34];
} Rec0051A424;

extern Rec0051A424 D_0051A424[];

s32 func_00144570(s32);

void func_00143EA8();

void func_00144F88();

void func_00145938();

void func_00145DC0();

void func_00145C50();

s32 func_0013B9C8();

typedef struct Obj_0051A440 {
    f32 unk_00;
    u8 unk_04[0x34];
} Obj_0051A440;

extern Rec0051A424 D_0051A420[];

extern Rec0051A424 D_0051A434[];

extern Obj_0051A440 D_0051A440[];

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015AB90", func_0015AB90);

s32 func_0015ACE0(s32 arg0, s32 arg1)
{
    s32 result;
    s32 i;
    s32 state;

    result = 0;
    if (arg1 != 0) {
        i = 0;
        for (;;) {
            state = func_0013B9C8(arg0);
            switch (state) {
            case 4:
            case 2:
                result = 0;
                break;
            case 1:
                i++;
                result = 0;
                break;
            case 3:
                result = 1;
                break;
            }
            if (result == 1 || i > 3000)
                break;
            DelayThread(1666);
        }
    } else {
        state = func_0013B9C8(arg0);
        switch (state) {
        case 4:
        case 1:
        case 2:
            result = 0;
            break;
        case 3:
            result = 1;
            break;
        }
    }
    return result;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015AB90", func_0015AE00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015AB90", func_0015AF20);

void func_0015AF90(s32 i, s32 arg1)
{
    func_00144F88(D_0051A424[i].flags, arg1);
}

void func_0015AFB0(s32 i)
{
    func_00145938(D_0051A424[i].flags);
}

s32 func_0015AFD0(s32 i)
{
    return func_00144570(D_0051A424[i].flags) * 60 / 100;
}

void func_0015B030(s32 i)
{
    func_00143EA8(D_0051A424[i].flags);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015AB90", func_0015B050);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015AB90", func_0015B0F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015AB90", func_0015B1B0);

s32 func_0015B240(s32 i)
{
    if (!(D_0051A420[i].flags & 4)) {
        return 0;
    }
    if (D_0051A434[i].flags != 0) {
        if (D_0051A440[i].unk_00 < 0.0001f) {
            return 1;
        }
    }
    return 0;
}

void func_0015B2C0(s32 i)
{
    func_00145DC0(D_0051A424[i].flags);
}

void func_0015B2E0(s32 i)
{
    func_00145C50(D_0051A424[i].flags, 0);
}

void func_0015B310(s32 i)
{
    func_00145C50(D_0051A424[i].flags, 1);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015AB90", func_0015B340);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0015AB90", func_0015B3E0);
