typedef struct Node {
    unsigned char pad[0xC];
    struct Node *next;
} Node;

typedef struct Entry {
    Node *node;
} Entry;

typedef struct Obj {
    unsigned char pad[0x23FC];
    int field;
} Obj;

extern int D_0051D8B4[];
extern Entry D_0051C858[];

void func_001AB2B0(Obj *arg0)
{
    int v;
    int i;
    Node *n;
    Node *m;
    Entry *e;

    if (D_0051D8B4[0] == 0)
        return;

    v = *(int *)(D_0051D8B4[0] + 0xB4);

    if (arg0 != 0) {
        arg0->field = v;
    } else {
        i = 0;
        e = D_0051C858;
        do {
            n = e->node->next;
            if (n != 0) {
                do {
                    m = n->next;
                    *(int *)(n->pad + 0x23FC) = v;
                    n = m;
                } while (n != 0);
            }
            i++;
            e++;
        } while (i < 2);
    }
}
