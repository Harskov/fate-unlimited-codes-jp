#include "common.h"
#include "types.h"

typedef struct Key {
    s32 id;
} Key;

typedef struct Node {
    Key *key;
    s32 unk_4;
    struct Node *next;
} Node;

extern Node *D_00527A14[];

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_00222930);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_002229D0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_00222A70);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_00222B80);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_00222C50);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_00223130);

void func_00223240(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_00223250);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_002235A0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_00223760);

void func_00223840(void)
{
}

void func_00223850(void)
{
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_00223860);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_002238B0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_00223940);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_00223A60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_00223BE0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_00223CA0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_00223D60);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_00223E00);

s32 func_00223EA0(s32 arg0)
{
    Node *n;

    n = D_00527A14[0];
    while ((s32)n->key != 1) {
        if (n->key->id == arg0) {
            return 1;
        }
        n = n->next;
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_00223EF0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_00223F70);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_00223FD0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_00222930", func_00224030);
