void func_0017A670(s8 arg0, s16 arg1) {
    s32 temp_v0;
    u32 temp_a0;

    temp_v0 = D_0051AC78;
    if (temp_v0 != 0) {
        D_0051AC78 = temp_v0->unk0;
        temp_v0->unk0 = 0;
        temp_v0->unkC4 = 1;
        temp_v0->unkC9 = 0;
        temp_v0->unkC8 = arg0;
        temp_v0->unk18 = 0;
        temp_v0->unk14 = 0;
        temp_v0->unk10 = 0;
        temp_v0->unk24 = 0;
        temp_v0->unk20 = 0;
        temp_v0->unk1C = 0;
        temp_v0->unk30 = 0x3F800000;
        temp_v0->unk2C = 0x3F800000;
        temp_v0->unk28 = 0x3F800000;
        temp_v0->unkC0 = 0;
        temp_v0->unkCA = 0;
        temp_v0->unk4 = 0;
        temp_v0->unkC6 = arg1;
        temp_a0 = D_0051AE58 + 1;
        D_0051AE58 = (s32) temp_a0;
        if ((u32) D_0051AE40 < temp_a0) {
            D_0051AE40 = (s32) temp_a0;
        }
    }
}
