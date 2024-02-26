#include "main.h"

void print_diagonal(int n)

{
  if (n <= 0)
    {
      _putchar ('\n');
      else
	{
	  int a, b;

	  for (a = 0; a < n; a++)
	    {
	      for (b = 0; b < n; b++)
		{
		  if (a == b)
		    _putchar ('\\');
		  
		  else (a > b)
			 _putchar(' ');
		}
	      _putchar('\n');
		}
	}
    }
			      
