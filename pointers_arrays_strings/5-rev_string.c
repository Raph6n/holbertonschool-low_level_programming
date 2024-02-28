#include "main.h"
#include <stdio.h>

void rev_string(char *s)

{
char *t = s;
while (*t != '\0')
{
t++;
}
t--;  

while (s < t)
{
char u = *s;
*s = *t;
*t = u;
s++;
t--;
}
}
