#include <stdio.h>
#include "main.h"

unsigned int _strspn(char *s, char *accept)

{

  int i = 0;
  int ii;

  while (s[i] != '\0')
    {
      ii = 0;
      while (accept[ii] != '\0' && s[i] != accept[ii])
	  ii++;
      if (accept[ii] == '\0')
	return i;
      i++;
    }
  return (i);
}
