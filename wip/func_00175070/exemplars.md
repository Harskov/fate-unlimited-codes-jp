# Exemplars for func_00175070 — the 3 matched functions nearest by address

## func_00175B10 @ 0x00175B10 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
int func_00175B10(float t)
{
    float v;
    int n;

    v = 60.0f * t;
    if (v > 0.0f)
        n = (int)(0.5f + v);
    else
        n = (int)(v - 0.5f);

    if (n < 0)
        n = 0;
    return n;
}

```

## func_00175B80 @ 0x00175B80 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
int *func_00175B80(int *base, int i)
{
    return &base[i * 2 + 1];
}

```

## func_00176140 @ 0x00176140 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
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

```
