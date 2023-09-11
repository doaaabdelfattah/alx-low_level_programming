#include "dog.h"
#include <stdio.h>
/**
* init_dog - initialize a variable of type struct dog
* @d: pointer to struct
* @name: name
* @age: age
* @owner: owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
if (d->name != NULL)
d->name = name;
if (d->age > 0)
d->age = age;
if (d->owner != NULL)
d->owner = owner;
}
else
return;
}
