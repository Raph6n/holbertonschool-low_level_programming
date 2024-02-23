#include "main.h"

int _abs(int number)

{
  if (number > 0)
    {
      number = number * -1;
	}
  else if (number < 0)
    {
      number = number -1;
	}
  return (number);
}
