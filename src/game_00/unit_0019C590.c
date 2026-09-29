#include "common.h"

extern int D_00523EB4[];

extern int D_00523EB8[];

extern int D_00523EBC[];

extern int D_00523EC0[];

extern int D_00523EC4[];

extern void func_00211130(int size);

typedef struct Node {
    unsigned char unk_0[0xC];
    struct Node *next;
} Node;

extern Node *D_0051C858[];

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019C590", func_0019C590);

int func_0019C690(void)
{
    int i;
    Node *p;
    for (i = 0; i < 2; i++) {
        p = D_0051C858[i];
        if (p != 0) {
            p = p->next;
            if (p != 0) {
                do {
                    p = p->next;
                } while (p != 0);
            }
        }
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019C590", func_0019C6F0);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019C590", func_0019C740);

void func_0019C7F0(int a, int b, int c)
{
    D_00523EB4[0] = a;
    D_00523EB8[0] = b;
    D_00523EBC[0] = c;
    D_00523EC0[0] = 0;
    D_00523EC4[0] = 0;
    func_00211130(0x1000);
}

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019C590", func_0019C820);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019C590", func_0019C930);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019C590", func_0019CA40);

INCLUDE_ASM("asm/nonmatchings/game_00/unit_0019C590", func_0019CAD0);
