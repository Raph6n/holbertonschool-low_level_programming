#include "main.h"
#include <stdio.h>

char *_strcat(char *dest, char *src)

{

char stock = dest;
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
 
