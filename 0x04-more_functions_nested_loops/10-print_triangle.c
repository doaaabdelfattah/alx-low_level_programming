#include "main.h"

/**
 *print_square -  prints a square
 *&size: the size of the square
 *
 */

void print_square(int size)
{
	int row, col;

	for (row = 0; row <= size; row++)
	{
		for (col = 0; col < row; col++)
			_putchar(35);
		_putchar('\n');
	}


}
