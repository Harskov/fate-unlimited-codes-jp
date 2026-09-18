typedef struct Node {
    unsigned char unk_0[0xC];
    struct Node *unk_C;
} Node;

extern Node *D_0051C858[];

Node *func_0019D000(int i)
{
    Node *n = D_0051C858[i];
    if (n == 0)
        return 0;
    if (n->unk_C == 0)
        return 0;
    return n->unk_C->unk_C;
}
