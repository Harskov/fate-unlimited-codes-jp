typedef struct Node {
    unsigned char unk_0[0xC];
    struct Node *next;
} Node;

extern Node *D_0051C858[];

void func_0019C690(void)
{
    Node **base;
    int i;
    Node *p;
    Node *q;

    base = D_0051C858;
    for (i = 0; i < 2; i++) {
        p = base[i];
        if (p != 0) {
            q = p->next;
            if (q != 0) {
                do {
                    q = q->next;
                } while (q != 0);
            }
        }
    }
}
