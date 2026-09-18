#include "game_00/tbl_0051C870.h"

void func_0019D6E0(int *p)
{
    int i;

    for (i = 0; i < 10; i++) {
        if (D_0051C870[i].used == 0) {
            D_0051C870[i].used = 1;
            D_0051C874[i].owner = p;
            *p = i;
            break;
        }
    }
}
