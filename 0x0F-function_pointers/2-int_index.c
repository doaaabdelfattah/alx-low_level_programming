#include <stdio.h>
#include "function_pointers.h"
/**
* int_index - function search for integer
* @array: pointer to array
* @size: size of array
* @cmp: pointer to function
* Return: interger required
*/
int int_index(int *array, int size, int(*cmp)(int))
{
if (size <= 0 || cmp == NULL)
return (-1);
else
{
int i;
for (i = 0; i < size; i++)
{
if ((*cmp)(array[i]) != 0)
return (i);
}
}
return (-1);
}

