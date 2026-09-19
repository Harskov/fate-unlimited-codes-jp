typedef struct Obj {
    unsigned char pad0[0x1E0];
    int unk1E0;
    int unk1E4;
    int unk1EC;
    int unk1F4;
    unsigned char pad1F8[0x2E0];
    int unk4D8;
    unsigned char pad4DC[0x64];
    int unk540;
    unsigned char pad544[0xF74];
    int unk14B8;
    int unk14BC;
    int unk14CC;
    int unk14E0;
    unsigned char pad14E4[0x34];
    struct Obj *unk2518;
} Obj;

int func_001A04B0(Obj *arg0)
{
    int a1;
    int v1;
    Obj *p;
    int r;

    a1 = arg0->unk1F4;
    if (a1 & 0x20) {
        v1 = arg0->unk14B8;
        if (v1 == -1) {
            arg0->unk1F4 = a1 & ~0x120;
            return arg0->unk14B8;
        }
        if ((a1 & 8) && !(arg0->unk1E4 & 0x200)) {
            arg0->unk1F4 = arg0->unk1F4 | 0x10;
        }
        arg0->unk1F4 = arg0->unk1F4 & 0xFFDFFFD5;
        arg0->unk1E4 = arg0->unk1E4 & ~0xA0A;
        arg0->unk1E4 = arg0->unk1E4 | 2;
        if (!(arg0->unk1F4 & 0x100)) {
            arg0->unk1E4 = arg0->unk1E4 & ~4;
        }
        arg0->unk1F4 = arg0->unk1F4 & ~0x100;
        arg0->unk540 = -1;
        return arg0->unk14B8;
    }
    if (a1 & 0x40) {
        v1 = arg0->unk14BC;
        if (v1 == -1) {
            arg0->unk1F4 = a1 & ~0x140;
            return arg0->unk14BC;
        }
        if ((a1 & 8) && !(arg0->unk1E4 & 0x200)) {
            arg0->unk1F4 = arg0->unk1F4 | 0x10;
        }
        arg0->unk1F4 = arg0->unk1F4 & 0xFFDFFFB5;
        arg0->unk1E4 = arg0->unk1E4 & ~0xA0A;
        arg0->unk1E4 = arg0->unk1E4 | 2;
        if (!(arg0->unk1F4 & 0x100)) {
            arg0->unk1E4 = arg0->unk1E4 & ~4;
        }
        arg0->unk1F4 = arg0->unk1F4 & ~0x100;
        arg0->unk540 = -1;
        return arg0->unk14BC;
    }
    if (a1 & 0x80) {
        v1 = arg0->unk1E0;
        if (v1 & 0x1000000) {
            arg0->unk1F4 = a1 & ~0x80;
            r = 0xE3;
            return r;
        }
        if (v1 & 0x2000000) {
            arg0->unk1F4 = a1 & ~0x80;
            r = 0xE4;
            return r;
        }
    } else {
        v1 = arg0->unk1E0;
        if (v1 & 0x2100000) {
            p = arg0->unk2518;
            if (p != 0 && (p->unk1E0 & 0x1000000) && (p->unk1F4 & 0x400)
                && !(arg0->unk1EC & 0x200) && ((arg0->unk14E0 & 0x30) == 0x30)) {
                v1 = arg0->unk14CC;
                if ((v1 & 0xC) && !(v1 & 3)) {
                    arg0->unk1F4 = arg0->unk1F4 | 0x80;
                    p->unk1F4 = p->unk1F4 | 0x80;
                }
            }
        }
    }
    return -1;
}
