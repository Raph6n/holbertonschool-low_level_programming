#include "main.h"

/**
 * print_rev - reverse string
 * Return: 0
 * @s: variable pointeur s
 */

void print_rev(char *s)

{
if (*s)
{
print_rev(s + 1);
_putchar(*s);
}
}
  
