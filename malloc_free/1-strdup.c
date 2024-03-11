#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - fction
 * @str: var
 * Return: b
 */

char *_strdup(char *str)

{
int a = 0;
int i = 1;
char *b;

if (str == NULL)
{
return (NULL);
}
while (str[i])
{
i++;
}
b = malloc((sizeof(char) * i)+1);
if (b == NULL)
{
return (NULL);
}
while (a < i)
{
b[a] = str[a];
a++;
}
b[a] = '\0';
return (b);
}
