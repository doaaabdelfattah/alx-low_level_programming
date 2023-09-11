#include "main.h"
#include <stdlib.h>
/**
* free_dog - free struc
* @d: pointer
*/
void free_dog(dog_t *d)
{
free(d->name);
free(d->owner);
free(d->age);
free(d);

}
