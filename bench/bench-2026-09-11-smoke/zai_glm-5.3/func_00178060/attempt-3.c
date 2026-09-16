typedef struct Node {
    int state;
    struct Node *self;
    struct Node *back;
} Node;

void func_00178060(Node *n)
{
    n->state = 1;
    n->self = n;
    n->back = n;
}
