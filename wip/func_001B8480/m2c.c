void func_001B8480(void *arg0, void *arg1, void *arg2, void *arg3, f32 fparg0) {
    M2C_ERROR(/* unknown instruction: mula.s $f1, $f0 */);
    if ((M2C_ERROR(/* unknown instruction: msub.s $f0, $f3, $f2 */) * fparg0) < 0.0f) {
        return;
    }
    if ((M2C_ERROR(/* unknown instruction: msub.s $f0, $f3, $f2 */) * fparg0) < M2C_ERROR(/* unknown instruction: adda.s $f6, $f0 */)) {
        return;
    }
    if (!((M2C_ERROR(/* unknown instruction: msub.s $f0, $f3, $f2 */) * fparg0) < M2C_ERROR(/* unknown instruction: adda.s $f6, $f0 */))) {

    }
}
