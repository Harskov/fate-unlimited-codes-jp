#include "common.h"
#include "libc.h"
#include "game_00/unit_0020EB60.h"

void func_0020F230(s32 arg0, s32 arg1);

typedef struct Obj {
    unsigned char unk_0[0x14];
    int unk_14;
} Obj;

extern s32 D_00522DB0[];

void func_0020F230();

void *func_0020F180(s32 arg0, u32 size);

u32 func_0020F320(s32 arg0, s32 arg1);

typedef struct Obj_0020F0E0 {
    /* 0x00 */ struct Obj_0020F0E0 *link_0;
    /* 0x04 */ struct Obj_0020F0E0 *link_4;
    s32 unk_8;
    /* 0x0C */ s32 flags;
} Obj_0020F0E0;

Obj_0020F0E0 *func_0020F0E0(s32 arg0, s32 arg1, s32 arg2);

s32 func_00206D20(char *, void *, s32);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020EB60", func_0020EB60);

void func_0020EBC0(s32 arg0)
{
    func_0020F230(D_00522DB0, arg0 - 0xC);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020EB60", func_0020EBD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020EB60", func_0020EC40);

s32 func_0020ECB0(s32 arg0, s32 arg1)
{
    Obj_0020F0E0 *p;

    if (arg1 != 0) {
        p = func_0020F0E0(arg0, arg1, 0);
        if (p != 0)
            return p->unk_8 - 0x10;
        return 0;
    }
    return 0;
}

s32 func_0020ECF0(s32 arg0, s32 arg1, char *arg2)
{
    Obj_0020F0E0 *p;

    if (arg1 != 0) {
        p = func_0020F0E0(arg0, arg1, 0);
        if (p != 0)
            return func_00206D20(arg2, (void *)arg1, p->unk_8 - 0x10);
        return 0;
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020EB60", func_0020ED50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020EB60", func_0020EDE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020EB60", func_0020EE60);

int func_0020EEE0(Obj *p)
{
    return p->unk_14;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020EB60", func_0020EEF0);

void *func_0020EF40(s32 arg0, s32 arg1, u32 arg2)
{
    u32 n;
    void *dst;

    arg2 = (arg2 + 0xF) & ~0xF;
    dst = func_0020F180(arg0, arg2);
    if (dst != 0 && arg1 != 0) {
        n = func_0020F320(arg0, arg1);
        if (arg2 < n) {
            n = arg2;
        }
        memcpy(dst, (void *)arg1, n);
        func_0020F230(arg0, arg1);
    }
    return dst;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020EB60", func_0020EFF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020EB60", func_0020F0E0);

void func_0020F120(s32 arg0, s32 *arg1)
{
    func_0020F230(arg0, arg1[-1]);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020EB60", func_0020F130);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020EB60", func_0020F180);

/* probably a block release: clears the block's word at +0xC, then folds the block into
   the neighbour at +0x4 and the one at +0x0 when theirs is clear, moving the head at
   arg0 along when it pointed at a block that went away */
void func_0020F230(s32 arg0, s32 arg1)
{
    Obj_0020F0E0 **head;
    Obj_0020F0E0 *p;
    Obj_0020F0E0 *next;
    Obj_0020F0E0 *prev;
    Obj_0020F0E0 *prev2;
    s32 v;
    u8 bit;

    head = (Obj_0020F0E0 **)arg0;
    if (arg1 == 0)
        return;
    p = func_0020F0E0(arg0, arg1, 0);
    if (p == 0)
        return;
    prev = p->link_0;
    v = p->flags;
    prev2 = prev->link_0;
    next = p->link_4;
    if (v == 0)
        return;
    bit = (v & 4) != 0;
    p->flags = 0;
    if (bit == 0)
        *head = p;

    if (next->flags == 0) {
        if (p == *head)
            *head = next;
        next->link_0 = p->link_0;
        next->unk_8 = next->unk_8 + p->unk_8;
        p = next;
        prev->link_4 = next;
    }

    if (prev->flags == 0) {
        if (prev == *head)
            *head = p;
        p->link_0 = prev->link_0;
        p->unk_8 = p->unk_8 + prev->unk_8;
        prev2->link_4 = p;
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0020EB60", func_0020F320);
