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
    f32 t;
    s32 k;
    u8 lo;
    u8 hi;

    if (a->f28 == 0.0f) {
        out1[0] = a->b40;
        out1[1] = a->b41;
        out1[2] = a->b42;
        out1[3] = a->b43;
    } else {
        t = 65536.0f * (a->f9C / a->f28);
        k = (s32)t;
        lo = a->bAC;
        hi = a->b40;
        out1[0] = (u8)((s16)((lo << 16) + k * (hi - lo)) >> 16);
        lo = a->bAD;
        hi = a->b41;
        out1[1] = (u8)((s16)((lo << 16) + k * (hi - lo)) >> 16);
        lo = a->bAE;
        hi = a->b42;
        out1[2] = (u8)((s16)((lo << 16) + k * (hi - lo)) >> 16);
        lo = a->bAF;
        hi = a->b43;
        out1[3] = (u8)((s16)((lo << 16) + k * (hi - lo)) >> 16);
    }

    if (a->f2C == 0.0f) {
        out2[0] = a->b44;
        out2[1] = a->b45;
        out2[2] = a->b46;
        out2[3] = a->b47;
    } else {
        t = 65536.0f * (a->fA0 / a->f2C);
        k = (s32)t;
        lo = a->bB0;
        hi = a->b44;
        out2[0] = (u8)((s16)((lo << 16) + k * (hi - lo)) >> 16);
        lo = a->bB1;
        hi = a->b45;
        out2[1] = (u8)((s16)((lo << 16) + k * (hi - lo)) >> 16);
        lo = a->bB2;
        hi = a->b46;
        out2[2] = (u8)((s16)((lo << 16) + k * (hi - lo)) >> 16);
        lo = a->bB3;
        hi = a->b47;
        out2[3] = (u8)((s16)((lo << 16) + k * (hi - lo)) >> 16);
    }
}
