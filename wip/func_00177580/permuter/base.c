void func_00177580(void **head, void **p)
{
    p[-1] = *head;
    *head = p - 1;
}
