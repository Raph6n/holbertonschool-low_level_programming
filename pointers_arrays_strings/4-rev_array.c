#include "main.h"
#include <stdio.h>

/**
 * reverse_array - fonction 
 * Return: 0
 * @a: var char
 * @n: var n
 */

void reverse_array(int *a, int n)

{
int stock;
int i;
for (i = 0; i < n / 2; i++)
{
stock = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = stock;
}
}
