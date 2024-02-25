#include "main.h"

/**
 * print_last_digit - print
 * Return: variable
 * @lst: variable
 */

int print_last_digit(int lst)

{
if (lst >=  0)
{
lst = lst % 10;
_putchar('0' + lst);
}

else if (lst < 0)
{
lst = lst % 10 * (-1);
_putchar('0' + lst);
}

return (lst);
}
