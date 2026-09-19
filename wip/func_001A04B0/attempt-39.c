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

void func_001A04B0(Obj *arg0)
{
    s32 temp_a1;
    s32 temp_v1_2;
    Obj *temp_a1_2;

    temp_a1 = arg0->unk1F4;
    if (temp_a1 & 0x20) {
        if (arg0->unk14B8 == -1) {
            arg0->unk1F4 = temp_a1 & ~0x120;
            return;
        }
        if ((temp_a1 & 8) && !(arg0->unk1E4 & 0x200)) {
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
        return;
    }
    if (temp_a1 & 0x40) {
        if (arg0->unk14BC == -1) {
            arg0->unk1F4 = temp_a1 & ~0x140;
            return;
        }
        if ((temp_a1 & 8) && !(arg0->unk1E4 & 0x200)) {
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
        return;
    }
    if (temp_a1 & 0x80) {
        temp_v1_2 = arg0->unk1E0;
        if (temp_v1_2 & 0x1000000) {
            arg0->unk1F4 = temp_a1 & ~0x80;
            return;
        }
        if (temp_v1_2 & 0x2000000) {
            arg0->unk1F4 = temp_a1 & ~0x80;
            return;
        }
    } else {
        temp_v1_2 = arg0->unk1E0;
        if (temp_v1_2 & 0x2100000) {
            temp_a1_2 = arg0->unk2518;
            if (temp_a1_2 != 0) {
                if (temp_a1_2->unk1E0 & 0x1000000) {
                    if (temp_a1_2->unk1F4 & 0x400) {
                        if (!(arg0->unk1EC & 0x200)) {
                            if ((arg0->unk14E0 & 0x30) == 0x30) {
                                if ((arg0->unk14CC & 0xC) && !(arg0->unk14CC & 3)) {
                                    arg0->unk1F4 = arg0->unk1F4 | 0x80;
                                    temp_a1_2->unk1F4 = temp_a1_2->unk1F4 | 0x80;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
