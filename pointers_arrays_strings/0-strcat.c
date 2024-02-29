#include "main.h"
#include <stdio.h>

/**
 * _strcat - suivi de 2 strings
 * return: variable stock
 * @dest: variable 1
 *@src: variable 2
 */

char *_strcat(char *dest, char *src)

{

char *stock = dest;
 while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return stock;
}
 
