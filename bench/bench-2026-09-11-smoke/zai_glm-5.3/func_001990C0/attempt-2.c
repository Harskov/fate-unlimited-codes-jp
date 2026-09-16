typedef unsigned int u32;

typedef struct {
    u32 unk0;
    u32 pad4;
    u32 unk8;
    u32 unkC;
    u32 unk10;
} Struct;

void func_001990C0(Struct *arg0)
{
    arg0->unk10 |= 4;
    if (arg0->unk0 & 0x20) {
        arg0->unk10 |= 0x80;
    }
}
