void func_0017A9F0(void *arg0, void *arg1) {
    f32 temp_f7;
    f32 var_f0;
    void *temp_a2;

    temp_a2 = arg0->unkCC;
    if (temp_a2 == NULL) {
        arg1->unk0 = (f32) arg0->unk60;
        arg1->unk4 = (f32) arg0->unk64;
        var_f0 = arg0->unk68;
    } else {
        if (temp_a2->unkAC < 0.0f) {

        }
        temp_f7 = temp_a2->unkB0;
        if (!(temp_f7 < 0.0f)) {

        }
        if (temp_f7 < 0.0f) {

        }
        M2C_ERROR(/* unknown instruction: adda.s $f6, $f5 */);
        M2C_ERROR(/* unknown instruction: madd.s $f5, $f0, $f5 */);
        M2C_ERROR(/* unknown instruction: mula.s $f0, $f3 */);
        arg1->unk0 = (f32) (temp_a2->unk20 + M2C_ERROR(/* unknown instruction: madd.s $f0, $f9, $f1 */));
        M2C_ERROR(/* unknown instruction: mula.s $f8, $f2 */);
        M2C_ERROR(/* unknown instruction: madda.s $f3, $f2 */);
        M2C_ERROR(/* unknown instruction: mula.s $f3, $f0 */);
        M2C_ERROR(/* unknown instruction: msuba.s $f8, $f4 */);
        arg1->unk4 = (f32) (temp_a2->unk24 + M2C_ERROR(/* unknown instruction: madd.s $f2, $f1, $f6 */));
        var_f0 = temp_a2->unk28 + M2C_ERROR(/* unknown instruction: madd.s $f1, $f1, $f5 */);
    }
    arg1->unk8 = var_f0;
}
