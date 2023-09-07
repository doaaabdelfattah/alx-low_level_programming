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
for (i = 0; i < nmemb; i++)
{
void *currentptr = (char *)ptr + (i * size);
*(int *)currentptr = 0;
}
return (ptr);
}

