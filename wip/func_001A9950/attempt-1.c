typedef struct Obj {
    unsigned char pad0[0x1E0];
    unsigned int unk_1E0;
    unsigned int unk_1E4;
    unsigned char pad1[0x1F0 - 0x1E8];
    unsigned int unk_1F0;
    unsigned char pad2[0x498 - 0x1F4];
    float unk_498;
} Obj;

typedef struct Arg2 {
    unsigned char pad[0x24];
    unsigned int unk_24;
} Arg2;

int func_001A9950(Obj *a0, Obj *a1, Arg2 *a2, unsigned int a3)
{
    unsigned int f = a2->unk_24;

    if (f & 0x800)
        return 0;
    if (a0->unk_1F0 & 0x40000)
        return 0;
    if (f & 0x400)
        return 1;
    if (!(a0->unk_1E0 & 0x18))
        return 0;
    if (!(a1->unk_1E0 & 0x18) && !(a1->unk_1E4 & 4))
        return 0;
    if (a3 & 0x18000)
        return 1;
    if (a0->unk_498 <= -0.099999994f)
        return 0;
    return 1;
}
