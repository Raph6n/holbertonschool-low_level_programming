#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copy with null
 * return: basedest
 * @dest: dest
 * @src: src
 */

char *_strcpy(char *dest, char *src)

{
char *basedest = dest;
  
while (*src != '\0')
{
*dest =*src;
src++;
dest++;
}
*dest = '\0';
return (basedest);
}
