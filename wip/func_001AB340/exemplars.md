# Exemplars for func_001AB340 — the 3 matched functions nearest by address

## func_001AB330 @ 0x001AB330 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Obj {
    unsigned char pad[0x3C];
    void *field_3C;
} Obj;

void func_001F27D0();

void func_001AB330(Obj *p)
{
    func_001F27D0(p->field_3C);
}

```

## func_001AB2B0 @ 0x001AB2B0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
#include "game_00/tbl_0051C858.h"

typedef struct Obj {
    unsigned char unk_0[0x23FC];
    int unk_23FC;
} Obj;

typedef struct Cfg {
    unsigned char unk_0[0xB4];
    int unk_B4;
} Cfg;

extern Cfg *D_0051D8B4[];

void func_001AB2B0(Obj *obj)
{
    Cfg *cfg;
    Node0051C858 *n;
    int v;
    int i;

    cfg = D_0051D8B4[0];
    if (cfg == 0)
        return;

    v = cfg->unk_B4;
    if (obj != 0) {
        obj->unk_23FC = v;
    } else {
        for (i = 0; i < 2; i++) {
            for (n = D_0051C858[i]->list; n != 0; n = n->next) {
                ((Obj *)n->obj)->unk_23FC = v;
            }
        }
    }
}

```

## func_001AB770 @ 0x001AB770 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Sub {
    unsigned char pad[0x10];
    int field_10;
} Sub;

typedef struct Obj {
    unsigned char pad[0x2448];
    Sub *field_2448;
    unsigned char pad2[0x2508 - 0x2448 - 4];
    int field_2508;
} Obj;

void func_001AB770(Obj *p, int v)
{
    if (p != 0) {
        p->field_2508 = v;
        if (p->field_2448 != 0) {
            p->field_2448->field_10 = v;
        }
    }
}

```
