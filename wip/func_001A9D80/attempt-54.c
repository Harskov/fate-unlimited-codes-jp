typedef struct Obj {
    unsigned char pad[0x1F4];
    unsigned int flags;
    unsigned char pad2[0x2F4];
    float unk_49C;
    unsigned char pad3[0x4C];
    float unk_4EC;
} Obj;

void func_001A9D80(Obj *p)
{
    float f = p->unk_4EC;
    p->unk_49C = f;
    p->flags &= 0xFFFFFFFB;
}
