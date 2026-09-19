void func_001B13C0(void *arg0) {
    s32 temp_a1;

    temp_a1 = arg0->unk1E0;
    if (temp_a1 & 0x05008000) {
        return;
    }
    if (arg0->unk1EC & 0xC00000) {
        return;
    }
    if (arg0->unk24B8 <= 0) {
        if (arg0->unk1E4 & 0xA00) {
            return;
        }
        if ((temp_a1 & 0x02120000) && (arg0->unk53C != 0x38)) {

        }
    }
}
