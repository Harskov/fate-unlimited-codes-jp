void func_001A04B0(void *arg0) {
    s32 temp_a1;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v1;
    void *temp_a1_2;

    temp_a1 = arg0->unk1F4;
    if (temp_a1 & 0x20) {
        if (arg0->unk14B8 == -1) {
            var_v1 = temp_a1 & ~0x120;
            goto block_49;
        }
        if ((temp_a1 & 8) && !(arg0->unk1E4 & 0x200)) {
            arg0->unk1F4 = (s32) (arg0->unk1F4 | 0x10);
        }
        arg0->unk1F4 = (s32) (arg0->unk1F4 & 0xFFDFFFD5);
        arg0->unk1E4 = (s32) (arg0->unk1E4 & ~0xA09);
        arg0->unk1E4 = (s32) (arg0->unk1E4 | 2);
        if (!(arg0->unk1F4 & 0x100)) {
            arg0->unk1E4 = (s32) (arg0->unk1E4 & ~4);
        }
        arg0->unk1F4 = (s32) (arg0->unk1F4 & ~0x100);
        arg0->unk540 = -1;
        return;
    }
    if (temp_a1 & 0x40) {
        if (arg0->unk14BC == -1) {
            var_v1 = arg0->unk1F4 & ~0x140;
            goto block_49;
        }
        if ((temp_a1 & 8) && !(arg0->unk1E4 & 0x200)) {
            arg0->unk1F4 = (s32) (arg0->unk1F4 | 0x10);
        }
        arg0->unk1F4 = (s32) (arg0->unk1F4 & 0xFFDFFFB5);
        arg0->unk1E4 = (s32) (arg0->unk1E4 & ~0xA09);
        arg0->unk1E4 = (s32) (arg0->unk1E4 | 2);
        if (!(arg0->unk1F4 & 0x100)) {
            arg0->unk1E4 = (s32) (arg0->unk1E4 & ~4);
        }
        arg0->unk1F4 = (s32) (arg0->unk1F4 & ~0x100);
        arg0->unk540 = -1;
        return;
    }
    if (!(temp_a1 & 0x80)) {
        if (arg0->unk1E0 & 0x02100000) {
            temp_a1_2 = arg0->unk2518;
            if ((temp_a1_2 != NULL) && (temp_a1_2->unk1E0 & 0x01000000) && (temp_a1_2->unk1F4 & 0x400) && !(arg0->unk1EC & 0x200) && ((arg0->unk14E0 & 0x30) == 0x30)) {
                temp_v1 = arg0->unk14CC;
                if ((temp_v1 & 0xC) && !(temp_v1 & 3)) {
                    arg0->unk1F4 = (s32) (arg0->unk1F4 | 0x80);
                    temp_a1_2->unk1F4 = (s32) (temp_a1_2->unk1F4 | 0x80);
                }
            }
        }
    } else {
        temp_v1_2 = arg0->unk1E0;
        if (temp_v1_2 & 0x01000000) {
            var_v1 = arg0->unk1F4 & ~0x80;
            goto block_49;
        }
        if (temp_v1_2 & 0x02000000) {
            var_v1 = arg0->unk1F4 & ~0x80;
block_49:
            arg0->unk1F4 = var_v1;
        }
    }
}
