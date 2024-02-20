#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (last digit of n is greater than 5)
	{
	  printf("the string and is greater than 5");
	}
	else if (the last digit of n is 0)
	{
	  printf("the string and is 0");
	}
	else (if the last digit of n is less than 6 and not 0)
	{
	    printf("the string and is less than 6 and not 0");
	}
	return (0);
}
