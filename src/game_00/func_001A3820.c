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

void func_001A3820(int i)
{
    ((Ent *)&D_0051D890[i])->unk_E8 = 0;
}
