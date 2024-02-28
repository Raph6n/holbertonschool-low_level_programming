#include "main.h"
#include <stdio.h>

/**
 * _strlen - retourner taille string
 * Return: compter
 * @s: variable s
 */

int _strlen(char *s)

{
int compter = 0;
while (*s != '\0')
{
(compter++);
(s++);
}
return (compter);
}
