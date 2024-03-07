#include <stdio.h>
#include "main.h"

/**
 * _memset - fonction
 * Return: s
 * @s: var char 1
 * @b: var char 2
 * @n: var int 1
 */

char *_memset(char *s, char b, unsigned int n)

{

unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
