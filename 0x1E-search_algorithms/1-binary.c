#include "search_algos.h"
/**
 * binary_search - searches using the Binary search algorithm
 * @array: array of integers (SORTED)
 * @size: size of array
 * @value: value to be searched for
 * Return: int
 */
int binary_search(int *array, size_t size, int value)
{
size_t l, r, mid, i;
l = 0;
r = size - 1;

if (array == NULL)
return (-1);

while (l <= r)
{
printf("Searching in array: ");
for (i = l; i < r; i++)
{
printf("%d, ", array[i]);
}
printf("%d\n", array[i]);
mid = l + (r - l) / 2;
if (value == array[mid])
return (mid);
if (value < array[mid])
r = mid - 1;
else
l = mid + 1;
}
return (-1);
}
