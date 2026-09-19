typedef struct Obj {
    unsigned char unk_0[0x1F4];
    int flags;
    unsigned char unk_1F8[0x49C - 0x1F8];
    float unk_49C;
    unsigned char unk_4A0[0x4EC - 0x4A0];
    float unk_4EC;
} Obj;

void func_001A9D80(Obj *o)
{
    o->unk_49C = o->unk_4EC;
    o->flags = o->flags & ~4;
}
