typedef unsigned char u8;
typedef unsigned short u16;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef unsigned int u32;

typedef struct Obj {
    struct Obj *unk0;
    s32 unk4;
    unsigned char pad8[0x8];
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;
    unsigned char pad34[0x8C];
    s32 unkC0;
    u16 unkC4;
    u16 unkC6;
    u8 unkC8;
    u8 unkC9;
    u8 unkCA;
} Obj;

extern s32 D_0051AC78[];
extern s32 D_0051AE40[];
extern s32 D_0051AE58[];

void func_0017A670(s8 arg0, s16 arg1)
{
    Obj *temp_v0;
    u32 temp_a0;

    temp_v0 = (Obj *)D_0051AC78[0];
    if (temp_v0 != 0) {
        D_0051AC78[0] = (s32)temp_v0->unk0;
        temp_v0->unk0 = 0;
        temp_v0->unkC4 = 1;
        temp_v0->unkC9 = 0;
        temp_v0->unkC8 = arg0;
        temp_v0->unk18 = 0;
        temp_v0->unk14 = 0;
        temp_v0->unk10 = 0;
        temp_v0->unk24 = 0;
        temp_v0->unk20 = 0;
        temp_v0->unk1C = 0;
        temp_v0->unk30 = 0x3F800000;
        temp_v0->unk2C = 0x3F800000;
        temp_v0->unk28 = 0x3F800000;
        temp_v0->unkC0 = 0;
        temp_v0->unkCA = 0;
        temp_v0->unk4 = 0;
        temp_v0->unkC6 = arg1;
        temp_a0 = D_0051AE58[0] + 1;
        D_0051AE58[0] = (s32)temp_a0;
        if ((u32)D_0051AE40[0] < temp_a0) {
            D_0051AE40[0] = (s32)temp_a0;
        }
    }
}
