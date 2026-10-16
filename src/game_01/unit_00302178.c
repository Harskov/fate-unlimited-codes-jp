#include "common.h"

extern s32 D_0050904C;

s32 func_00302178(s32 arg0)
{
    D_0050904C = arg0;
    return 1;
}

s32 func_00302188(void)
{
    return D_0050904C;
}
