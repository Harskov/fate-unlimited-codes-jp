void func_00177580(void **head, void **p)
{
    void **np;
    void *old;

    old = *head;
    np = p - 1;
    p[-1] = old;
    *head = np;
}
