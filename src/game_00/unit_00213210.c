#include "common.h"
#include "types.h"

#include "libc.h"

void func_00218E20(void);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00213210);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00213420);

void func_002134F0(f32 *v)
{
    v[0] += -0.5f;
    v[1] += -0.5f;
    v[2] += -0.5f;
    v[3] += -0.5f;
    v[4] += -0.5f;
    v[5] += -0.5f;
    v[6] += -0.5f;
    v[7] += -0.5f;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00213560);

void func_002135C0(void *dst, unsigned int n)
{
    memset(dst, 0, n);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_002135D0);

int func_002138B0(float x, float y)
{
    if (x > 4096.0f)
        return 0;
    if (x < -4096.0f)
        return 0;
    if (y > 4096.0f)
        return 0;
    if (y < -4096.0f)
        return 0;
    return 1;
}

int func_00213910(float *p)
{
    int i;

    for (i = 0; i < 4; i++, p += 2) {
        if (p[0] > 4096.0f)
            return 0;
        if (p[0] < -4096.0f)
            return 0;
        if (p[1] > 4096.0f)
            return 0;
        if (p[1] < -4096.0f)
            return 0;
    }
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_002139A0);

void func_00213C50(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00213C60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00213F40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00214180);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_002146B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_002147F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00215180);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00215950);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00215AF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00215C10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00215F80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00216400);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00216CE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00216E30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00216F50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_002171C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00217240);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00217560);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00217680);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00217920);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00217A70);

void func_00217DE0(void)
{
    func_00218E20();
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00217DF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00217F60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00213210", func_00218090);
