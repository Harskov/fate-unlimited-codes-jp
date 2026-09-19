void func_001736B0(s32 *arg0) {
    if (*arg0 & 3) {
        M2C_ERROR(/* unknown instruction: sdr $zero, 0x1($zero) */);
        M2C_ERROR(/* unknown instruction: sdl $zero, 0x8($zero) */);
    }
}
