#include "search_algos.h"
/**
 * jump_search - searches using the jump search algorithm
 * @array: array of integers (SORTED)
 * @size: size of array
 * @value: value to be searched for
 * Return: int
 */
int jump_search(int *array, size_t size, int value)
{
size_t i, jump, step;

if (array == NULL || size == 0)
return (-1);

step = sqrt(size);
for (i = jump = 0; jump < size && array[jump] < value;)
{
printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
i = jump;
jump += step;
}

printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

jump = jump < size - 1 ? jump : size - 1;
for (; i < jump && array[i] < value; i++)
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
printf("Value checked array[%ld] = [%d]\n", i, array[i]);

if (array[i] == value)
{
return (i);
}
else
{
return (-1);
}
}
