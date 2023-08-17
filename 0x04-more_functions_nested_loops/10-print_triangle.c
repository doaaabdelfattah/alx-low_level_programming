#include "main.h"

/**
 *print_triangle -  prints a triangle of hashes
 *&size: the size of the triangle
 *
 */

void print_triangle(int size)
{
	int row, col, col2;

	if (size > 0)
	{
	for (row = 0; row < size; row++)
	{
	for (col = 1 ; col < size - row; col++)
	_putchar(32);
	for (col2 = -1; col2 < row; col2++)
	_putchar(35);
	_putchar('\n');
	}
	}
	else
	_putchar('\n');


}
