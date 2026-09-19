typedef struct Obj {
    unsigned char pad0[0x1E0];
    int unk1E0;
    int unk1E4;
    int unk1EC;
    int unk1F4;
    unsigned char pad1F8[0x540 - 0x1F8];
    int unk540;
    unsigned char pad544[0x14B8 - 0x544];
    int unk14B8;
    int unk14BC;
    unsigned char pad14C0[0x14CC - 0x14C0];
    int unk14CC;
    unsigned char pad14D0[0x14E0 - 0x14D0];
    int unk14E0;
    unsigned char pad14E4[0x2518 - 0x14E4];
    struct Obj *unk2518;
} Obj;

int func_001A04B0(Obj *arg0)
{
    int a1 = arg0->unk1F4;

    if (a1 & 0x20) {
        int v1 = arg0->unk14B8;
        if (v1 == -1) {
            arg0->unk1F4 = a1 & ~0x120;
            return 0;
        }
        if ((a1 & 8) && !(arg0->unk1E4 & 0x200)) {
            arg0->unk1F4 = arg0->unk1F4 | 0x10;
        }
        arg0->unk1F4 = arg0->unk1F4 & 0xFFDFFFD5;
        arg0->unk1E4 = arg0->unk1E4 & -0xA0A;
        arg0->unk1E4 = arg0->unk1E4 | 2;
        if (!(arg0->unk1F4 & 0x100)) {
            arg0->unk1E4 = arg0->unk1E4 & -5;
        }
        arg0->unk1F4 = arg0->unk1F4 & ~0x100;
        arg0->unk540 = -1;
        return v1;
    }

    if (a1 & 0x40) {
        int v1 = arg0->unk14BC;
        if (v1 == -1) {
            arg0->unk1F4 = a1 & ~0x140;
            return 0;
        }
        if ((a1 & 8) && !(arg0->unk1E4 & 0x200)) {
            arg0->unk1F4 = arg0->unk1F4 | 0x10;
        }
        arg0->unk1F4 = arg0->unk1F4 & 0xFFDFFFB5;
        arg0->unk1E4 = arg0->unk1E4 & -0xA0A;
        arg0->unk1E4 = arg0->unk1E4 | 2;
        if (!(arg0->unk1F4 & 0x100)) {
            arg0->unk1E4 = arg0->unk1E4 & -5;
        }
        arg0->unk1F4 = arg0->unk1F4 & ~0x100;
        arg0->unk540 = -1;
        return v1;
    }

    if (a1 & 0x80) {
        int v1 = arg0->unk1E0;
        if (v1 & 0x01000000) {
            arg0->unk1F4 = a1 & ~0x80;
            return 0xE3;
        }
        if (v1 & 0x02000000) {
            arg0->unk1F4 = a1 & ~0x80;
            return 0xE4;
        }
    } else {
        int v1 = arg0->unk1E0;
        if (v1 & 0x02100000) {
            Obj *p = arg0->unk2518;
            if (p != 0 && (p->unk1E0 & 0x01000000) && (p->unk1F4 & 0x400)
                && !(arg0->unk1EC & 0x200) && ((arg0->unk14E0 & 0x30) == 0x30)) {
                int v2 = arg0->unk14CC;
                if ((v2 & 0xC) && !(v2 & 3)) {
                    arg0->unk1F4 = arg0->unk1F4 | 0x80;
                    p->unk1F4 = p->unk1F4 | 0x80;
                }
            }
        }
    }

    return -1;
}
