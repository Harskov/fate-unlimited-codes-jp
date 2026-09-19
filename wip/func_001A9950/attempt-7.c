typedef struct Obj {
    unsigned char pad0[0x1E0];
    unsigned int unk1E0;
    unsigned int unk1E4;
    unsigned char pad1E8[0x1F0 - 0x1E8];
    unsigned int unk1F0;
    unsigned char pad1F4[0x498 - 0x1F4];
    float unk498;
} Obj;

typedef struct Obj2 {
    unsigned char pad0[0x24];
    unsigned int unk24;
} Obj2;

int func_001A9950(Obj *a0, Obj *a1, Obj2 *a2, unsigned int a3)
{
    unsigned int f = a2->unk24;
    int r;

    if (f & 0x800)
        return 0;
    if (a0->unk1F0 & 0x40000)
        return 0;
    if (f & 0x400)
        return 1;
    r = 0;
    if (a0->unk1E0 & 0x18) {
        if ((a1->unk1E0 & 0x18) || (a1->unk1E4 & 4)) {
            if ((a3 & 0x18000) || !(a0->unk498 <= -0.099999994f))
                r = 1;
        }
    }
    return r;
}
