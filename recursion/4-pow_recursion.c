#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - fction qui retourne 2 entiers
 * Return: ff
 * @x: var 1
 * @y: var 2
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
