#include "common.h"

s32 func_002B5380(s32 arg0, u16 *arg1, u16 *arg2, u16 *arg3, u16 *arg4)
{
    if (arg2 != 0) {
        *arg2 = arg1[0];
    }
    if (arg3 != 0) {
        *arg3 = arg1[1];
    }
    if (arg4 != 0) {
        *arg4 = arg1[2];
    }
    return arg0;
}
