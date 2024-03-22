#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - fction add
 * @a: var int
 * @b: var int
 * Return: result
 */


int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - fction less
 * @a: var
 * @b: var
 * Return: result
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - fction
 * @a: var
 * @b: var
 * Return: result
 */


int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - fction
 * @a: var
 * @b: var
 * Return: result
 */

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
/**
 * op_mod - fction
 * @a: var
 * @b: var
 * Return: result
 */

int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
