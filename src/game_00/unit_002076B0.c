#include "common.h"
#include "types.h"

extern s32 D_00522C78[];

void func_00207CE0(void);

extern s32 D_00522C80[];

extern char *D_003D7BB0[];

char *strcpy(char *dst, const char *src);

char *strstr(const char *, const char *);

typedef struct Obj_00207E60 {
    s32 unk_0;
    s32 unk_4;
    u8 unk_8;
} Obj_00207E60;

typedef struct Obj_002084D0 {
    u8 unk_0[0x10];
    s32 unk_10;
} Obj_002084D0;

extern s32 D_00522C70[];

s32 func_002076B0(char *arg0)
{
    char *found = strstr(arg0, D_003D7BB0[0]);
    if (found != 0 && found == arg0) {
        return 1;
    }
    return 0;
}

char *func_00207700(char *dst)
{
    if (dst != 0) {
        strcpy(dst, D_003D7BB0[0]);
    }
    return D_003D7BB0[0];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_00207730);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_00207790);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_002077F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_00207830);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_00207940);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_00207980);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_00207AC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_00207B70);

void func_00207CD0(void)
{
    func_00207CE0();
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_00207CE0);

void func_00207E60(Obj_00207E60 *arg0)
{
    arg0->unk_0 = 0;
    arg0->unk_4 = 0;
    arg0->unk_8 = 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_00207E70);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_00207F00);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_00207F50);

s32 func_00207F70(void)
{
    return D_00522C78[0];
}

s32 *func_00207F80(void)
{
    return D_00522C80;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_00207F90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_00208120);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_00208180);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_002081D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_00208200);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_00208280);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_00208300);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_00208410);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_00208470);

s32 func_002084D0(Obj_002084D0 *arg0)
{
    return arg0->unk_10 + D_00522C70[0];
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_002084F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_00208570);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_00208660);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_00208700);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002076B0", func_00208740);
