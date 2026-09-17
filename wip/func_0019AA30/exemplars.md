# Exemplars for func_0019AA30 — the 3 matched functions nearest by address

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

## func_001990C0 @ 0x001990C0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
/* calibration candidate func_001990C0: flag bits */
typedef struct Flags { int f0; unsigned char pad[0xC]; int f10; } Flags;

void func_001990C0(Flags *f)
{
    f->f10 |= 4;
    if (f->f0 & 0x20)
        f->f10 |= 0x80;
}

```
