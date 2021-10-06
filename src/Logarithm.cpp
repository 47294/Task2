#include "../includes/Logarithm.h"
#include <math.h>
int log2(int x)
{
  float logar = log(x) / log(2);
  if (logar == int (logar)) 
  {
		return logar;
  }
  else if (x <= 0)
  {
		return -2;
   }
  else 
  {
		return -1;
  }
}
