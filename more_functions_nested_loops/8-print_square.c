#include "main.h"

/**
 * print_square - print a square
 * Return: void
 * @size: variable
 */

void print_square(int size)

{
if (size <= 0)
{
_putchar ('\n');
}
else
{
int a, b;

for (a = 0; a < size; a++)
{
for (b = 0; b < size; b++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
