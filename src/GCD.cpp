  
#include "../includes/GCD.h"
#include <math.h>
int GCD(int a, int b)
{
  while (a != 0 and b != 0)
  {
        if (a >= b)
        {
            a %= b;
         }   
        else { 
            a %= b;
            }
   }        
    return a or b;
}
int RecursiveGCD(int a, int b)
{
   if (a == 0)
   {
        return b;
    }    
    return RecursiveGCD(b % a, a);
}
