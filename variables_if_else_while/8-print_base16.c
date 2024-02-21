#include <stdio.h>

/**
 *
 * - main putchar base 16
 *
 */

int main(void)
{
double base;

for (base = 0; base < 16; base++)
putchar((base % 16) + '0');

putchar('\n');

return (0);
}

