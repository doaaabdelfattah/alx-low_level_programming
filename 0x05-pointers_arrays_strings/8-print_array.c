#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to array
 * @n: the number of element
 *
 */

void print_array(int *a, int n)
{
int i;
for (i = 0; i <= n - 1; i++)
{
printf("%i", a[i]);
if (i != n - 1)
{
printf(", ");
}
}
printf("\n");
}
