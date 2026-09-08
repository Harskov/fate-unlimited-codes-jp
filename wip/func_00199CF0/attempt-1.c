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
