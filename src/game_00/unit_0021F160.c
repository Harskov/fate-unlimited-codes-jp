#include "common.h"
#include "eekernel.h"
#include "types.h"

#include "game_00/adxowner.h"

void func_0013AA00(void *p);

typedef struct Obj0021F370 {
    u8 pad0[0x30];
    s32 unk30;
} Obj0021F370;

int sceClose(int fd);

typedef struct Obj0021F310 {
    unsigned char pad[0x30];
    s32 unk_30;
} Obj0021F310;

int sceRead(int fd, void *buf, int nbyte);

typedef struct Obj0021F340 {
    u8 unk_0[0x2C];
    int unk_2C;
} Obj0021F340;

int sceCdStStop();

void func_0010B888();

int sceOpen(void *path, int flags);

int sceLseek(int fd, int offset, int whence);

typedef struct Obj0021F4D0 {
    u8 pad_0[0x4];
    s32 unk_4;
    u8 pad_8[0x28];
    s32 unk_30;
} Obj0021F4D0;

extern s32 D_005279E8[];

void func_0013B038();

int func_0013B960();

int func_0013B9C8();

typedef struct Elem0021F960 {
    s64 unk_0;
    s64 unk_8;
    s32 unk_10;
    s32 unk_14;
} Elem0021F960;

typedef struct Obj0021F960 {
    u8 pad_0[0x40];
    /* 0x40 */ s32 semaId;
    u8 pad_44[0xC];
    Elem0021F960 *unk_50;
    s32 unk_54;
    s32 unk_58;
    s32 unk_5C;
} Obj0021F960;

void func_0021FA90();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021F160", func_0021F160);

int func_0021F190(Obj38 *obj, s32 arg1, s32 arg2)
{
    int result;
    int ready;

    result = 0;
    if (D_005279E8[0] != 0) {
        ready = 0;
        switch (func_0013B9C8(obj->unk_34)) {
        case 4:
        case 2:
            ready = 0;
            break;
        case 1:
        case 3:
            ready = 1;
            break;
        }
        if (ready != 0) {
            result = func_0013B960(obj->unk_34) << 11;
            D_005279E8[0] = 0;
        } else {
            DelayThread(0x1046);
        }
    } else {
        func_0013B038(obj->unk_34, arg2 >> 11, arg1);
        D_005279E8[0] = 1;
    }
    return result;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021F160", func_0021F280);

int func_0021F310(Obj0021F310 *p, void *buf, int nbyte)
{
    return sceRead(p->unk_30, buf, nbyte);
}

int func_0021F320(Obj38 *obj)
{
    func_0013AA00(obj->unk_34);
    return 1;
}

int func_0021F340(Obj0021F340 *obj)
{
    sceCdStStop();
    func_0010B888(obj->unk_2C);
    return 1;
}

int func_0021F370(Obj0021F370 *obj)
{
    sceClose(obj->unk30);
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021F160", func_0021F390);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021F160", func_0021F420);

int func_0021F4D0(Obj0021F4D0 *obj, void *path)
{
    obj->unk_30 = sceOpen(path, 1);
    if (obj->unk_30 < 0) {
        return 0;
    }
    obj->unk_4 = sceLseek(obj->unk_30, 0, 2);
    if (obj->unk_4 < 0) {
        sceClose(obj->unk_30);
        return 0;
    }
    if (sceLseek(obj->unk_30, 0, 0) < 0) {
        sceClose(obj->unk_30);
        return 0;
    }
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021F160", func_0021F570);

void func_0021F5E0(s32 *arg0)
{
    switch (*arg0) {
    case 0:
        func_0021F370((Obj0021F370 *)arg0);
        break;
    case 1:
        func_0021F340((Obj0021F340 *)arg0);
        break;
    case 3:
        func_0021F320((Obj38 *)arg0);
        break;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021F160", func_0021F650);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021F160", func_0021F780);

int func_0021F940(int a0, int a1, int a2, int a3)
{
    return (a0 + a3 - a1) % a3 < a2;
}

int func_0021F960(Obj0021F960 *obj, Elem0021F960 *src)
{
    int ok;
    s64 first;

    ok = 0;
    WaitSema(obj->semaId);
    if (obj->unk_58 < obj->unk_54) {
        func_0021FA90(obj, src);
        first = src->unk_0;
        if (first >= 0 || src->unk_8 >= 0) {
            obj->unk_50[obj->unk_5C].unk_0 = first;
            obj->unk_50[obj->unk_5C].unk_8 = src->unk_8;
            obj->unk_50[obj->unk_5C].unk_10 = src->unk_10;
            obj->unk_50[obj->unk_5C].unk_14 = src->unk_14;
            obj->unk_58 = obj->unk_58 + 1;
            obj->unk_5C = (obj->unk_5C + 1) % obj->unk_54;
        }
        ok = 1;
    }
    SignalSema(obj->semaId);
    return ok;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021F160", func_0021FA90);
