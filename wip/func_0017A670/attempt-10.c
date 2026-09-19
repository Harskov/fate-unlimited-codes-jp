typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef float f32;

extern s32 D_0051AC78[];
extern s32 D_0051AE40[];
extern s32 D_0051AE58[];

typedef struct Obj {
    unsigned char pad0[0x4];
    s32 unk4;
    unsigned char pad8[0x8];
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    f32 unk28;
    f32 unk2C;
    f32 unk30;
    unsigned char pad34[0x8C];
    s32 unkC0;
    u16 unkC4;
    u16 unkC6;
    u8 unkC8;
    u8 unkC9;
    u8 unkCA;
    unsigned char padCB[0x1];
    struct Obj *link;
} Obj;

void func_0017A670(s8 arg0, s16 arg1)
{
    Obj *o;
    u32 n;

    o = (Obj *)D_0051AC78[0];
    if (o != 0) {
        D_0051AC78[0] = (s32)o->link;
        o->link = 0;
        o->unkC4 = 1;
        o->unkC9 = 0;
        o->unkC8 = arg0;
        o->unk18 = 0;
        o->unk14 = 0;
        o->unk10 = 0;
        o->unk24 = 0;
        o->unk20 = 0;
        o->unk1C = 0;
        o->unk30 = 1.0f;
        o->unk2C = 1.0f;
        o->unk28 = 1.0f;
        o->unkC0 = 0;
        o->unkCA = 0;
        o->unk4 = 0;
        o->unkC6 = arg1;
        n = D_0051AE58[0] + 1;
        D_0051AE58[0] = n;
        if ((u32)D_0051AE40[0] < n)
            D_0051AE40[0] = n;
    }
}
