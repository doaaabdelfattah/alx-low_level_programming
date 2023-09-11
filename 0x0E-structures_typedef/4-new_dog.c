#include "dog.h"
#include <stdio.h>
#include <string.h>
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
dog_t my;
ptr = &my;
if(name == NULL || owner == NULL || age < 0)
{
	return (NULL);
}
strcpy(ptr->name, name);
strcpy(ptr->owner, owner);
ptr->age = age;
return (ptr);

}
