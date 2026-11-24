#include "common.h"

typedef struct Obj {
    unsigned char pad[0x1E8];
    /* 0x1E8 */ unsigned int flags_1E8;
    /* 0x1EC */ unsigned int flags_1EC;
    unsigned int unk1F0;
} Obj;

typedef struct Sub {
    unsigned char pad[0xC];
    int unkC;
} Sub;

typedef struct Obj_0019DCC0 {
    unsigned char pad[0x2510];
    Sub *unk2510;
} Obj_0019DCC0;

typedef struct Sub_0019DAF0 {
    unsigned char unk_0[0x68];
    s32 unk_68[3];
} Sub_0019DAF0;

typedef struct Elem_0019DAF0 {
    unsigned char unk_0[0x18];
    Sub_0019DAF0 *unk_18;
} Elem_0019DAF0;

typedef struct Obj_0019DAF0 {
    unsigned char unk_0[0x22C];
    Elem_0019DAF0 *unk_22C;
} Obj_0019DAF0;

extern s32 D_0051D9B8[];

void func_00358030(Obj_0019DAF0 *, s32, s32, s32);

typedef struct Obj_0019E200 {
    unsigned char unk_0[0x1E4];
    /* 0x1E4 */ u32 unk_1E4;
    /* 0x1E8 */ u32 unk_1E8;
    /* 0x1EC */ u32 unk_1EC;
    /* 0x1F0 */ u32 unk_1F0;
    /* 0x1F4 */ u32 unk_1F4;
    unsigned char pad_1F8[0x12B8];
    /* 0x14B0 */ f32 unk_14B0;
    /* 0x14B4 */ f32 unk_14B4;
    unsigned char pad_14B8[0xF9C];
    /* 0x2454 */ s32 unk_2454;
    /* 0x2458 */ s32 unk_2458;
    /* 0x245C */ s32 unk_245C;
    /* 0x2460 */ s32 unk_2460;
    /* 0x2464 */ s32 unk_2464;
    /* 0x2468 */ s32 unk_2468;
    /* 0x246C */ s32 unk_246C;
    /* 0x2470 */ s32 unk_2470;
    /* 0x2474 */ s32 unk_2474;
    /* 0x2478 */ s32 unk_2478;
    /* 0x247C */ s32 unk_247C;
} Obj_0019E200;

void func_001A3890(Obj_0019E200 *, s32, s32, s32);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019D960", func_0019D960);

void func_0019DA00(Obj *arg0)
{
    if ((arg0->flags_1EC & 0x02000000) || (arg0->flags_1E8 & 0x200000)) {
        arg0->unk1F0 |= 0x20;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019D960", func_0019DA50);

void func_0019DAF0(Obj_0019DAF0 *arg0)
{
    Elem_0019DAF0 *e = arg0->unk_22C;
    Sub_0019DAF0 *s = e->unk_18;
    s32 i;

    if (D_0051D9B8[0] < 0xF0) {
        i = 1;
    } else if (D_0051D9B8[0] < 0x4B0) {
        i = 0;
    } else {
        i = 2;
    }
    func_00358030(arg0, s->unk_68[i], 9, 0);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019D960", func_0019DB50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019D960", func_0019DC10);

int func_0019DCC0(Obj_0019DCC0 *arg0)
{
    Sub *s = arg0->unk2510;
    if (s == 0)
        return 0x282;
    if (s->unkC == 1)
        return 0x284;
    return 0x282;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019D960", func_0019DCF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019D960", func_0019DDB0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019D960", func_0019E000);

/* Clears three flag bits and resets the counters at +0x2454; a count of two or more
   is first handed to func_001A3890 scaled by 100. The second object, when given,
   has its counters at +0x246C cleared too. */
void func_0019E200(Obj_0019E200 *arg0, Obj_0019E200 *arg1)
{
    s32 n;

    arg0->unk_1E4 &= ~0x00100000;
    arg0->unk_1EC &= ~0x00800000;
    arg0->unk_1F4 &= ~0x1000;
    n = arg0->unk_2454;
    if (n >= 2) {
        func_001A3890(arg0, n * 100, 1, 1);
    }
    arg0->unk_2454 = 0;
    arg0->unk_2458 = 0;
    arg0->unk_245C = 0;
    arg0->unk_2464 = 0;
    arg0->unk_14B0 = 1.0f;
    arg0->unk_14B4 = 1.0f;
    if (arg1 != 0) {
        arg1->unk_246C = 0;
        arg1->unk_2470 = 0;
        arg1->unk_2474 = 0;
        arg1->unk_247C = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019D960", func_0019E2D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019D960", func_0019E3C0);
