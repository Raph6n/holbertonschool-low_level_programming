#include <stdio.h>
#include "main.h"

void print_chessboard(char (*a)[8])

{

  int w;
  int b;

  for (w = 0; w < 8; w++)
   {
  for (b = 0; b < 8; b++)
    {
      printf("%c", a[w][b]);
    }
      printf("\n");
   }
}
