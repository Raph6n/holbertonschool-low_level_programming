#include "main.h"
#include <stdio.h>

void swap_int(int *a, int *b)

{
  int c = *a;
  a* = *b;
  b* = c;
    }

int main(void)
{
  int d = 1;
    int e = 2;
    
    swap_int(&d, &e);
    printf("d = %d, e = %d\n" d,e);

    return (0);
}
