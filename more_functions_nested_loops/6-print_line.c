x#include "main.h"

void print_line(int n)

{
if (n <= 0)
{
_putchar('\n');
}
else
{
int a;

for (a = 1; a <= n; a++)
{
_putchar('_');
}
_putchar('\n');
}

}
