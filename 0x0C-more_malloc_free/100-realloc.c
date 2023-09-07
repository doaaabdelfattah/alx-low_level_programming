#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *_realloc -  reallocates a memory block using malloc and free
 *@ptr: old pointer
 *@old_size: old size
 *@new_size: new size
 *Return: void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *newptr;
if (new_size == old_size)
	return (ptr);

newptr = malloc(new_size);
if (newptr == NULL)
	return (NULL);

memcpy(newptr, ptr, old_size);
free(ptr);
return (newptr);
}

