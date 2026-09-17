# Exemplars for func_00176140 — the 3 matched functions nearest by address

## func_001766A0 @ 0x001766A0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
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

```

## func_00176740 @ 0x00176740 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
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

```

## func_00176BC0 @ 0x00176BC0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
int func_00176BC0(int *table, int i, int v)
{
    table[i] = v;
    return table[i];
}

```
