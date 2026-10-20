#include "common.h"
#include "types.h"

typedef struct Obj002D4728 {
    u8 pad0[0x10];
    void *unk10;
} Obj002D4728;

void func_002DA800(void *p);

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002D4528", func_002D4528);

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002D4528", func_002D46D8);

int func_002D4728(Obj002D4728 *obj)
{
    func_002DA800(obj->unk10);
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/game_render/unit_002D4528", func_002D4748);
