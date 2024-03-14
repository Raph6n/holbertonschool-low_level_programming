#ifndef dog_h
#define dog_h

#include <stdio.h>

/**
 * struct dog - structure
 * @age: var
 * @name: var
 * @owner: var
 */

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);




#endif
