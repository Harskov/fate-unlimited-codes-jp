typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef float f32;

extern s32 D_00522D98;

typedef struct Sub {
    unsigned char pad[0x20];
    f32 unk20;
    f32 unk24;
    f32 unk28;
    unsigned char pad2[0x78];
    f32 unkA0;
    f32 unkAC;
    f32 unkB0;
    unsigned char pad3[0x24];
    f32 unkD8;
} Sub;

typedef struct Obj {
    unsigned char pad[0x50];
    f32 unk50;
    f32 unk54;
    f32 unk58;
    f32 unk60;
    f32 unk64;
    f32 unk68;
    unsigned char pad2[0x8];
    f32 unk74;
    f32 unk78;
    unsigned char pad3[0x50];
    Sub *unkCC;
} Obj;

void func_0017A9F0(Obj *a, f32 *out)
{
    Sub *s = a->unkCC;
    f32 *tbl;
    f32 f1, f0, f9, f8, f5, f7, f6, f10, f11, f4, f2, f3, f12;
    s32 i0, i1, i2, i3;

    if (s == 0) {
        out[0] = a->unk60;
        out[1] = a->unk64;
        out[2] = a->unk68;
        return;
    }

    f1 = a->unk74;
    f10 = 10.0f;
    tbl = (f32 *)D_00522D98;
    f9 = s->unkA0;
    f0 = a->unk78;

    i0 = (s32)f1;
    i0 = (i0 + 2) >> 2;
    i1 = (i0 + 0x1000) & 0x3FFF;
    i0 = i0 & 0x3FFF;
    f4 = tbl[i0];
    f2 = tbl[i1];

    f9 = f10 * f9;
    f8 = 4622.0f;
    f5 = s->unkAC;
    f8 = f8 * f9;
    f6 = (f32)(s32)f8;

    i2 = (s32)f0;
    i2 = (i2 + 2) >> 2;
    i3 = (i2 + 0x1000) & 0x3FFF;
    i2 = i2 & 0x3FFF;
    f3 = tbl[i2];
    f1 = tbl[i3];

    f11 = a->unk58;
    f0 = s->unkD8;
    f7 = a->unk50;
    f0 = f11 - f0;
    f8 = f7 - f6;

    if (f5 < 0.0f) {
        f5 = -f5;
    }

    f7 = s->unkB0;
    f6 = 0.0f;
    if (f7 < 0.0f) {
        f9 = f7;
    } else {
        f9 = -f7;
    }
    if (f7 < 0.0f) {
        f7 = -f7;
    }

    f10 = a->unk54;
    f8 = 4622.0f * f7;
    f6 = (f32)(s32)f8;
    f7 = (f32)(s32)(4622.0f * f9);

    i0 = (s32)f6;
    i1 = (s32)f7;
    i0 = (i0 + 2) >> 2;
    i1 = (i1 + 2) >> 2;
    i2 = (i0 + 0x1000) & 0x3FFF;
    i3 = i1 & 0x3FFF;
    i0 = i0 & 0x3FFF;
    f12 = tbl[i3];
    f9 = tbl[i2];
    f8 = tbl[i0];

    f7 = s->unk20;
    f6 = 0.0f;
    f6 = f0 * f4;
    f5 = f12 / tbl[(i1 + 0x1000) & 0x3FFF];
    f5 = f0 * f5 + f6;
    f5 = f5 * f10;
    f9 = f5 * f9;
    f8 = f5 * f8;
    f5 = f0 * f2;
    f0 = f0 * f3;
    f0 = f9 * f1 + f0;
    f0 = f7 + f0;
    out[0] = f0;

    f7 = -f9;
    f0 = f7 * f2;
    f2 = f7 * f4;
    f2 = f3 * f2 + f8 * f2;
    f2 = f1 * f6 + f2;
    f0 = f3 * f0;
    f0 = f1 * f5 + f0;
    f0 = s->unk24 + f2;
    out[1] = f0;

    f0 = s->unk28 + f0;
    out[2] = f0;
}
