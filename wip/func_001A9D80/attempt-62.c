typedef struct Obj {
    unsigned char pad[0x1F4];
    unsigned int flags;
    unsigned char pad2[0x2F4];
    float unk_4EC;
    unsigned char pad3[0x4EC - 0x4F0];
    float unk_49C;
} Obj;

void func_001A9D80(Obj *p)
{
    unsigned int v;
    float f;

    f = p->unk_4EC;
    v = p->flags;
    p->unk_49C = f;
    p->flags = v & ~4;
}
