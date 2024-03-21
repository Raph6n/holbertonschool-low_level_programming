#include <stdio.h>
#include "variadic_functions"

void print_strings(const char *separator, const unsigned int n, ...)

{
  unsigned int i;
  va_list args;
  va_start(args, n);

  for (i = 0; i < n; i++)
    {
      
