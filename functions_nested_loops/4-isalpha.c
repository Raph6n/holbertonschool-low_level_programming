#include "main.h"

/**
 * _isalpha - alphabet
 * Return: 1 or 0
 * @c: coding
 */

int _isalpha(int c)

{
if (((c >= 'a') && (c <= 'z'))
|| ((c >= 'A') && (c <= 'Z')))
return (1);
return (0);
}

