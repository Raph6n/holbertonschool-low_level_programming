#include "main.h"
#include <stdio.h>

void print_array(int *a, int n)

{

int b;

for (b = 0; b < n; b++)
{
if (b == 0)
printf("%d", a[b]);
else
printf(", %d", a[b]);
}
printf("\n");
}

  
  
