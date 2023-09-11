#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
* new_dog - create new dog
* @name: name
* @age: age
* @owner: owner
* Return: pinter to struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *ptr;
if (name == NULL || owner == NULL || age < 0)
{
	return (NULL);
}
ptr = malloc(sizeof(dog_t));
if (ptr == NULL)
	return (NULL);

ptr->name = malloc(strlen(name) + 1);
ptr->owner = malloc(strlen(owner) + 1);
if (ptr->name == NULL || ptr->owner == NULL)
{
free(ptr->name);
free(ptr->owner);
free(ptr);
return (NULL);
}
strcpy(ptr->name, name);
strcpy(ptr->owner, owner);
ptr->age = age;

return (ptr);
}
