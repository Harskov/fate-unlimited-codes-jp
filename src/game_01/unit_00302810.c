#include "common.h"

// probably a 4x4 matrix product: arg1 times arg2 into arg0, keeping arg0's first-row w
void func_00302810(void *arg0, void *arg1, void *arg2)
{
    asm {
        .set noreorder
        lqc2 vf1, 0x0(arg1)
        lqc2 vf2, 0x10(arg1)
        lqc2 vf3, 0x20(arg1)
        lqc2 vf4, 0x30(arg1)
        lqc2 vf5, 0x0(arg2)
        lqc2 vf6, 0x10(arg2)
        lqc2 vf7, 0x20(arg2)
        lqc2 vf8, 0x30(arg2)
        lqc2 vf13, 0x0(arg0)
        vmulax.xyz ACC, vf5, vf1x
        vmadday.xyz ACC, vf6, vf1y
        vmaddz.xyz vf9, vf7, vf1z
        vmulax.xyz ACC, vf5, vf2x
        vmadday.xyz ACC, vf6, vf2y
        vmaddz.xyz vf10, vf7, vf2z
        vmove.w vf9, vf13
        vmulax.xyz ACC, vf5, vf3x
        vmadday.xyz ACC, vf6, vf3y
        vmaddz.xyz vf11, vf7, vf3z
        vmulax.xyz ACC, vf5, vf4x
        vmadday.xyz ACC, vf6, vf4y
        vmaddaz.xyz ACC, vf7, vf4z
        vmaddw.xyz vf12, vf8, vf0w
        sqc2 vf9, 0x0(arg0)
        sqc2 vf10, 0x10(arg0)
        sqc2 vf11, 0x20(arg0)
        sqc2 vf12, 0x30(arg0)
        .set reorder
    }
}
