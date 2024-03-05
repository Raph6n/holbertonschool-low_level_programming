#include <stdio.h>
#include "main.h"

unsigned int _strspn(char *s, char *accept)

{

  int i = 0;
  int b;

  while (s[i] != '\0')

    {
      b = 0;

      while (accept[b] != '\0' && s[i] != accept[b])
	b++;
      if (accept[b] == '\0')
	return (i);
      i++;
    }
  return (i);
}

