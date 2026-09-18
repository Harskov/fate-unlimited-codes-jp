typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef short s16;
typedef int s32;

extern s32 D_0051D8A0;
extern s32 D_00523B38[];

typedef struct Obj {
    unsigned char pad0[0x8];
    int unk_8;
    unsigned char padC[0x1DC - 0xC];
    int unk_1DC;
    unsigned char pad1E0[0x1EC - 0x1E0];
    int unk_1EC;
    unsigned char pad1F0[0x23A8 - 0x1F0];
    int unk_23A8;
} Obj;

int func_0019C740(Obj *p)
{
    if (D_00523B38[p->pad0[0]] == 0)
        return 0;
    if (D_0051D8A0 & 0x200000) {
        if (p->unk_23A8 == 0)
            return 0;
    } else {
        if (D_0051D8A0 & 0x04400000)
            return 0;
        if ((D_0051D8A0 & 0x800000) && (p->unk_8 != 0))
            return 0;
        if (p->unk_1DC & 0x400080)
            return 0;
        return (p->unk_1EC & 0x3) == 0;
    }
    return 0;
}
