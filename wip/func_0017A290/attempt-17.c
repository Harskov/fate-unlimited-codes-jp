typedef unsigned char u8;
typedef signed char s8;
typedef float f32;

void func_0017A290(u8 *arg0, f32 *arg1)
{
    f32 f;
    s32 v;

    f = arg1[0];
    if (f >= 2.1474836e9f) {
        v = (s32)(f - 2.1474836e9f) | 0x80000000;
    } else {
        v = (s32)f;
    }
    arg0[0] = (u8)(v & 0xFF);

    f = arg1[1];
    if (f >= 2.1474836e9f) {
        v = (s32)(f - 2.1474836e9f) | 0x80000000;
    } else {
        v = (s32)f;
    }
    arg0[1] = (u8)(v & 0xFF);

    f = arg1[2];
    if (f >= 2.1474836e9f) {
        v = (s32)(f - 2.1474836e9f) | 0x80000000;
    } else {
        v = (s32)f;
    }
    arg0[2] = (u8)(v & 0xFF);

    f = arg1[3];
    if (f >= 2.1474836e9f) {
        v = (s32)(f - 2.1474836e9f) | 0x80000000;
    } else {
        v = (s32)f;
    }
    arg0[3] = (u8)(v & 0xFF);
}
