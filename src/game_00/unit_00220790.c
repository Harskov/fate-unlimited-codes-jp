#include "common.h"
#include "types.h"

int sceMpegAddStrCallback(void *mp, u8 strType, int ch, void *cb, void *data);

extern void func_002202F0();

typedef struct Obj00220EA0 {
    u8 pad[0x48];
    u8 unk_48;
} Obj00220EA0;

typedef struct Obj00220E90 {
    u8 pad[0xA8];
    s32 unk_A8;
} Obj00220E90;

extern void func_00220350();

typedef struct Obj {
    unsigned char unk_0[0xA8];
    int unk_A8;
} Obj;

extern void func_0021FC50();

typedef struct Obj00220DD0 {
    u8 pad[0x48];
    u8 unk_48;
} Obj00220DD0;

typedef struct Obj00220E20 {
    u8 pad_00[0xA8];
    s32 unk_A8;
} Obj00220E20;

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220790", func_00220790);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220790", func_002208D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220790", func_00220920);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220790", func_00220950);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220790", func_00220980);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220790", func_002209C0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220790", func_002209F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220790", func_00220C20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220790", func_00220C90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220790", func_00220CD0);

void func_00220DD0(Obj00220DD0 *o)
{
    func_0021FC50(&o->unk_48);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220790", func_00220DE0);

s32 func_00220E20(Obj00220E20 *o, s32 value)
{
    s32 old = o->unk_A8;
    o->unk_A8 = value;
    return old;
}

int func_00220E30(Obj *p)
{
    return p->unk_A8;
}

void func_00220E40(Obj *o)
{
    o->unk_A8 = 1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220790", func_00220E50);

void func_00220E90(Obj00220E90 *o)
{
    o->unk_A8 = 0;
}

void func_00220EA0(Obj00220EA0 *o)
{
    func_002202F0(&o->unk_48);
}

void func_00220EB0(Obj00220EA0 *o)
{
    func_00220350(&o->unk_48);
}

/* evidence: forwards its five arguments unchanged to sceMpegAddStrCallback and returns 1 */
int mpegAddStrCallback(void *mp, int strType, int ch, void *cb, void *data)
{
    sceMpegAddStrCallback(mp, strType, ch, cb, data);
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00220790", func_00220EE0);
