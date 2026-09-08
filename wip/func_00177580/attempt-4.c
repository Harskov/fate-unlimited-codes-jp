void func_00177580(void **head, void **p)
{
    void *old = *head;

    *head = p - 1;
    p[-1] = old;
}
