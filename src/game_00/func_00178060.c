typedef struct Node {
    int f0;
    struct Node *next;
    struct Node *prev;
} Node;

void func_00178060(Node *n)
{
    n->f0 = 1;
    n->next = n;
    n->prev = n;
}
