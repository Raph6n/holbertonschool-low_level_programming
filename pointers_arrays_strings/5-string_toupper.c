#include "main.h"
#include <stdio.h>

/**
 * *string_toupper - transform lowercase to uppercase
 * Return: 0
 * 
 */

char *string_toupper(char *low)

{
int a;

for (a = 0; low[a] != '\0'; i++)
{
if (low[a] >= 'a' && low[a] <= 'z')
{
low[a] = low[a] - ('a' - 'A');
}
}
}
