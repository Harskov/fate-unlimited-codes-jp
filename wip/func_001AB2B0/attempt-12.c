typedef struct Node {
    unsigned char pad[0xC];
    struct Node *next;
} Node;

typedef struct Obj {
    unsigned char pad[0x23FC];
    int field;
} Obj;

extern int D_0051D8B4[];
extern Node *D_0051C858[];

void func_001AB2B0(Obj *arg0)
{
    int v;
    Node *n;
    int i;

    if (D_0051D8B4[0] == 0)
        return;

    v = *(int *)((char *)D_0051D8B4[0] + 0xB4);

    if (arg0 != 0) {
        arg0->field = v;
    } else {
        for (i = 0; i < 2; i++) {
            n = D_0051C858[i]->next;
            if (n != 0) {
                do {
                    *(int *)((char *)n->next + 0x23FC) = v;
                    n = n->next;
                } while (n != 0);
            }
        }
    }
}
