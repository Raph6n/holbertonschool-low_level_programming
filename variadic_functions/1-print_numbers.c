#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - fction
 * @separator: var
 * @n: var
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{

va_list others;
unsigned int i;

va_start(others, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(others, int));

if (separator != NULL && i < (n - 1))
{
printf("%s", separator);
}
}
va_end(others);
printf("\n");
}
