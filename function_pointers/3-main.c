#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
  int nu1, nu2, result;
  int (*op_func)(int, int);

  if (argc != 4)
    {
      printf("Error\n");
      return (98);
    }
  nu1 = atoi(argv[1]);
  nu2 = atoi(argv[3]);

  op_func = get_op_func(argv[2]);

  if (!op_func)
    {
      printf("Error\n");
      return (99);
    }
  result = op_func(nu1, nu2);
  printf("%d\n", result);
  return (0);
}
