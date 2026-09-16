# Exemplars for func_001A3790 — the 3 matched functions nearest by address

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

## func_001A37D0 @ 0x001A37D0 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

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

void func_001A37D0(int i)
{
    ((Ent *)&D_0051D890[i])->unk_F4++;
}

```

## func_001A3800 @ 0x001A3800 (score 100.0, mwcps2-3.0.1b151-050317 -O4,p)

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

void func_001A3800(int i, int v)
{
    ((Ent *)&D_0051D890[i])->unk_E8 = v;
}

```
