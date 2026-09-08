
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
inline int inline_fn(float arg0)
{
  return arg0 > 1.2f;
}

float func_001A4870(Arr *a, int mode)
{
  float new_var;
  Params *p = a->params;
  float v = 1.0f;
  if (D_0051D894[0] != 1)
  {
    new_var = p->f10;
    switch (mode)
    {
      case 0:
        v = p->f8;
        break;

      case 1:
        if (1)
      {
        v = p->f8;
      }
        break;

      case 2:
        v = p->fC;
        break;

      case 3:
        if (new_var > v)
      {
        v = new_var;
      }
        if (inline_fn(v))
      {
        v = 1.2f;
      }
        break;

      case 4:
        if (p->f14 > v)
      {
        v = p->f14;
      }
        if (inline_fn(v))
      {
        v = 1.2f;
      }
        break;

    }

  }
  return v;
}
