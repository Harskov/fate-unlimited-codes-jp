typedef struct Node {
    unsigned char pad[0xC];
    struct Node *next;
} Node;

typedef struct Obj {
    unsigned char pad[0x23FC];
    int unk_23FC;
} Obj;

extern int D_0051D8B4[];
extern Node *D_0051C858[];

void func_001AB2B0(Obj *arg0)
{
    int v;
    Node *n;
    Node **p;
    int i;

    if (D_0051D8B4[0] == 0)
        return;

    v = *(int *)((char *)D_0051D8B4[0] + 0xB4);

    if (arg0 != 0) {
        arg0->unk_23FC = v;
    } else {
        p = D_0051C858;
        for (i = 0; i < 2; i++) {
            n = (*p)->next;
            while (n != 0) {
                *(int *)((char *)n->next + 0x23FC) = v;
                n = n->next;
            }
            p++;
        }
    }
}
