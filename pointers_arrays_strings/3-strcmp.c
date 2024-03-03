#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compare strings
 * Return: result of *s1 - *s2
 * @s1: var 1
 * @s2: var 2
 */


int _strcmp(char *s1, char *s2)

{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return(*s1 - *s2)
}
