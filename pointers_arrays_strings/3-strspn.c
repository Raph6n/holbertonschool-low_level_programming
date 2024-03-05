#include <stdio.h>
#include "main.h"

unsigned int _strspn(char *s, char *accept)

{

int i = 0;

while (*s != 0)
{
char *c = accept;
 while (*c != 0)
   {
     if (*s == *c)
       {
	 i++;
	 break;
       }
     c++;
   }
 if (*c == 0)break;
 accept++;
 }

