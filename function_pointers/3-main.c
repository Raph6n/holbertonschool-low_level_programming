#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
int nu1, nu2, result;
int (*op)(int, int);

if (argc != 4)
{
  printf("Error\n");
return (98);
}
op = get_op_func(argv[2]);

if (op == NULL)
{
printf("Error\n");
return (99);
}
 nu1 = atoi(argv[1]);
   nu2 = atoi(argv[3]);
   result = op(a, b);
   printf("%d\n", result);
   return (0);
}
