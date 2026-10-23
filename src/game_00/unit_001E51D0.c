#include "common.h"
#include "game_00/unit_0020D0D0.h"
#include "game_00/vec.h"
#include "game_00/unit_0020C4F0.h"

typedef struct Obj_001E52A0 {
    unsigned int flags;
} Obj_001E52A0;

typedef struct Obj_001E5860_C4 {
    u8 unk_0[0x10];
    u8 unk_10[0x10];
} Obj_001E5860_C4;

typedef struct Obj_001E5860_C {
    u8 unk_0[4];
    Obj_001E5860_C4 *unk_4;
    u8 unk_8[0x18];
    u8 unk_20[0x40];
    s32 unk_60;
    s32 unk_64;
    f32 unk_68;
    f32 unk_6C;
    u8 unk_70[8];
    f32 unk_78;
    f32 unk_7C;
} Obj_001E5860_C;

typedef struct Obj_001E5860 {
    u8 unk_0[8];
    s32 unk_8;
    Obj_001E5860_C *unk_C;
    u8 unk_10[8];
    f32 unk_18;
    u8 unk_1C[0x10];
    f32 unk_2C;
    f32 unk_30;
    f32 unk_34;
    u8 unk_38[0xC];
    f32 unk_44;
    f32 unk_48;
    f32 unk_4C;
    u8 unk_50[4];
    f32 unk_54;
    u8 unk_58[4];
    f32 unk_5C;
} Obj_001E5860;

extern char D_005014B0[];

extern char D_005014C0[];

extern char D_005014E0[];

extern char D_00501500[];

extern char D_00501530[];

extern char D_00501550[];

extern char D_00501570[];

extern char D_00501590[];

extern char D_005015B0[];

extern u16 *D_00522D90[];

void func_0015EE20(Vec4 *v, f32 x, f32 y, f32 z);

float func_0016E8F0(Vec4 *a, Vec4 *b);

void func_001E5740(Obj_001E5860 *o);

f32 func_001E6C10(Obj_001E5860 *o);

void func_002052F0(const char *fmt, ...);

void func_0020BC70(void *p);



s32 func_00310B00(s32 n);

#define CLAMP(x, lo, hi) ((x) < (lo) ? (lo) : (x) > (hi) ? (hi) : (x))

extern char D_00501458[];

void func_002002E0();

void func_00200A90();

typedef struct Obj_001E5320_50 {
    u8 unk_0[0x20];
    s32 unk_20;
} Obj_001E5320_50;

typedef struct Obj_001E5320 {
    u8 unk_0[0x50];
    Obj_001E5320_50 *unk_50;
} Obj_001E5320;

void func_002D1048();

typedef struct Obj_001E6240 {
    u32 unk_0;
    u8 unk_4[0x18];
    f32 unk_1C;
    u8 unk_20[0xC];
    u8 unk_2C[0xC];
    u8 unk_38[0xC];
    u8 unk_44[0xC];
    f32 unk_50;
    f32 unk_54;
    f32 unk_58;
    f32 unk_5C;
} Obj_001E6240;

void func_00165EA0(void *dst, void *a, void *b);

void func_0016CFD0(void *dst, void *src, f32 scale);

void func_0016E9E0(void *dst, void *a, void *b);

f32 fabsf(f32);

f32 func_001E6C00(Obj_001E6240 *o);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E51D0", func_001E51D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E51D0", func_001E5230);

int func_001E52A0(Obj_001E52A0 *p)
{
    return p->flags & 0x80;
}

int func_001E52B0(int *arg0)
{
    *arg0 &= ~0x80;
    return 0;
}

int func_001E52D0(int *arg0)
{
    *arg0 |= 0x80;
    return 0;
}

int func_001E52F0(Obj_001E5860 *arg0, f32 arg1)
{
    arg0->unk_44 = arg1 / 60.0f;
    return 0;
}

int func_001E5320(Obj_001E5320 *arg0)
{
    func_002D1048(arg0->unk_50->unk_20);
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E51D0", func_001E5350);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E51D0", func_001E53C0);

// formats a string into a 256-byte buffer with a fixed format, then passes it on with 8, 0x04000000 and -1 (probably a debug text draw)
void func_001E5430(char *arg0)
{
    char buf[256];

    func_002002E0(buf, arg0, D_00501458);
    func_00200A90(buf, 8, 0x04000000, -1);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E51D0", func_001E5470);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E51D0", func_001E54E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E51D0", func_001E5510);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E51D0", func_001E5740);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E51D0", func_001E57F0);

// a debug print, probably of the camera: "Pos", "Tar", then "ANG DIR DIST FOV"; levels 2 to 4 of unk_8 add
// roll and aspect, the view offset and window, the rasters, and func_001E5740's output.
// 10430.378f and 0.0000958738f convert radians to and from 0x10000 angle units, 57.295776f to degrees
void func_001E5860(Obj_001E5860 *arg0)
{
    Vec4 v;
    Vec4 axis;
    void *p;
    s32 i;
    f32 ang;
    f32 dir;
    f32 dist;
    Obj_001E5860_C *c;
    s32 raster;
    s32 zraster;

    p = arg0->unk_C->unk_4->unk_10;
    v.x = func_0020CE90(p)->x;
    v.y = func_0020CE90(p)->y;
    v.z = func_0020CE90(p)->z;
    func_002052F0(D_005014B0);
    func_002052F0(D_005014C0, arg0->unk_2C, arg0->unk_30, arg0->unk_34);
    func_002052F0(D_005014E0, arg0->unk_44, arg0->unk_48, arg0->unk_4C);
    func_0015EE20(&axis, 0.0f, 1.0f, 0.0f);
    i = CLAMP((s32)(8192.0f * (1.0f + (f32)(s32)(10430.378f * func_0016E8F0(&v, &axis)))), 0, 0x4001);
    ang = 57.295776f * (s32)D_00522D90[0][i] - 90.0f;
    dir = 57.295776f * (0.0000958738f * func_0020DBB0(-v.z, v.x));
    dist = func_001E6C10(arg0);
    func_002052F0(D_00501500, ang, dir, dist, arg0->unk_54);
    if (arg0->unk_8 >= 2) {
        func_002052F0(D_00501530, arg0->unk_5C, arg0->unk_18);
        func_0020BC70(p);
        func_0020BC70(arg0->unk_C->unk_20);
    }
    if (arg0->unk_8 >= 3) {
        c = arg0->unk_C;
        raster = c->unk_60;
        zraster = c->unk_64;
        func_002052F0(D_00501550, c->unk_78, c->unk_7C);
        c = arg0->unk_C;
        func_002052F0(D_00501570, c->unk_68, c->unk_6C);
        func_002052F0(D_00501590, raster, func_00310B00(raster));
        func_002052F0(D_005015B0, zraster, func_00310B00(zraster));
    }
    if (arg0->unk_8 >= 4) {
        func_001E5740(arg0);
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E51D0", func_001E5C90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E51D0", func_001E5EF0);

// the same two vector steps as func_001E6240, then unk_50 set from func_001E6C00's result:
// 50 above 4.5, otherwise 10 plus 40 times (result - 1.5) / 3, the factor kept above 0.0001
void func_001E60E0(Obj_001E6240 *arg0)
{
    Vec4 vec;
    f32 f;
    f32 t;

    func_00165EA0(&vec, arg0->unk_20, arg0->unk_2C);
    func_0016CFD0(&vec, &vec, arg0->unk_1C);
    func_0016E9E0(arg0->unk_2C, arg0->unk_2C, &vec);
    func_00165EA0(&vec, arg0->unk_38, arg0->unk_44);
    func_0016CFD0(&vec, &vec, arg0->unk_1C);
    func_0016E9E0(arg0->unk_44, arg0->unk_44, &vec);
    f = func_001E6C00(arg0);
    if (f <= 4.5f) {
        t = (f - 1.5f) / 3.0f;
        if (t < 0.0001f)
            t = 0.0001f;
        arg0->unk_50 = 10.0f + 40.0f * t;
    } else {
        arg0->unk_50 = 50.0f;
    }
    if (!(fabsf(arg0->unk_50 - arg0->unk_54) < 0.0001f))
        arg0->unk_0 |= 1;
    arg0->unk_5C = arg0->unk_58;
    arg0->unk_54 = arg0->unk_50;
}

void func_001E6240(Obj_001E6240 *arg0)
{
    Vec4 vec;

    func_00165EA0(&vec, arg0->unk_20, arg0->unk_2C);
    func_0016CFD0(&vec, &vec, arg0->unk_1C);
    func_0016E9E0(arg0->unk_2C, arg0->unk_2C, &vec);
    func_00165EA0(&vec, arg0->unk_38, arg0->unk_44);
    func_0016CFD0(&vec, &vec, arg0->unk_1C);
    func_0016E9E0(arg0->unk_44, arg0->unk_44, &vec);
    if (!(fabsf(arg0->unk_50 - arg0->unk_54) < 0.0001f))
        arg0->unk_0 |= 1;
    arg0->unk_5C = arg0->unk_58;
    arg0->unk_54 = arg0->unk_50;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_001E51D0", func_001E6310);
