int func_00176C30(volatile int *arr, int i, int v)
{
    int r = arr[i] + v;
    arr[i] = r;
    return arr[i];
}
