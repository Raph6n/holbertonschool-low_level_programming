#include <stdio.h>

typedef struct op
{
  char *op;
  int (*f)(int a, int b);
} op_t;
