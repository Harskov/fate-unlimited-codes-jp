#include "game_00/tbl_00528A00.h"

int func_00176740(int id, int side)
{
    int i;

    for (i = 0; i < 12; i++) {
        if (D_00528A00[i].used[side] == 1 && D_00528A00[i].id[side] == id) {
            return D_00528A08[i].v[side];
        }
    }
    return 0;
}
