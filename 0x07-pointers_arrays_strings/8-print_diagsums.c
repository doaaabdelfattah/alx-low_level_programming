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
for (i = 0; i < size; i++)
{
{
d1 = d1 + a[i];
}
}
printf("%i, %i", d1, d2);
}
