#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * array_range - fction
 * @min: var
 * @max: var
 * Return: p
 */

int *array_range(int min, int max)

{
int *p;
int ecart, i;

if (min > max)
{
return (NULL);
}
ecart = max - min + 1;
p = malloc(ecart * sizeof(*p));

if (p == NULL)
{
return (NULL);
}
for (i = 0; i < ecart; i++)
p[i] = min + i;
return (p);
}
   
