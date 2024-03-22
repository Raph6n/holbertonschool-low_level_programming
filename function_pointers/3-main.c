#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main (int argc, char *argv[])
{
int nu1, nu2;
int (*op)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (argv[2][1])
{
printf("Error\n");
return (99);
}
 op = get_op_func(argv[2]);
 if (op == NULL)
   {
     printf("Error\n");
     exit (100);
   }
 nu1 = atoi(argv[1]);
 nu2 = atoi(argv[3]);
 printf("%d\n", op(nu1, nu2));
 return (0);
}

