#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 *Return: Always 0.
 */

int main(void)
{
int base10;

for (base10 = 0; base10 < 10; base10++)
printf("%d", base10);
printf("\n");
return (0);
}
