#include "common.h"

// probably a 4x4 matrix product: arg1's three words packed into a vector, times arg2's rows, into arg0
void *func_00302888(void *arg0, void *arg1, void *arg2)
{
    asm {
        .set noreorder
        lqc2 vf1, 0x0(arg2)
        lqc2 vf2, 0x10(arg2)
        lqc2 vf3, 0x20(arg2)
        lqc2 vf4, 0x30(arg2)
        lwu v1, 0x0(arg1)
        lwu at, 0x4(arg1)
        lwu v0, 0x8(arg1)
        dsll32 at, at, 0
        or at, at, v1
        pcpyld v0, v0, at
        qmtc2.ni v0, vf5
        vmulax.xyz ACC, vf1, vf5x
        vmadday.xyz ACC, vf2, vf5y
        vmaddaz.xyz ACC, vf3, vf5z
        vmaddw.xyz vf5, vf4, vf0w
        qmfc2.ni at, vf5
        dsrl32 v0, at, 0
        pcpyud v1, at, at
        sw at, 0x0(arg0)
        sw v0, 0x4(arg0)
        sw v1, 0x8(arg0)
        .set reorder
    }
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/game_01/unit_00302888", func_003028E8);

// probably a 3x3 matrix product: arg1's three rows times arg2's three rows into arg0
void *func_00302978(void *arg0, void *arg1, void *arg2)
{
    asm {
        .set noreorder
        lqc2 vf1, 0x0(arg2)
        lqc2 vf2, 0x10(arg2)
        lqc2 vf3, 0x20(arg2)
        lwu at, 0x0(arg1)
        lwu v0, 0x4(arg1)
        lwu v1, 0x8(arg1)
        dsll32 v0, v0, 0
        or v0, v0, at
        pcpyld v1, v1, v0
        qmtc2.ni v1, vf4
        vmulax.xyz ACC, vf1, vf4x
        vmadday.xyz ACC, vf2, vf4y
        vmaddz.xyz vf4, vf3, vf4z
        qmfc2.ni at, vf4
        dsrl32 v0, at, 0
        pcpyud v1, at, at
        sw at, 0x0(arg0)
        sw v0, 0x4(arg0)
        sw v1, 0x8(arg0)
        .set reorder
    }
    return arg0;
}
