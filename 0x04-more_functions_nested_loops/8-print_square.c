#include "main.h"

/**
 *print_square -  prints a square
 *&size: the size of the square
 *
 */

void print_square(int size)
{
	int row, col;
	if (size > 0)
	{
	for (row =0 ; row < size; row++)
	{
		for (col = 0; col < size; col++)
			_putchar(35);
		_putchar('\n');
	}
	}
	else
	_putchar('\n');
}
