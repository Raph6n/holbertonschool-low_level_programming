#include "main.h"

int main()

{
int a;

for(a = 1;a <= 100;a++)
{
  if (a % 3 == 0 && a % 5 == 0)
    {
      _putchar("FizzBuzz");
    }
  else if (a % 3 == 0)
    {
      _putchar("Fizz");
    }
  else if (a % 5 == 0)
    {
      _putchar("Buzz");
    }
  else
    {
      _putchar(a);
    }
 }
}
      
