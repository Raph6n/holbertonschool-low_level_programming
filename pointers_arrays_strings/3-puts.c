#include "main.h"

/**
 * _puts - print a string stdout
 * Return: 0
 * @str: variable
 */

void _puts(char *str)

{

while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
