typedef unsigned char u8;
typedef unsigned short u16;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef unsigned int u32;
typedef float f32;

extern s32 D_0051AC78[];
extern s32 D_0051AE40[];
extern s32 D_0051AE58[];

typedef struct Obj {
    unsigned char pad0[0x4];
    s32 unk_4;
    unsigned char pad8[0x8];
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
    f32 unk_28;
    f32 unk_2C;
    f32 unk_30;
    unsigned char pad34[0x8C];
    s32 unk_C0;
    u16 unk_C4;
    u16 unk_C6;
    u8 unk_C8;
    u8 unk_C9;
    u8 unk_CA;
    unsigned char padCB[0x1];
    struct Obj *link;
} Obj;

void func_0017A670(s8 arg0, s16 arg1)
{
    Obj *o;
    u32 n;

    o = (Obj *)D_0051AC78[0];
    if (o == 0)
        return;
    D_0051AC78[0] = (s32)o->link;
    o->link = 0;
    o->unk_C4 = 1;
    o->unk_C9 = 0;
    o->unk_C8 = arg0;
    o->unk_18 = 0;
    o->unk_14 = 0;
    o->unk_10 = 0;
    o->unk_24 = 0;
    o->unk_20 = 0;
    o->unk_1C = 0;
    o->unk_30 = 1.0f;
    o->unk_2C = 1.0f;
    o->unk_28 = 1.0f;
    o->unk_C0 = 0;
    o->unk_CA = 0;
    o->unk_4 = 0;
    o->unk_C6 = arg1;
    n = D_0051AE58[0] + 1;
    D_0051AE58[0] = n;
    if ((u32)D_0051AE40[0] < n) {
        D_0051AE40[0] = n;
    }
}
