typedef struct Obj {
    unsigned char pad[0x1E8];
    unsigned int unk1E8;
    unsigned int unk1EC;
    unsigned int unk1F0;
} Obj;

void func_0019DA00(Obj *arg0)
{
    if ((arg0->unk1EC & 0x02000000) || (arg0->unk1E8 & 0x200000)) {
        arg0->unk1F0 |= 0x20;
    }
}
