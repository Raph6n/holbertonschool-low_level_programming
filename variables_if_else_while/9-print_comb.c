#include <stdio.h>

int main(void)

{
int number1, number2;
 
for (number1 = 0; number1 <= 8; number1++)
{
for (number2 = number1 + 1; number2 <= 9; number2++)
{
putchar('0' + number1);
putchar('0' + number2);

if (!(number1 == 8 && number2 == 9))
{
putchar(','); 
putchar(' ');
}
}
}
return 0;
}

