#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: start
 * @max: end
 * Return: pointer
 */
int *array_range(int min, int max)
{
int *ptr;
int i, size;
if (min > max)
return (NULL);

size = (max - min) + 1;
ptr = malloc(size *sizeof(int));
if (ptr == NULL)
return (NULL);

for (i = 0; i < size; i++)
	ptr[i] = min + i;
return (ptr);
}

