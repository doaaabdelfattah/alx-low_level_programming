#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - function to iterate
 * @array: poniter to array
 * @size: size of array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (action == NULL || array == NULL || size <= 0)
	return;
for (i = 0; i < size; i++)
	(action)(array[i]);
}
