#include "common.h"
#include "libc.h"

typedef struct Obj_005247CC {
    u8 pad_0[0x60];
    s32 unk_60;
    s32 unk_64;
} Obj_005247CC;

typedef struct Sub_00525150 {
    s32 unk_0;
    s32 unk_4;
    s32 unk_8;
    s32 unk_C;
} Sub_00525150;

extern Obj_005247CC *D_005247CC[];

extern Obj_005247CC *D_005247E0[];

extern Sub_00525150 D_00525150;

void func_0020A1B0();

void func_0020A210();

void func_002EA188();

int func_00212490(unsigned int id)
{
    if (id == 0xFFFF)
        return 0;
    if (id < 0x60)
        return 1;
    if (id < 0x34D)
        return 2;
    return 3;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00212490", func_002124C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00212490", func_002126A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00212490", func_00212740);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00212490", func_002129B0);

int func_00212B60(int *ids)
{
    int count = 0;

    while (*ids != 0xFFFF) {
        ids++;
        count++;
    }
    return count;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00212490", func_00212BA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00212490", func_00212BF0);

int func_00213080(unsigned int id)
{
    if (id >= 0x655)
        return -1;
    return id / 441;
}

int func_002130B0(unsigned int id)
{
    if (id == 0xFFFF)
        return 0;
    if (id < 0x60)
        return 1;
    if (id < 0x655)
        return 2;
    return 3;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00212490", func_002130E0);

void func_00213160(void)
{
}

void func_00213170(void)
{
    Sub_00525150 local;

    local.unk_8 = 0x280;
    local.unk_C = 0x1C0;
    local.unk_0 = 0;
    local.unk_4 = 0;
    memcpy(&D_00525150, &local, 0x10);
    func_0020A1B0(D_005247CC[0]);
    func_002EA188(D_005247CC[0]->unk_60, D_005247E0[0]->unk_60, &local);
    func_002EA188(D_005247CC[0]->unk_64, D_005247E0[0]->unk_64, &local);
    func_0020A210(D_005247CC[0]);
}
