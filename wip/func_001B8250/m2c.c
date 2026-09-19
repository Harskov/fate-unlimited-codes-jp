void func_001B8250(void *arg0, void *arg1, void *arg2, void *arg3) {
    M2C_ERROR(/* unknown instruction: mula.s $f1, $f0 */);
    if (M2C_ERROR(/* unknown instruction: msub.s $f0, $f3, $f2 */) < 0.0f) {
        return;
    }
    if (!(M2C_ERROR(/* unknown instruction: msub.s $f0, $f3, $f2 */) < M2C_ERROR(/* unknown instruction: adda.s $f6, $f0 */))) {
        if (!(M2C_ERROR(/* unknown instruction: msub.s $f0, $f3, $f2 */) < M2C_ERROR(/* unknown instruction: adda.s $f6, $f0 */))) {

        }
    }
}
