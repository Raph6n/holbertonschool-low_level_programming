#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
 
