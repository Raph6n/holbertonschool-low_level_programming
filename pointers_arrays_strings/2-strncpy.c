#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copier la string
 * Return: char copie
 * @dest: var col
 * @src: var source
 * @n: compter
 */

char *_strncpy(char *dest, char *src, int n)

{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for ( ; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
