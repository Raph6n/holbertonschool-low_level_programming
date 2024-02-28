#include "main.h"

/**
 * puts2 - print 1 caracter on 2
 * Return: 0
 * @str: variable
 */

void puts2(char *str)

{

int a = 0;

while (str[a] != '\0')
{
_putchar(str[a]);
a += 2;
}
_putchar('\n');
}

