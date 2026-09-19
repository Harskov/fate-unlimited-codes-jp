void func_001AE9F0(void *arg0, s32 arg1) {
    s32 temp_v0;

    if (arg1 != 0) {
        temp_v0 = arg0->unk18;
        if (temp_v0 < 8) {
            ((temp_v0 * 4) + arg0)->unk1C = arg1;
            if (arg0->unk18 == 0) {
                arg0->unk3C = arg1;
            }
            arg0->unk18 = (s32) (arg0->unk18 + 1);
        }
    }
}
