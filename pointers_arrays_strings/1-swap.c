#include "main.h"
#include <stdio.h>

void swap_int(int *a, int *b)

{
  int c;
  *a = *b;
  *b = c;
}

int main()
{
  int d, e;

  printf("Enter value of d: ");
  scanf("%d" ,&d);
  printf("Enter value of e: ");
  scanf("%d" ,&e);

  printf("Befor swapping: d is:%d, e is: %d\n" ,d,e);

  swap_int(&d ,&e);

  printf("After swapping: d is: %d, e is: %d\" ,d,e);

  return 0;

}
