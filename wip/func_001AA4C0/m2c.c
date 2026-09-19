void func_001AA4C0(void *arg0) {
    s32 temp_a1;

    temp_a1 = arg0->unk4;
    if (temp_a1 & 1) {
        arg0->unk4 = (s32) (temp_a1 | 2);
    }
}
