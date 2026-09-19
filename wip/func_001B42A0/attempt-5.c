typedef int s32;

extern s32 D_0051D728[];
extern s32 D_0051D748[];

typedef struct Node {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} Node;

void func_001B42A0(void)
{
    Node *node;
    Node *list;
    Node *cur;
    s32 i;
    s32 found;

    node = (Node *)D_0051D748[0];
    i = 0;
    do {
        i++;
        found = 0;
        list = node;
        cur = node;
        if (node->unk0 != 1) {
            do {
                cur = (Node *)cur->unk14;
                if (cur == (Node *)-1)
                    break;
                if (cur == (Node *)i) {
                    found = 1;
                    break;
                }
                list = (Node *)list->unk8;
                cur = (Node *)list->unk0;
            } while (cur != (Node *)1);
        }
    } while (found != 0);
    D_0051D728[0] += 1;
}
