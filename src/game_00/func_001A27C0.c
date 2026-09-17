typedef struct Inner001A27C0 {
    unsigned char unk_0[0x5C];
    int unk_5C;
} Inner001A27C0;

typedef struct Outer001A27C0 {
    unsigned char unk_0[0xC];
    Inner001A27C0 *unk_C;
} Outer001A27C0;

int func_001A27C0(Outer001A27C0 *o, int n)
{
    return o->unk_C->unk_5C + n;
}
