#include "common.h"
#include "game_00/vec.h"
#include "game_00/tbl_0051D890.h"

typedef struct Src {
    unsigned char unk_0[0x460];
    float unk_460;
    float unk_464;
    float unk_468;
} Src;

typedef struct Other {
    float unk_0;
    float unk_4;
} Other;

extern int D_005239C8[];

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A27D0", func_001A27D0);

int func_001A2930(void)
{
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A27D0", func_001A2940);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A27D0", func_001A2A50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A27D0", func_001A2BF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A27D0", func_001A2C70);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A27D0", func_001A2DD0);

int func_001A2E20(Src *s, Vec3 *dst, float *out, Other *o, int i, float w)
{
    dst[i].x = s->unk_460;
    dst[i].y = o->unk_4;
    dst[i].z = s->unk_468;
    out[i] = w;
    return i + 1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A27D0", func_001A2E60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A27D0", func_001A2EB0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A27D0", func_001A3050);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A27D0", func_001A31D0);

void func_001A3560(int i)
{
    Rec0051D890 *r = &D_0051D890[i];

    r[9].unk_14 = 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001A27D0", func_001A3580);

int func_001A35D0(int i, int v)
{
    Rec0051D890 *r = &D_0051D890[i];

    r[10].unk_0 = v;
    return 0;
}

int func_001A3600(int arg0)
{
    int limit;
    int base;
    int step;
    int diff;
    int n;

    switch (D_005239C8[0]) {
    case 0:
        limit = 0x7080;
        step = 0x3C;
        base = 15;
        break;
    case 1:
        limit = 0xE100;
        step = 0x78;
        base = 10;
        break;
    case 2:
        limit = 0x15180;
        step = 0xF0;
        base = 5;
        break;
    default:
        limit = 0;
        break;
    }

    if (arg0 >= limit)
        return 0;

    diff = limit - arg0;
    n = base + diff / step;
    return n * diff / 10 + 30000;
}
