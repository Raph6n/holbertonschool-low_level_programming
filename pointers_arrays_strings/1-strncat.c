#include "main.h"
#include "main.h"

/**
 * *_strncat - concatenate 2
 * Return: dest
 * @dest: var char 1
 * @src: var char 2
 * @n: var int 
 */

char *_strncat(char *dest, char *src, int n)

{
char *stock = dest;

while (*stock != '\0')
{
stock++;
}
 while (*src != '\0' && n > 0)
{
*stock++ = *src++;
n--;
}
*stock = '\0';
return (dest);
