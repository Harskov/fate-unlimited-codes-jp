typedef struct Ent {
    unsigned char unk_0[0x230];
    unsigned int unk_230;
} Ent;

int func_001A3A80(Ent *a0, int a1)
{
    return a0->unk_230 & (unsigned short)a1;
}
