# Exemplars for func_001A2E20 — the 3 matched functions nearest by address

## func_001A3560 @ 0x001A3560 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
#include "game_00/tbl_0051D890.h"

void func_001A3560(int i)
{
    ((Ent0051D890 *)&D_0051D890[i])->unk_EC = 0;
}

```

## func_001A35D0 @ 0x001A35D0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
#include "game_00/tbl_0051D890.h"

int func_001A35D0(int i, int v)
{
    ((Ent0051D890 *)&D_0051D890[i])->unk_F0 = v;
    return 0;
}

```

## func_001A3600 @ 0x001A3600 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
extern int D_005239C8[];

int func_001A3600(int arg0)
{
    int limit;
    int base;
    int step;
    int diff;
    int n;

    switch (D_005239C8[0]) {
    case 0:
        limit = 0x7080;
        step = 0x3C;
        base = 15;
        break;
    case 1:
        limit = 0xE100;
        step = 0x78;
        base = 10;
        break;
    case 2:
        limit = 0x15180;
        step = 0xF0;
        base = 5;
        break;
    default:
        limit = 0;
        break;
    }

    if (arg0 >= limit)
        return 0;

    diff = limit - arg0;
    n = base + diff / step;
    return n * diff / 10 + 30000;
}

```
