#include "common.h"

extern s32 D_00522DD0[];

void func_0020F180();

int DisableIntc(int intc);

s32 RemoveIntcHandler(s32 cause, s32 handler_id);

extern s32 gHandlerId[];

void func_002E5AC8();

void func_002E5E40();

extern s32 D_00522D6C[];

extern s32 D_00522D70[];

extern s32 D_00522D74[];

extern s32 D_00522D78[];

void func_0020A590();

void func_0020A5F0();

void func_0020A610();

void func_0020A640();

void *func_0020EF40();

void func_0020F230();

float sqrtf(float x);

typedef struct Obj_0020AD60 {
    /* 0x00 */ s32 *unk_0;
    /* 0x04 */ s32 unk_4;
    /* 0x08 */ s32 unk_8;
    /* 0x0C */ s32 unk_C;
    /* 0x10 */ s32 unk_10;
} Obj_0020AD60;

extern s32 D_003E16C0[];

extern s32 D_003E1748[];

extern s32 D_004B4440[];

extern s32 D_004B44C8[];

extern s32 D_004B44F0[];

extern s32 D_004B4590[];

extern s32 D_004B4630[];

extern s32 D_004B46B8[];

extern s32 D_004B46E0[];

extern s32 D_004B4780[];

void func_0026B3F8(Obj_0020AD60 *arg0);

// fills the four handler slots with the timer-0 callbacks and returns the first slot's address
s32 *func_0020A540(void)
{
    D_00522D6C[0] = (s32)func_0020A640;
    D_00522D70[0] = (s32)func_0020A610;
    D_00522D74[0] = (s32)func_0020A5F0;
    D_00522D78[0] = (s32)func_0020A590;
    return D_00522D6C;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020A540", func_0020A590);

void func_0020A5F0(s32 arg0, s32 arg1)
{
    func_0020EF40(D_00522DD0, arg0, arg1);
}

void func_0020A610(s32 arg0)
{
    if (arg0 == 0) {
        return;
    }
    func_0020F230(D_00522DD0, arg0);
}

void func_0020A640(s32 arg0)
{
    func_0020F180(D_00522DD0, arg0);
}

// takes down the handler on INTC cause 9 (timer 0); gHandlerId holds the id AddIntcHandler returned
void func_0020A650(void)
{
    DisableIntc(9);
    RemoveIntcHandler(9, gHandlerId[0]);
    func_002E5AC8();
    func_002E5E40();
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020A540", func_0020A690);

// hands func_0026B3F8 ten stack records in turn, each a data table, a 0x500xx id and a count of 1 or 2
void func_0020AD60(void)
{
    Obj_0020AD60 obj0;
    Obj_0020AD60 obj1;
    Obj_0020AD60 obj2;
    Obj_0020AD60 obj3;
    Obj_0020AD60 obj4;
    Obj_0020AD60 obj5;
    Obj_0020AD60 obj6;
    Obj_0020AD60 obj7;
    Obj_0020AD60 obj8;
    Obj_0020AD60 obj9;

    obj0.unk_0 = D_004B4440;
    obj0.unk_4 = 0;
    obj0.unk_10 = 0;
    obj0.unk_8 = 0x50019;
    obj0.unk_C = 1;
    func_0026B3F8(&obj0);

    obj1.unk_0 = D_004B44C8;
    obj1.unk_4 = 0;
    obj1.unk_10 = 0;
    obj1.unk_8 = 0x5001F;
    obj1.unk_C = 2;
    func_0026B3F8(&obj1);

    obj2.unk_0 = D_004B4590;
    obj2.unk_4 = 0;
    obj2.unk_10 = 0;
    obj2.unk_8 = 0x5001B;
    obj2.unk_C = 1;
    func_0026B3F8(&obj2);

    obj3.unk_0 = D_004B44F0;
    obj3.unk_4 = 0;
    obj3.unk_10 = 0;
    obj3.unk_8 = 0x5001A;
    obj3.unk_C = 1;
    func_0026B3F8(&obj3);

    obj4.unk_0 = D_004B4630;
    obj4.unk_4 = 0;
    obj4.unk_10 = 0;
    obj4.unk_8 = 0x5001C;
    obj4.unk_C = 1;
    func_0026B3F8(&obj4);

    obj5.unk_0 = D_004B46B8;
    obj5.unk_4 = 0;
    obj5.unk_10 = 0;
    obj5.unk_8 = 0x50020;
    obj5.unk_C = 2;
    func_0026B3F8(&obj5);

    obj6.unk_0 = D_004B4780;
    obj6.unk_4 = 0;
    obj6.unk_10 = 0;
    obj6.unk_8 = 0x5001E;
    obj6.unk_C = 1;
    func_0026B3F8(&obj6);

    obj7.unk_0 = D_004B46E0;
    obj7.unk_4 = 0;
    obj7.unk_10 = 0;
    obj7.unk_8 = 0x5001D;
    obj7.unk_C = 1;
    func_0026B3F8(&obj7);

    obj8.unk_0 = D_003E1748;
    obj8.unk_4 = 0;
    obj8.unk_10 = 0;
    obj8.unk_8 = 0x5004B;
    obj8.unk_C = 2;
    func_0026B3F8(&obj8);

    obj9.unk_0 = D_003E16C0;
    obj9.unk_4 = 0;
    obj9.unk_10 = 0;
    obj9.unk_8 = 0x5004C;
    obj9.unk_C = 1;
    func_0026B3F8(&obj9);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020A540", func_0020AF60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020A540", func_0020B280);

void func_0020B5A0(void)
{
}

void func_0020B5B0(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020A540", func_0020B5C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020A540", func_0020B6F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020A540", func_0020B8E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020A540", func_0020BB40);

// scales the four floats at arg1 by the inverse of their length into arg0 (a quaternion normalise, probably: w at +0xC is written first)
void func_0020BC10(f32 *arg0, f32 *arg1)
{
    f32 len;

    len = sqrtf(arg1[3] * arg1[3] + arg1[0] * arg1[0] + arg1[1] * arg1[1] + arg1[2] * arg1[2]);
    arg0[3] = arg1[3] / len;
    arg0[0] = arg1[0] / len;
    arg0[1] = arg1[1] / len;
    arg0[2] = arg1[2] / len;
}
