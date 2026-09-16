typedef struct Ent {
    unsigned char unk_0[0x230];
    unsigned int unk_230;
} Ent;

unsigned int func_001A3A80(Ent *arg0, unsigned short arg1)
{
    return arg0->unk_230 & arg1;
}
