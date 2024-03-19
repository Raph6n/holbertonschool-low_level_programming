#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - fction var
 * @n: var
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
int sum;
  
if (n == 0)
{
return (0);
}
va_list args;
va_start(args,n);

for (int i = 0; i < n; i++)
{
sum += va_args(args, int);
}
va_end(args);
return (sum);
}
      
