#include <stdio.h>
#include "main.h"

/**
 * array_range - fction
 * @min: var
 * @max: var
 * Return: p
 */

int *array_range(int min, int max);

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
for (i = 0; i < ecart; min++, i++)
{
p[i] = min;
return (p);
}
}
   
