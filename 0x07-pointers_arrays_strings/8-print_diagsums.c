#include <stdio.h>
#include "main.h"
/**
 *print_chessboard -  function that prints the chessboard.
 *@a: parameter
 *
 */

void print_diagsums(int *a, int size)
{
int i, j;
int d1 = 0;
int d2 = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
{
d1 = d1 + a[i];
}
if (i == (size - j - 1))
{
d2 = d2 + a[i];
}
}
}
printf("%i, %i", d1, d2);
}
