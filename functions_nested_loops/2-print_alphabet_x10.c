#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - print alphabet x10 with putchar
 * Description: printing alphabet x10 with putchar
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
int count = 0;
char letter;

while (count++ <= 9)
{
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}

}

