# Exemplars for func_0019AEA0 — the 3 matched functions nearest by address

## func_0019AA30 @ 0x0019AA30 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Obj0019AA30 {
    unsigned char unk_0[0x4];
    int unk_4;
    unsigned char unk_8[0xA0];
    float unk_A8;
    float unk_AC;
    float unk_B0;
} Obj0019AA30;

void func_0019AA30(Obj0019AA30 *o)
{
    o->unk_4 |= 4;
    o->unk_4 &= ~8;
    o->unk_A8 = 0.0f;
    o->unk_AC = 0.0f;
    o->unk_B0 = 4.5f;
}

```

## func_0019A9A0 @ 0x0019A9A0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
#include "game_00/tbl_0051D890.h"

typedef struct Obj0019A9A0 {
    int unk_0;
    unsigned char unk_4[0x4];
    int unk_8;
    unsigned char unk_C[0xAC];
    int unk_B8;
    unsigned char unk_BC[0x24];
    int unk_E0;
    unsigned char unk_E4[0x24];
    int unk_108;
} Obj0019A9A0;

int func_0019A9A0(Obj0019A9A0 *o)
{
    int r;
    int mode;

    r = 0;
    mode = o->unk_8;
    if (mode == 2) {
        if (o->unk_B8 != 0)
            r |= 1;
        if (o->unk_E0 != 0)
            r |= 1;
        if (o->unk_108 != 0)
            r |= 1;
    }
    if (mode == 11 && (o->unk_0 & 0x4000) == 0)
        r |= 1;
    if (*(int *)&D_0051D890[0] & 0x02000000)
        r |= 1;
    return r;
}

```

## func_00199CF0 @ 0x00199CF0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Obj {
    unsigned char unk_0[0x13C];
    int unk_13C;
    unsigned char unk_140[0x28];
    int unk_168;
} Obj;

void func_00199CF0(Obj *o)
{
    o->unk_168 = 0;
    o->unk_13C = 0;
}

```
