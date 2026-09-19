typedef struct Sub {
    unsigned char pad[0x24];
    unsigned int unk24;
    unsigned char pad2[0xAC - 0x28];
    int unkAC;
    unsigned char pad3[0x118 - 0xB0];
    float unk118;
} Sub;

typedef struct Obj {
    unsigned char pad[0x1E0];
    unsigned int unk1E0;
    unsigned int unk1E4;
    unsigned char pad2[0xC10 - 0x1E8];
    Sub sub;
    unsigned char pad3[0x231C - 0xC10 - 0x11C];
    unsigned int unk231C;
    unsigned char pad4[0x250C - 0x2320];
    void *unk250C;
} Obj;

int func_0019F920(Obj *arg0)
{
    unsigned int v1 = arg0->unk231C;
    Sub *a2 = &arg0->sub;

    if (v1 & 0x100000)
        return 1;

    if (v1 & 0x4000) {
        unsigned int v3 = arg0->unk1E4;
        void *a1 = arg0->unk250C;
        if (!(v3 & 0x40))
            return 0;
        if (a1 == 0)
            return 0;
        if (!(*(unsigned int *)((char *)a1 + 0x1E0) & 0x18) && !(v3 & 4)) {
            if (!(a2->unk24 & 8))
                return 0;
            if (a2->unk118 < (float)a2->unkAC)
                return 0;
            arg0->unk1E4 = v3 | 0x400000;
            return 1;
        }
        if (!(a2->unk24 & 8))
            return 0;
        if (a2->unk118 < (float)a2->unkAC)
            return 0;
        arg0->unk1E4 = v3 | 0x400000;
        return 1;
    }

    if (a2->unk24 & 4)
        return 1;
    return 0;
}
