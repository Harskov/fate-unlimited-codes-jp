#include "game_00/tbl_0051C870.h"

int *func_0019D0B0(int i)
{
    if (i < 0)
        goto fail;
    if (i >= 10)
        goto fail;
    return D_0051C874[i].owner;
fail:
    return 0;
}
