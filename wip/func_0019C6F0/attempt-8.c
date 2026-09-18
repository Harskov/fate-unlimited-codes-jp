typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef short s16;
typedef int s32;

extern s32 D_00523B38[];

typedef struct Obj {
    u32 unk_0;
    unsigned char unk_4[0x1D8];
    u32 unk_1DC;
    unsigned char unk_1E0[0xC];
    u32 unk_1EC;
} Obj;

int func_0019C6F0(Obj *p, u32 mask)
{
    u32 v;

    if (D_00523B38[p->unk_0] == 0)
        return 0;
    if (p->unk_1DC & 0x400080)
        return 0;
    v = p->unk_1EC & mask;
    return (v != 0) ^ 1;
}
