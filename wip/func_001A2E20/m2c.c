void func_001A2E20(void *arg0, s32 arg1, s32 arg2, void *arg3, f32 fparg0) {
    void *temp_a1;

    temp_a1 = arg1 + (((M2C_ERROR(/* Read from unset register $t0 */) * 2) + M2C_ERROR(/* Read from unset register $t0 */)) * 4);
    temp_a1->unk0 = (f32) arg0->unk460;
    temp_a1->unk4 = (f32) arg3->unk4;
    temp_a1->unk8 = (f32) arg0->unk468;
    *(arg2 + (M2C_ERROR(/* Read from unset register $t0 */) * 4)) = fparg0;
}
