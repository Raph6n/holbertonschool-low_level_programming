#include <stdio.h>
#include "main.h"

int is_prime_number(int n)

{
if (n <= 1)
{
return (0);
}
if (n <= 3)
{
return (1);
}

int i;

 for (i = 2; i * i <= n; i++)
   {
     if (n % i == 0)
       {
	 return (0);
       }
     return (1);
   }
