int func_00175B10(float t)
{
    float v;
    int n;

    v = 60.0f * t;
    if (v > 0.0f)
        n = (int)(0.5f + v);
    else
        n = (int)(v - 0.5f);

    if (n < 0)
        n = 0;
    return n;
}
