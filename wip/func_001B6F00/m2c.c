void func_001B6F00(void *arg0, void *arg1, void *arg2, void *arg3) {
    if ((arg0 != NULL) && (arg1 != NULL) && (arg2 != NULL) && (arg3 != NULL)) {
        M2C_ERROR(/* unknown instruction: mula.s $f1, $f0 */);
        arg0->unk0 = (f32) M2C_ERROR(/* unknown instruction: msub.s $f0, $f3, $f2 */);
        M2C_ERROR(/* unknown instruction: mula.s $f1, $f0 */);
        arg0->unk4 = (f32) M2C_ERROR(/* unknown instruction: msub.s $f0, $f3, $f2 */);
        M2C_ERROR(/* unknown instruction: mula.s $f1, $f0 */);
        arg0->unk8 = (f32) M2C_ERROR(/* unknown instruction: msub.s $f0, $f3, $f2 */);
    }
}
