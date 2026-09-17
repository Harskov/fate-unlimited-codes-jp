/* run 010: re-tried after prepare cut jtbl_004FEA50 into target.s */
#include "game_00/tbl_0051D890.h"

extern int D_00522E20[];
extern int D_00522E90[];
extern int D_005231C0[];
extern int D_00523900[];
extern int D_00523AF0[];
extern int D_00523D50[];
extern int D_00531B60[];

void func_00176140(int kind, void **out)
{
    switch (kind) {
    case 34:
        *out = D_00523D50;
        break;
    case 35:
        *out = D_00522E90;
        break;
    case 36:
        *out = D_00522E20;
        break;
    case 38:
        *out = D_00523900;
        break;
    case 39:
        *out = D_00523AF0;
        break;
    case 40:
        *out = D_005231C0;
        break;
    case 41:
        *out = D_0051D890;
        break;
    case 42:
        *out = D_00531B60;
        break;
    }
}
