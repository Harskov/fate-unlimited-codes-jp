void func_00173550(void *arg0, void *arg1) {
    f32 temp_f1;
    f32 temp_f1_2;

    temp_f1 = M2C_ERROR(/* unknown instruction: mula.s $f1, $f1 */);
    M2C_ERROR(/* unknown instruction: madd.s $f0, $f0, $f0 */);
    M2C_ERROR(/* unknown instruction: c1 0x44 */);
    if (temp_f1 != 0.0f) {
        temp_f1_2 = 1.0f / temp_f1;
        arg0->unk0 = (f32) (M2C_ERROR(/* unknown instruction: madda.s $f3, $f3 */) * temp_f1_2);
        arg0->unk4 = (f32) (arg1->unk4 * temp_f1_2);
        arg0->unk8 = (f32) (arg1->unk8 * temp_f1_2);
        arg0->unkC = 0.0f;
    }
}
