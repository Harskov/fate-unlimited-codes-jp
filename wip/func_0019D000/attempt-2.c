typedef struct Node {
    unsigned char unk_0[0xC];
    struct Node *unk_C;
} Node;

extern Node *D_0051C858[];

Node *func_0019D000(int i)
{
    Node *n = D_0051C858[i];
    Node *r = 0;
    if (n != 0) {
        if (n->unk_C != 0) {
            r = n->unk_C->unk_C;
        }
    }
    return r;
}
