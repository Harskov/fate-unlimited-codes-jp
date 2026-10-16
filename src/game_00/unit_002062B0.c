#include "common.h"

extern void DelayThread(int usec);

extern char D_00501958[];

char *strcpy(char *dst, const char *src);

char *strcat(char *dst, const char *src);

s32 sceOpen(const char *path, s32 flags);

s32 sceLseek(s32 fd, s32 offset, s32 whence);

s32 sceWrite(s32 fd, void *buf, s32 size);

s32 sceClose(s32 fd);

extern char D_00501948[];

s32 sceRead(s32 fd, void *buf, s32 size);

int func_002062B0(void)
{
    return 0;
}

int func_002062C0(void)
{
    return 0;
}

int func_002062D0(void)
{
    return -2;
}

int func_002062E0(void)
{
    return 0;
}

void func_002062F0(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_00206300);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_00206430);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_00206550);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_00206600);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_00206870);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_00206A10);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_00206A80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_00206AA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_00206B50);

void func_00206B80(void)
{
    DelayThread(0x40D8);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_00206B90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_00206C20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_00206C90);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_00206D20);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_00206DC0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_00206ED0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_00206F70);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_00207010);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_00207090);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_002071B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_002062B0", func_00207250);
