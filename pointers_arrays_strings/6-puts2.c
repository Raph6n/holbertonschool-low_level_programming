#include "main.h"

/**
 * puts2 - print 1 caracter on 2
 * Return: 0
 * @str: variable, on intitie & a 0 donc premiere lettre du tableru, tant que le caractere du tableau nest pas nul, on affiche une lettre sur 2
 */

void puts2(char *str)

{

int a = 0;

while (str[a] != '\0')
{
_putchar(str[a]);
a += 2;
}
_putchar('\n');
}

