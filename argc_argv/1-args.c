#include <stdio.h>

/**
 * main - fonction
 * Return: 0
 * @argc: var int
 * @argv: var char
 */


int main(int argc,char *argv[])

{

int i;
for( i = 0; i < argc - 1; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
