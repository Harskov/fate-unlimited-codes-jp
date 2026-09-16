# Exemplars for func_001A3730 — the 3 matched functions nearest by address

## func_001A3750 @ 0x001A3750 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
extern int D_00531C58[];

int func_001A3750(int arg0)
{
    int r;

    r = (D_00531C58[0] * 99 - arg0) * 500;
    if (r < 0)
        r = 0;
    return r;
}

```

## func_001A3790 @ 0x001A3790 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Rec {
    unsigned char unk_0[0x18];
} Rec;

typedef struct Ent {
    unsigned char unk_0[0xE8];
    int unk_E8;
    int unk_EC;
    int unk_F0;
    int unk_F4;
} Ent;

extern Rec D_0051D890[];

void func_001A3790(int i)
{
    ((Ent *)&D_0051D890[i])->unk_F4 = 0;
}

```

## func_001A37B0 @ 0x001A37B0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

```c
typedef struct Rec {
    unsigned char unk_0[0x18];
} Rec;

typedef struct Ent {
    unsigned char unk_0[0xE8];
    int unk_E8;
    int unk_EC;
    int unk_F0;
    int unk_F4;
} Ent;

extern Rec D_0051D890[];

void func_001A37B0(int i, int v)
{
    ((Ent *)&D_0051D890[i])->unk_F4 = v;
}

```
