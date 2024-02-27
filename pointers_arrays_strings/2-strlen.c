#include "main.h"
#include <stdio.h>

int _strlen(char *s)

{
    int compter = 0;
while (*s != '\0')
  {
compter++;
s++;
    }
    return compter;
}
