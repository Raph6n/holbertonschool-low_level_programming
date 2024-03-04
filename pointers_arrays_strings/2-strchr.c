#include <stdio.h>
#include "main.h"

/**
 * _strchr - fonction
 * @s: variable 1
 * @c: variable 2
 */


char *_strchr(char *s, char c)

{

int i = 0;

while (*s != '\0)
{
if(*s == c)
{
return (s);
}
s++;
}
return (NULL);
}
