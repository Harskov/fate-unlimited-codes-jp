#include "common.h"
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

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021F160", func_0021F160);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021F160", func_0021F190);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021F160", func_0021F280);

int func_0021F310(Obj0021F310 *p, void *buf, int nbyte)
{
    return sceRead(p->unk_30, buf, nbyte);
}

int func_0021F320(Obj38 *obj)
{
    func_0013AA00(obj->unk34);
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021F160", func_0021F340);

int func_0021F370(Obj0021F370 *obj)
{
    sceClose(obj->unk30);
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021F160", func_0021F390);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021F160", func_0021F420);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021F160", func_0021F4D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021F160", func_0021F570);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021F160", func_0021F5E0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021F160", func_0021F650);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021F160", func_0021F780);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021F160", func_0021F940);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021F160", func_0021F960);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0021F160", func_0021FA90);
