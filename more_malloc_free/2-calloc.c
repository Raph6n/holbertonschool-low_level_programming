#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void *_calloc(unsigned int nmemb, unsigned int size)
{

if (nmemb == 0 || size == 0)
{
return (NULL);
}
