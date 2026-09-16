typedef struct Node {
    struct Node *next;
} Node;

void *func_00177B00(Node **head)
{
    Node *n;

    n = *head;
    if (n == 0)
        return 0;
    *head = n->next;
    return (void *)(n + 1);
}
