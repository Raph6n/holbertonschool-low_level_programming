#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - fonction rec
 * return: 0
 * @s: var char
 */


int _strlen_recursion(char *s)

{

if (*s == '\0')
{
return (0);
}
else
{ 
return (1 + _strlen_recursion(s + 1));
} 
}
