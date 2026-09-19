typedef unsigned char u8;
typedef short s16;
typedef int s32;
typedef float f32;

typedef struct Obj {
    unsigned char pad[0x28];
    f32 f28;
    f32 f2C;
    unsigned char pad2[0x40 - 0x30];
    u8 b40;
    u8 b41;
    u8 b42;
    u8 b43;
    u8 b44;
    u8 b45;
    u8 b46;
    u8 b47;
    unsigned char pad3[0x9C - 0x48];
    f32 f9C;
    f32 fA0;
    unsigned char pad4[0xAC - 0xA4];
    u8 bAC;
    u8 bAD;
    u8 bAE;
    u8 bAF;
    u8 bB0;
    u8 bB1;
    u8 bB2;
    u8 bB3;
} Obj;

void func_0017A830(Obj *a, u8 *out1, u8 *out2)
{
    f32 f2;
    f32 f1;
    f32 f0;
    s32 v;
    u8 t1;
    u8 t0;
    s32 d;

    f2 = a->f28;
    if (f2 == 0.0f) {
        out1[0] = a->b40;
        out1[1] = a->b41;
        out1[2] = a->b42;
        out1[3] = a->b43;
    } else {
        f1 = a->f9C;
        f0 = 65536.0f;
        t1 = a->bAC;
        f1 = f1 / f2;
        f0 = f0 * f1;
        v = (s32) f0;
        d = a->b40 - t1;
        out1[0] = (u8) ((s16) ((t1 << 16) + v * d) >> 16);
        t1 = a->bAD;
        d = a->b41 - t1;
        out1[1] = (u8) ((s16) ((t1 << 16) + v * d) >> 16);
        t1 = a->bAE;
        d = a->b42 - t1;
        out1[2] = (u8) ((s16) ((t1 << 16) + v * d) >> 16);
        t0 = a->bAF;
        d = a->b43 - t0;
        out1[3] = (u8) ((s16) ((t0 << 16) + v * d) >> 16);
    }

    f2 = a->f2C;
    if (f2 == 0.0f) {
        out2[0] = a->b44;
        out2[1] = a->b45;
        out2[2] = a->b46;
        out2[3] = a->b47;
    } else {
        f1 = a->fA0;
        f0 = 65536.0f;
        t0 = a->bB0;
        f1 = f1 / f2;
        f0 = f0 * f1;
        v = (s32) f0;
        d = a->b44 - t0;
        out2[0] = (u8) ((s16) ((t0 << 16) + v * d) >> 16);
        t0 = a->bB1;
        d = a->b45 - t0;
        out2[1] = (u8) ((s16) ((t0 << 16) + v * d) >> 16);
        t0 = a->bB2;
        d = a->b46 - t0;
        out2[2] = (u8) ((s16) ((t0 << 16) + v * d) >> 16);
        t0 = a->bB3;
        d = a->b47 - t0;
        out2[3] = (u8) ((s16) ((t0 << 16) + v * d) >> 16);
    }
}
