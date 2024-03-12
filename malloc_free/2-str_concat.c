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
int i;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[taille_1]
{
taille_1++;
}
while (s2[taille_2])
{
taille_2++;
}
char *t1t2 =(char )malloc(taille_1 + taille_2 + 1);
if (t1t2 == NULL)
{
return (NULL);
}
for (i = 0; i < taille_1; i++)
{
t1t2[i] = s1[i]
}
for (i = 0; i < taille_2; i++)
{
t1t2[taille_1 + i] = s2[i];
}
t1t2[taille_1 + taille_2] = '\0';
return (t1t2);
}
