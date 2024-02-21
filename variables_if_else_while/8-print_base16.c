#include <stdio.h>

/**
 * main - prints all number in lowercase of base 16
 * Return: Always return 0.
 */

int main(void)
{
int basen;
char basel;

for (basen = 0; basen < 10; basen++)
putchar((basen % 10) + '0');

for (basel = 'a'; basel <= 'f'; basel++)
putchar(basel);

putchar('\n');

return (0);
}

