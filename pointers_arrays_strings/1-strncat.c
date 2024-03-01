#include "main.h"
#include "main.h"

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
return (dest)
