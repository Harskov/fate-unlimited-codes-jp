typedef unsigned char u8;
typedef float f32;

void func_0017A290(u8 *arg0, f32 *arg1)
{
    f32 f;
    int v;

    f = arg1[0];
    if (f >= 2147483648.0f) {
        v = (int)(f - 2147483648.0f) | 0x80000000;
    } else {
        v = (int)f;
    }
    arg0[0] = v & 0xFF;

    f = arg1[1];
    if (f >= 2147483648.0f) {
        v = (int)(f - 2147483648.0f) | 0x80000000;
    } else {
        v = (int)f;
    }
    arg0[1] = v & 0xFF;

    f = arg1[2];
    if (f >= 2147483648.0f) {
        v = (int)(f - 2147483648.0f) | 0x80000000;
    } else {
        v = (int)f;
    }
    arg0[2] = v & 0xFF;

    f = arg1[3];
    if (f >= 2147483648.0f) {
        v = (int)(f - 2147483648.0f) | 0x80000000;
    } else {
        v = (int)f;
    }
    arg0[3] = v & 0xFF;
}
