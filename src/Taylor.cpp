#include "../includes/Taylor.h"
#include <math.h>
double f(double x)
{
  double f = 0;
  for (int i = 0; i <= n; i++)
  {
      f += 2 * pow(x - 1, 2 * i + 1) / ((2n + 1) * pow(x + 1, 2 * i + 1))
  }
}
