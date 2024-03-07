#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - fonction
 * Return: 0
 *@s: var char 1
 *@accept: var char 2
 */

char *_strpbrk(char *s, char *accept)

{
int i;

while (*s != '\0')
{
for (i = 0; accept[i] != '\0'; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return (0);
}
