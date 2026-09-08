void func_001A49A0(void *arg0, s16 arg1) {
    void *temp_a2;

    temp_a2 = arg0 + 0x220;
    if (arg1 < arg0->unk228) {
        temp_a2->unkA = arg1;
        temp_a2->unkC = (s32) (temp_a2->unk4 + (arg1 * 0x1C));
    }
}
