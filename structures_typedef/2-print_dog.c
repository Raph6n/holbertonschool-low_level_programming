#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)

{
if (d == NULL)
{
return;
}
if (d->name == NULL)
{
printf("(nil)\n");
}
else
{
printf("name: %s\n", d->name);
}
if (d->age < 0)
{
printf("(nil)\n");
}
else
{
printf("age: %f\n", d->age);
}
if (d->owner == NULL)
{
printf("(nil)\n");
}
else
{
printf("owner: %s\n", d->owner);
}
}
