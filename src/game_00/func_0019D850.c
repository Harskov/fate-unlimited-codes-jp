typedef struct Node {
    unsigned char pad[0xC];
    struct Node *next;
    struct Node *prev;
} Node;

Node *func_0019D850(Node *n)
{
    Node *prev = n->prev;
    prev->next = n->next;
    if (n->next != 0)
        n->next->prev = prev;
    return prev->next;
}
