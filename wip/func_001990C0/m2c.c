void func_001990C0(void *arg0) {
    arg0->unk10 = (s32) (arg0->unk10 | 4);
    if (arg0->unk0 & 0x20) {
        arg0->unk10 = (s32) (arg0->unk10 | 0x80);
    }
}
