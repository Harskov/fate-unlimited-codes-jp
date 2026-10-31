#include "common.h"

extern s32 D_004FFD80[][3][3];

extern s32 D_0051EDD0[];

extern s32 D_0051ED20[];

typedef struct Obj_0051D8B0 {
    u8 pad_0[0x24];
    s32 unk_24;
} Obj_0051D8B0;

extern s32 D_00500AA0[][8];

extern s32 D_00500BA0[];

extern s32 D_00500BC0[];

extern Obj_0051D8B0 D_0051D8B0;

extern s32 D_005239E4[];

extern s32 D_0051ECC8[];

extern s32 D_0051ECD0[];

s32 func_0020E850(s32 arg0, s32 arg1);

s32 func_001D4E60(s32 arg0, s32 arg1, s32 arg2);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CE990", func_001CE990);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CE990", func_001CEA80);

s32 func_001CEFA0(s32 arg0, s32 arg1)
{
    return D_004FFD80[arg0][arg1][2];
}

s32 func_001CEFD0(s32 arg0, s32 arg1)
{
    return D_004FFD80[arg0][arg1][1];
}

s32 func_001CF000(s32 arg0, s32 arg1)
{
    return D_004FFD80[arg0][arg1][0];
}

s32 func_001CF030(s32 arg0, s32 arg1)
{
    Obj_0051D8B0 *obj = &D_0051D8B0;
    s32 result = 0;

    switch (arg0) {
    case 0:
    case 8:
    case 10:
        result = 0;
        break;
    case 1:
        result = 8;
        break;
    case 2:
    case 9:
        result = D_00500AA0[D_005239E4[0]][arg1];
        break;
    case 3:
    case 4:
    case 5:
        result = D_00500BA0[D_005239E4[0]];
        break;
    case 7:
        if (obj->unk_24 < 2) {
            result = D_00500BC0[arg1 + obj->unk_24 * 16];
        } else {
            result = 0x10;
        }
        break;
    case 6:
        result = D_00500BA0[arg1];
        break;
    }
    result <<= 4;
    if (result > 0xFF) {
        result = 0xFF;
    }
    return result;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CE990", func_001CF130);

s32 func_001CF220(s32 arg0, s32 arg1)
{
    s32 result = 0;

    switch (arg0) {
    case 1:
    case 7:
    case 2:
    case 9:
        result = D_0051ED20[arg1];
        break;
    }
    return result;
}

s32 func_001CF280(s32 arg0, s32 arg1)
{
    s32 result = 0;

    switch (arg0) {
    case 1:
    case 2:
    case 7:
    case 9:
        result = D_0051EDD0[arg1];
        break;
    }
    return result;
}

void func_001CF2E0(void)
{
    s32 count;
    s32 total;
    s32 value;
    s32 found;
    s32 j;

    memset(D_0051ECD0, 0, 0x50);
    D_0051ECC8[0] = 0;
    total = func_0020E850(8, 9);
    for (count = 0; count < total; count++) {
        for (;;) {
            found = 0;
            value = func_0020E850(1, 0x14);
            if (!func_001D4E60(0, value, 0) || value == 0 || value == 0xF || value == 0xE) {
                continue;
            }
            for (j = 0; j < count; j++) {
                if (value == D_0051ECD0[j]) {
                    found = 1;
                }
            }
            if (found != 0) {
                continue;
            }
            break;
        }
        D_0051ECD0[count] = value;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CE990", func_001CF410);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CE990", func_001CF5A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CE990", func_001CFE70);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CE990", func_001D04A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001CE990", func_001D4E60);

void func_001D5FD0(void)
{
}
