#include <stdio.h>

/**
 * init_dog - fction
 * @d: var
 * @name: var
 * @age: var
 * @owner: var
 */


void init_dog(struct dog *d, char *name, float age, char *owner)

{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
