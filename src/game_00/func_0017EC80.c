#include "common.h"

extern u32 D_0051AE48[];
extern u32 D_0051AE60[];

void func_0017EC80(void)
{
    u32 n;

    n = D_0051AE60[0] + 1;
    D_0051AE60[0] = n;
    if (n > D_0051AE48[0])
        D_0051AE48[0] = n;
}
