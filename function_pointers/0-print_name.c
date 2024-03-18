#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - fction
 * @name: var
 * @f: var
 */

void print_name(char *name, void (*f)(char *))

{
if (name != NULL && f != NULL)
{
printf("My name is %s\n", name);
}
}
