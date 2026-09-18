typedef struct Node {
    unsigned char unk_0[0xC];
    struct Node *unk_C;
} Node;

extern Node *D_0051C858[];

Node *func_0019D000(int i)
{
    Node *n = D_0051C858[i];
    Node *r;

    if (n == 0)
        return 0;
    r = n->unk_C;
    if (r == 0)
        return 0;
    return r->unk_C;
}
