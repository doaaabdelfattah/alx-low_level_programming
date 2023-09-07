#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: array element
 * @size: size of array
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int i;
if (nmemb == 0 || size == 0)
	return (NULL);
ptr = malloc(sizeof(int) * size);
if (ptr == NULL)
	return (NULL);
for (i = 0; i < size; i++)
{
ptr = (int *)ptr + i;
*(int *)ptr = 0;
}
return (ptr);
}

