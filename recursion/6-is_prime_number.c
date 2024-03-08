#include <stdio.h>
#include "main.h"

int is_prime_number(int n)

{

  int i;
  
  if (n <= 1) return 0;
  if (n <= 3) return 1;



 for (i = 2; i * i <= n; i++)
   {
     if (n % i == 0) return 0;
   }
     return (1);
   }

int main()
{
  printf("%d\n", is_prime_number (5));
  printf("%d\n", is_prime_number (12));

  return (0);
}
