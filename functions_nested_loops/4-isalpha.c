#include "main.h"

int _isalpha(int c)

{
if (((c >= 'a') && (c <= 'z'))
|| ((c >= 'A') && (c <= 'Z')))
return 1;
return 0;
}

int main ()
  
{_putchar (_isalpha ('a') + 48); 
  return 0;
}
