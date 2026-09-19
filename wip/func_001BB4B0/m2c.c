void func_001BB4B0(void *arg0, s32 arg1) {
    void *temp_v1;

    if ((arg0 != NULL) && (arg0->unkC == 6) && (temp_v1 = arg0 + 0x2524, (temp_v1 != NULL))) {
        switch (arg1) {                             /* irregular */
        case 0x3E:
            if (temp_v1->unkC == 0) {
                return;
            }
            break;
        case 0x3D:
            if (temp_v1->unk8 == 0) {
                return;
            }
            break;
        case 0x3C:
            if (temp_v1->unk4 == 0) {
                return;
            }
            break;
        case 0x3B:
            if (arg0->unk2524 == 0) {
                return;
            }
            break;
        }
    }
}
