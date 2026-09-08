void func_00177580(void **head, void **p)
{
    void *old;
    void **np;

    old = *head;
    np = p - 1;
    p[-1] = old;
    *head = np;
}
