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
*dst =*src;
src++;
dest++;
}
*dst = '\0';
return (basedest);
}
