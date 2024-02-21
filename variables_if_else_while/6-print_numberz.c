#include <stdio.h>

/**
 * main - base 10 with putchar
 *
 *Return: Always 0.
 */

int main(void)
{
int base;

for (base = 0; base < 10; base++)
  putchar((base % 10) + '0');

putchar('\n');

return (0);
}

