#include <stdio.h>

/**
 *
 * - main putchar base 16
 *Return: Always return 0.
 */

int main(void)
{
float base;

for (base = 0; base < 16; base++)
putchar((base % 16) + '0');

putchar('\n');

return (0);
}

