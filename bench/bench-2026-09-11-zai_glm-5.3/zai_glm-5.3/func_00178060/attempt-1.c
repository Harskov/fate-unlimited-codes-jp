typedef struct Node {
    int state;
    struct Node *prev;
    struct Node *next;
} Node;

void func_00178060(Node *n)
{
    n->state = 1;
    n->prev = n;
    n->next = n;
}
