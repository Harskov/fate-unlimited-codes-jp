#include "game_00/tbl_00528A00.h"

int func_001766A0(int id, int side)
{
    int i;
    int ret = 0;

    for (i = 0; i < 12; i++) {
        if (D_00528A00[i].used[side] == 1 && D_00528A00[i].id[side] == id) {
            D_00528A00[i].used[side] = 0;
            D_00528A10[i].v[side] = 0;
            D_00528A08[i].v[side] = 0;
            ret = 1;
            break;
        }
    }
    return ret;
}
