typedef struct Node {
    struct Node *next;
} Node;

void func_00177580(Node **head, Node *p)
{
    p[-1].next = *head;
    *head = p - 1;
}
