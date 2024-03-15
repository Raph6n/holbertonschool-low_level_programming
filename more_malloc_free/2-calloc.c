#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - fonction
 * @nmemb: var
 * @size: var
 * Return: p
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

unsigned int i;
char *p;

if (nmemb == 0 || size == 0)
{
return (NULL);
}
p =(char*)malloc(nmemb * size);
if (p == NULL)
{
return (NULL);
}
for ( i = 0; i < nmemb * size; i++)
{
p[i] = 0;
}
return(void *)p;
}
