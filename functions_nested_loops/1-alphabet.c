#include "main.h"
#include <stdio.h>

/**
 * prints the alphabet, in lowercase
 * void print_alphabet(void)
 *
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
