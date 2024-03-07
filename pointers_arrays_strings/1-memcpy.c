#include <stdio.h>
#include "main.h"

/**
 * _memcpy - fonction
 * @dest: var char 1
 * @src: var char 2
 * @n: var int 1
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
