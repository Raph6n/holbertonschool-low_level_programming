#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main (int argc, char *argv[])
{
int nu1, nu2, result;
int (*op)(int, int);
char *str;

if (argc != 4)
{
printf("Error\n");
return (98);
}
nu1 = atoi(argv[1]);
nu2 = atoi(argv[3]);
str = argv[2];

 if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
   {
     printf("Error\n");
     return (99);
   }
 if ((*str == '/' || *str == '%') && (*argv[3] == '0'))
   {
     printf("Error\n");
     return (100);
   }
 op = get_op_func(str);
 result = op(nu1, nu2);

 printf("%d\n", result);
 return (0);
}
 
 

