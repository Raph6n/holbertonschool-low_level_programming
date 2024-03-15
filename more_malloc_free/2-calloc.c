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
int *p;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

p = malloc(size * nmemb);

if (p == NULL)
{
return (NULL);
}
for (i = 0; i < nmemb; i++)
{
p[i] = 0;
} 
return (p);

}
