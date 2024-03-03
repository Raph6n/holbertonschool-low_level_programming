#include <stdio.h>
#include "main.h"

char *cap_string(char a*)

{
int majnext = 1;
int i;

for (i = 0; a[i] != '\0'; i++)
{
if (majnext && (a[i] >= 'a' && a[i] <= 'z'))
{
a[i] -= ('a' - 'A');
}
if (a[i] == ' ' || a[i] == '\t' || a[i] == '\0' || a[i] == ','||
a[i] == ';' || a[i] == '.' || a[i] == '!' || a[i] == '?' ||
a[i] == '"' || a[i] == '(' || a[i] == ')' || a[i] == '{' || a[i] == '}')
}
majnext = 1;
}
else
{
majnext = 0;
 }
}
return (a);
}
