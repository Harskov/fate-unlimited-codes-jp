typedef struct Node {
    s32 state;
    struct Node *self;
    struct Node *back;
} Node;

void func_00178060(Node *n)
{
    n->self = n;
    n->back = n;
    n->state = 1;
}
