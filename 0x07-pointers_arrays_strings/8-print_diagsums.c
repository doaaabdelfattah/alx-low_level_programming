#include <stdio.h>
#include "main.h"
/**
 *print_diagsums - prints the sum of the two diagonals.
 *@a: parameter
 *@size: size of array
 *
 */

void print_diagsums(int *a, int size)
{
int i;
int d1 = 0;
int d2 = 0;
for (i = 0; i < size * size; i++)
{
if (i % (size + 1) == 0)
	d1 = d1 + a[i];
if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
	d2 = d2 + a[i];
}
printf("%d, %d\n", d1, d2);
}
