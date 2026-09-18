typedef struct Node {
    unsigned char unk_0[0xC];
    struct Node *next;
} Node;

extern Node *D_0051C858[];

void func_0019C690(void)
{
    Node *p;
    Node *q;
    int i;

    i = 0;
    do {
        p = D_0051C858[i];
        if (p != 0) {
            q = p->next;
            if (q != 0) {
                do {
                    q = q->next;
                } while (q != 0);
            }
        }
        i++;
    } while (i < 2);
}
