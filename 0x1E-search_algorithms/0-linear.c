#include "search_algos.h"
/**
 * linear_search - searches using the Linear search algorithm
 * @array: array to search in it
 * @size: size of array
 * @value: value
 * Return: index if present or -1 if failed
 */
int linear_search(int *array, size_t size, int value)
{
size_t i;

if (array != NULL)
{
for (i = 0; i < size; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (value == array[i])
{
return (i);
break;
}
}
if (i == size)
return (-1);
}
return (-1);
}
