#include "main.h"

/**
 * main - check letter c lowercase
 * Return: 1 or 0
 * @c: variable
 */
int _isalpha(int c)

{
if ((c >= 'a') && (c <= 'z'))
{
return (1);
}
return (0);
}
