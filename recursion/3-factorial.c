#include <stdio.h>
#include "main.h"

/**
 * factorial - fction
 * return: depend
 * @n: variable
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
} 
else if (n == 0)
{  
return (1);
} 
else
{   
return (n * factorial(n - 1));
}
}
