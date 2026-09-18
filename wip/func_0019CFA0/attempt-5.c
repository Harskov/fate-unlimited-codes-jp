typedef struct Node {
    unsigned char unk_0[8];
    struct Node *next;
} Node;

typedef struct Obj {
    unsigned char unk_0[0x24F0];
    Node *unk_24F0;
} Obj;

int func_0019CFA0(Obj *arg0, int arg1)
{
    Node *n;
    int i;

    if (arg0 == 0)
        return 0;
    n = arg0->unk_24F0->next;
    i = 0;
    if (arg1 > 0) {
        do {
            if (n == 0)
                break;
            i++;
            n = n->next;
        } while (i < arg1);
    }
    if (n == 0)
        return 0;
    return n->unk_0[0];
}
