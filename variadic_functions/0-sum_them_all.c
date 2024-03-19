#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - fction var
 * @n: var
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
int sum;
unsigned int i = 0;
va_list args;

if (n == 0)
{
return (0);
}
va_start(args, n);

for (i = 0; i < n; i++)
{
sum += va_arg(args, int);
}
va_end(args);
return (sum);
}
