void func_00177580(void **head, void **p)
{
    void **np = p - 1;

    p[-1] = *head;
    *head = np;
}
