typedef struct Node {
    int unk_0;
    struct Node *next;
} Node;

void func_00167130();

void func_001795F0(Node *n, Node *m, Node *p)
{
    func_00167130(n, m, p->next);
}
