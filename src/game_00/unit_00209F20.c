#include "common.h"
#include "types.h"

extern u64 D_00522D60[];

extern s32 D_00522DB0[];

void func_00207630();

void func_00207F00();

void func_0020EE60();

s64 GetTimerSystemTime(void);

extern char D_005019A0[];

extern char D_005019C0[];

extern char D_005019E0[];

extern char D_00501A00[];

extern char D_00501A20[];

extern char D_00501A40[];

void func_001069A8();

s32 sceCdInit(s32 mode);

s32 sceCdMmode(s32 media);

s32 sceSifRebootIop(const char *image);

s32 sceSifSyncIop(void);

void sceSifLoadFileReset(void);

s32 sceFsReset(void);

s32 sceSifInitIopHeap(void);

s32 func_0010C5E8(const char *path, s32 argc, const char *argv);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00209F20", func_00209F20);

// reboots the IOP from the disc's IOPRP310.IMG, then loads the IRX modules, retrying each until it loads
void func_00209FD0(void)
{
    func_001069A8(0);
    sceCdInit(0);
    while (!sceSifRebootIop(D_005019A0)) {
    }
    while (!sceSifSyncIop()) {
    }
    func_001069A8(0);
    sceSifLoadFileReset();
    sceCdInit(0);
    sceCdMmode(2);
    sceFsReset();
    sceSifInitIopHeap();
    while (func_0010C5E8(D_005019C0, 0, 0) < 0) {
    }
    while (func_0010C5E8(D_005019E0, 0, 0) < 0) {
    }
    while (func_0010C5E8(D_00501A00, 0, 0) < 0) {
    }
    while (func_0010C5E8(D_00501A20, 0, 0) < 0) {
    }
    while (func_0010C5E8(D_00501A40, 0, 0) < 0) {
    }
}

void func_0020A100(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00209F20", func_0020A110);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00209F20", func_0020A1B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00209F20", func_0020A210);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00209F20", func_0020A260);

void func_0020A380(s32 arg0)
{
    // !FAKE: the bytes store zero into the argument when it is already zero (bnez over a daddu); the author's form behind that redundant store is unknown
    if (arg0 == 0) {
        arg0 = 0;
    }
    if (arg0 != 0) {
        if (arg0 > 2) {
            func_0020EE60(D_00522DB0);
        }
        func_00207F00(1);
        func_00207630(1);
    }
}

f32 func_0020A3D0(s64 *arg0, s32 arg1)
{
    f32 result;

    result = 0;
    if (arg1 != 0) {
        /* probably microseconds: 147.456 is the bus clock in MHz */
        result = (f32)(u64)(GetTimerSystemTime() - *arg0) / 147.456f;
    } else {
        *arg0 = GetTimerSystemTime();
    }
    return result;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00209F20", func_0020A440);

int func_0020A4E0(int cause)
{
    if (cause == 9 && (*(volatile u32 *)0x10000010 & 0x800)) {
        *(volatile u32 *)0x10000010 |= 0x800;
        D_00522D60[0] += 0x10000;
    }
    asm {
        sync
        ei
    }
    return 0;
}
