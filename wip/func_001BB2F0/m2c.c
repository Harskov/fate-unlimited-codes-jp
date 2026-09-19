void func_001BB2F0(void *arg0, s32 arg1) {
    void *temp_v1;

    if ((arg0 != NULL) && (arg0->unkC == 0xB) && (temp_v1 = arg0 + 0x2524, (temp_v1 != NULL))) {
        switch (arg1) {                             /* irregular */
        case 0x38:
            if (temp_v1->unkC == 0) {
                return;
            }
            break;
        case 0x37:
            if (temp_v1->unk8 == 0) {
                return;
            }
            break;
        case 0x36:
            if (temp_v1->unk4 == 0) {
                return;
            }
            break;
        }
    }
}
