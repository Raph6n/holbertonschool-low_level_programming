#include "main.h"

/**
 * print_rev - reverse string
 * Return: 0
 * @s: variable pointeur s
 */

void print_rev(char *s)

{

  char *t = s

    while (*t != '\0')
      {
	(t++);
      }
  for (t--; t >= s; t--)
    {
      _putchar(*t)
	}
  
