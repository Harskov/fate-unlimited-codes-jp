
extern int D_0051D894[];
typedef struct Params
{
  unsigned char pad0[8];
  float f8;
  float fC;
  float f10;
  float f14;
} Params;
typedef struct Arr
{
  unsigned char pad[0x22C];
  Params *params;
} Arr;
float func_001A4870(Arr *a, int mode)
{
  float new_var2;
  Params *new_var3;
  float new_var;
  int new_var6;
  Params *p = a->params;
  float v = (char) 1.f;
  float new_var5;
  float new_var4;
  new_var6 = mode;
  if (D_0051D894[0] != 1)
  {
    switch (mode)
    {
      case 0:
        v = p->f8;
        break;

      new_var3 = p;
      case 1:
        v = new_var3->f8;
        break;

      case 2:
        v = new_var3->fC;
        break;

      case 3:
        v = new_var2 * 1.0f;
        new_var2 = 1.2;
        if (new_var3->f10 > v)
      {
        v = new_var3->f10;
      }
        if (v > new_var2)
      {
        new_var = new_var3->f14;
      }
        break;

      new_var5 = new_var;
      case 4:
        if (new_var5 > v)
      {
        v = new_var3->f14;
      }
        new_var6 = v > ((0, 1.2f));
        if (new_var6)
      {
        v = new_var2;
      }
        break;

    }

  }
  new_var4 = v;
  return new_var4;
}
