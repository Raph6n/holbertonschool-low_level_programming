#include "main.h"
#include <stdio.h>

/**
 * _isupper - check uppercase caracter
 * Return: 1 or 0
 * @c: variable c
 */

int _isupper(int c)

{
if ((c >= 'A') && (c <= 'Z'))
return (1);
else
return (0);

}
