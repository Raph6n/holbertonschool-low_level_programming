#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if( n < 0 )
	  printf ("Positive Number: %d\n", PositiveNumber);
	else if( n > 0 )
	  printf ("Negativenumber: %d\n",Negativenumber);
	else if( n = 0 )
	  printf ("Exact value of n is: %d\n", n );
	return (0);
}
