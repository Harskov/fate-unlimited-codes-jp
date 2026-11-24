#include "common.h"

extern f32 D_003D7AC0[];

extern s32 func_00203F50();

void func_002EA0B0();

void func_00310208();

void func_002036C0(s32 arg0, s32 arg1, f32 fparg2);

typedef struct Obj_00203230 {
    s32 unk_0;
    s32 unk_4;
    /* 0x08 */ struct Obj_00203230 *next;
} Obj_00203230;

extern s32 D_0051D968[];

extern Obj_00203230 *D_0052006C[];

extern s32 D_00523AFC[];

void func_00203010();

typedef struct Obj_00203DB0 {
    /* 0x00 */ u8 pad_00[0x18];
    /* 0x18 */ s32 unk_18;
} Obj_00203DB0;

void func_0025F1B0();

typedef struct Obj_00203870 {
    u8 unk_0[0x38];
    s32 unk_38;
} Obj_00203870;

extern s32 D_00520060[];

extern s32 D_0052007C[];

void func_002C4108();

extern void *func_002E9FB0();

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00202880);

void func_00202A80(s32 arg0)
{
    func_00310208(arg0, 0);
    func_002EA0B0(arg0);
}

void *func_00202AB0(s32 arg0)
{
    void *obj;

    obj = func_002E9FB0(arg0, arg0, 0x20, 0x505);
    if (obj != 0) {
        func_00310208(obj, 1);
    }
    return obj;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00202B00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00202C80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00202D30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00202D80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00202E10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00202E90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00202F30);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00203010);

void func_00203230(void)
{
    Obj_00203230 *p;

    if ((D_00523AFC[0] & 0x10) && D_0051D968[0] == 0) {
        p = D_0052006C[0];
        while (p->unk_0 != 1) {
            func_00203010(p->unk_0);
            p = p->next;
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_002032B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00203460);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00203520);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00203630);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_002036C0);

void func_00203870(Obj_00203870 *arg0)
{
    s32 arg;

    if (arg0 != 0) {
        arg = arg0->unk_38;
        if (arg != 0) {
            if (D_0052007C[0] != 0 && (D_00520060[0] & 0x800)) {
                func_002C4108(D_0052007C[0], arg);
            }
            D_00520060[0] &= ~0x4000;
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_002038E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00203980);

void func_00203A30(f32 fparg0)
{
    D_003D7AC0[0] = fparg0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00203A40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00203AB0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00203B00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00203BD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00203C20);

Obj_00203DB0 *func_00203DB0(Obj_00203DB0 *arg0)
{
    func_0025F1B0(arg0->unk_18, 0);
    return arg0;
}

s32 func_00203DE0(s32 arg0, s32 *arg1)
{
    if (func_00203F50(arg0, 0) != 0) {
        *arg1 = arg0;
        return 0;
    }
    return arg0;
}

s32 func_00203E30(s32 arg0, s32 *arg1)
{
    if (func_00203F50(arg0, 0) != 0) {
        func_00203EA0(arg0, arg1, -1);
        func_002036C0(arg1[4], -1, 0.0f);
    }
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00203EA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00202880", func_00203F50);
