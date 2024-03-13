#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_ncontat - fction
 * @s1: var
 * @s2: var
 * @n: var
 * Return: nouvelle
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

int compte_1 = 0, compte_2 = 0, i, nouvelle_taille;
char *nouvelle;

while (s1 != NULL && s1[compte_1] != '\0')
{
compte_1++;
}
while (s2 != NULL && s2[compte_2] != '\0' && compteur_2 < n)
{
compteur_2++;
}
nouvelle_taille = compte_1 + compte_2 + 1;
 
nouvelle =(char *)malloc(nouvelle_taille * (sizeof(char));
if (nouvelle == NULL)
{
return (NULL);
}
for (i = 0; i < compte_1; i++)
{
nouvelle[i] = s1[i];
}
for (i = 0; i < compte_2; i++)
{
nouvelle[compte_1 + compte_2 = '\0'];
return (nouvelle);
}
