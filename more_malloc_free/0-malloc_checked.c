#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - fction
 * @b: int var
 * Return: p
 */

void *malloc_checked(unsigned int b);
{
void *p;
p = malloc(b);
if (p == NULL)
{
exit (98);
return (p);
}
