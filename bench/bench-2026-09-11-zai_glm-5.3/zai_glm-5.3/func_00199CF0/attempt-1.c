typedef struct Obj {
    unsigned char pad[0x13C];
    int unk_13C;
    unsigned char pad2[0x168 - 0x140];
    int unk_168;
} Obj;

void func_00199CF0(Obj *arg0)
{
    arg0->unk_168 = 0;
    arg0->unk_13C = 0;
}
