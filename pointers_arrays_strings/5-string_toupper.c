#include "main.h"
#include <stdio.h>

/**
 * *string_toupper - transform lowercase to uppercase
 * Return: 0
 * @upper: variable min
 */

char *string_toupper(char *upper)
{
char *lower = upper;

while (*lower != '\0')
{
if (*lower >= 'a' && *lower <= 'z')
{
*lower = *lower - 'a' + 'A';
}
lower++;
}
return (upper);
}
