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
va_list lesautres;
unsigned int i;
int somme = 0;

if (n == 0)
{
return (0);
}
va_start(lesautres, n);

for (i = 0; i < n; i++)
{
somme += va_arg(lesautres, int);
}
va_end(lesautres);
return (somme);
}
