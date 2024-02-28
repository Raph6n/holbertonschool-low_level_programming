#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap 2 int value
 * Return: 0
 * @a: variable
 * @b: variable
 */

void swap_int(int *a, int *b)

{
int c;

c = *a;
*a = *b;
*b = c;
}
