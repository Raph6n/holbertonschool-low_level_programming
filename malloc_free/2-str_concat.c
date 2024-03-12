#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - fction
 * @s1: var char
 * @s2: var char
 * Return: t1t2
 */

char *str_concat(char *s1, char *s2)

{
int taille_1 = 0;
int taille_2 = 0;
int i = 0;
int ii = 0;
char *t1t2;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (i = 0; s1[i]; i++)
{
taille_1++;
}
for (i = 0; s2[i]; i++)
{
taille_2++;
}
t1t2 = malloc(sizeof(char) * (taille_1 + taille_2 + 1));
if (t1t2 == NULL)
{
return (NULL);
}
for (i = 0; s1[i]; i++)
{
t1t2[ii++] = s1[i];
}
for (i = 0; s2[i]; i++)
{
t1t2[ii++] = s2[i];
}
t1t2[ii] = '\0';
return (t1t2);
}
